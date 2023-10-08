#include "game.h"

//初始化
void Init(char board[ROWS][COLS], int rows, int cols, char sign)//星号和0之前统一搞成了字符，放到char，传到Init函数里
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = sign;//。。逐渐填充好两个二维数组
		}
	}
}

//打印游戏界面
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("------------------------------------------\n");
	for (i = 0; i <= row; i++)//这里是为了让玩家更容易看到几行几列，单独打印出来的
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//这里其实两个数组都被打印出来了，调试的时候可以在game()函数把mine数组也打印出来，这里默认是关掉的
		}
		printf("\n");
	}
	printf("------------------------------------------\n");
}


//布置地雷
void SetMine(char board[ROWS][COLS], int row, int col)//这里把mine数组传过来了，但是限制了范围为row*col，所以打印实际上还是在show的范围里
{
	int i = bomb;
	while (i)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			i--;
		}
	}
}

//获取坐标周围地雷数目（这里有两种方法，一种是用九宫格坐标列举出来，但用双重循环处理大量坐标时显然更方便，于是学习了这种方法而不是一一列举）
int Getbombcount(char mine[ROWS][COLS], int x, int y)
{
	int i, j, count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	return count;
}

//防止第一步就踩中地雷
void Prevent_jinx(char mine[ROWS][COLS], int x, int y)
{
	int m, n;
	while (1)
	{
		m = rand() % ROW + 1;
		n = rand() % COL + 1;
		if (mine[m][n] != '1')//重新随机一个没有雷的地方，将炸弹移动到那里
		{
			mine[m][n] = '1';
			mine[x][y] = '0';//并且把该玩家选择的位置设计为无雷
			break;
		}
	}
}

//显示周围雷数并实现非雷区连续展开
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL && mine[x][y] != '1')  //x，y在合法范围内，而且不是雷区
	{
		int count = Getbombcount(mine, x, y);
		if (count == 0)                              //如果count=0，则需要继续扩展,这里我在草稿纸上建立了一个以(x,y)为中心的3*3的坐标系，利用双重循环嵌套和函数递归实现"展开"的效果
		{
			show[x][y] = ' ';
			int i, j;
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] != '*') continue;   //如果已被排雷过则不用递归
					OpenMine(mine, show, i, j);
				}
			}
		}
		else                                         //count不为0 停止扩展
		{
			show[x][y] = count + '0';//利用ASCLL码值将数字型转化为字符型打印在show数组(即玩家所看到的数组上)
		}
	}
	else return;
}

//判定胜利条件
int Countshow(char board[ROWS][COLS], int row, int col, char sign)
{
	int count = 0, i, j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (board[i][j] == sign)
				count++;//计算*号数量
		}
	}
	return count;
}

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;

	while (1)
	{
		printf("输入坐标:>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (win == 0 && mine[x][y] == '1')//如果一上来就踩雷
			{
				Prevent_jinx(mine, x, y);
			}
			if (show[x][y] != '*')//如果选中重复坐标，则会报错(这里要注意用show数组来判断，第一次的时候就搞混了)
			{
				printf("该坐标被排查过了");
			}
			if (mine[x][y] == '1')//踩雷
			{
				printf("踩到雷啦！\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else                  //未踩中雷                 
			{
				OpenMine(mine, show, x, y);
				
				if (Countshow(show, ROW, COL, '*') == bomb)//如果*号为10个，说明找到了10个雷，获胜
				{
					Displayboard(show, ROW, COL);
					printf("排雷成功\n");
					break;
				}
				Displayboard(show, ROW, COL);
			}
		}
		else
		{
			printf("越界 重新输入\n");
		}
	}
}
