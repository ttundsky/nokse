#include "game.h"

//��ʼ��
void Init(char board[ROWS][COLS], int rows, int cols, char sign)//�Ǻź�0֮ǰͳһ������ַ����ŵ�char������Init������
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = sign;//����������������ά����
		}
	}
}

//��ӡ��Ϸ����
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("------------------------------------------\n");
	for (i = 0; i <= row; i++)//������Ϊ������Ҹ����׿������м��У�������ӡ������
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//������ʵ�������鶼����ӡ�����ˣ����Ե�ʱ�������game()������mine����Ҳ��ӡ����������Ĭ���ǹص���
		}
		printf("\n");
	}
	printf("------------------------------------------\n");
}


//���õ���
void SetMine(char board[ROWS][COLS], int row, int col)//�����mine���鴫�����ˣ����������˷�ΧΪrow*col�����Դ�ӡʵ���ϻ�����show�ķ�Χ��
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

//��ȡ������Χ������Ŀ�����������ַ�����һ�����þŹ��������оٳ���������˫��ѭ�������������ʱ��Ȼ�����㣬����ѧϰ�����ַ���������һһ�о٣�
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

//��ֹ��һ���Ͳ��е���
void Prevent_jinx(char mine[ROWS][COLS], int x, int y)
{
	int m, n;
	while (1)
	{
		m = rand() % ROW + 1;
		n = rand() % COL + 1;
		if (mine[m][n] != '1')//�������һ��û���׵ĵط�����ը���ƶ�������
		{
			mine[m][n] = '1';
			mine[x][y] = '0';//���ҰѸ����ѡ���λ�����Ϊ����
			break;
		}
	}
}

//��ʾ��Χ������ʵ�ַ���������չ��
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL && mine[x][y] != '1')  //x��y�ںϷ���Χ�ڣ����Ҳ�������
	{
		int count = Getbombcount(mine, x, y);
		if (count == 0)                              //���count=0������Ҫ������չ,�������ڲݸ�ֽ�Ͻ�����һ����(x,y)Ϊ���ĵ�3*3������ϵ������˫��ѭ��Ƕ�׺ͺ����ݹ�ʵ��"չ��"��Ч��
		{
			show[x][y] = ' ';
			int i, j;
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] != '*') continue;   //����ѱ����׹����õݹ�
					OpenMine(mine, show, i, j);
				}
			}
		}
		else                                         //count��Ϊ0 ֹͣ��չ
		{
			show[x][y] = count + '0';//����ASCLL��ֵ��������ת��Ϊ�ַ��ʹ�ӡ��show����(�������������������)
		}
	}
	else return;
}

//�ж�ʤ������
int Countshow(char board[ROWS][COLS], int row, int col, char sign)
{
	int count = 0, i, j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (board[i][j] == sign)
				count++;//����*������
		}
	}
	return count;
}

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;

	while (1)
	{
		printf("��������:>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (win == 0 && mine[x][y] == '1')//���һ�����Ͳ���
			{
				Prevent_jinx(mine, x, y);
			}
			if (show[x][y] != '*')//���ѡ���ظ����꣬��ᱨ��(����Ҫע����show�������жϣ���һ�ε�ʱ��͸����)
			{
				printf("�����걻�Ų����");
			}
			if (mine[x][y] == '1')//����
			{
				printf("�ȵ�������\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else                  //δ������                 
			{
				OpenMine(mine, show, x, y);
				
				if (Countshow(show, ROW, COL, '*') == bomb)//���*��Ϊ10����˵���ҵ���10���ף���ʤ
				{
					Displayboard(show, ROW, COL);
					printf("���׳ɹ�\n");
					break;
				}
				Displayboard(show, ROW, COL);
			}
		}
		else
		{
			printf("Խ�� ��������\n");
		}
	}
}
