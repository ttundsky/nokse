#include "game.h"

struct info
{
	char name[20];
	int vn;
	int group;
};

struct info i = { "扫雷",1,364};

void menu()
{
	printf("%s %d %d\n", i.name, i.vn, i.group);
	printf("************************\n");
	printf("*****  1.开始游戏  *****\n");
	printf("*****  0.结束游戏  *****\n");
	printf("************************\n");

}
void game()//第三步，完善game()函数
{
	//定义存放地雷的数组 和 玩家游玩的数组
	char  mine[ROWS][COLS], show[ROWS][COLS];

	//初始化数组，这里建立两个数组，用户输入的时候判定在里数组，但是显示的时候显示在表数组，非常巧妙的实现了扫雷游戏，很难找到比该方法更好的设计
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS, '*');
	
	//布置地雷
	SetMine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);//调试开关QAQ（调试时请解除双斜杠封印=A=）
	Displayboard(show, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()//第一步，建立主函数，创建游戏主页
{
	int input;//定义一个整形变量用于存放用户输入的数字
	srand((unsigned int)time(NULL));//生成随机数
	do//利用do while循环判断用户的选择
	{
		menu();//调用打印菜单的函数
		printf("请输入:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//第二步，建立游戏主体，创建game函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n\n");
			break;
		}

	} while (input);
	return 0;
}
