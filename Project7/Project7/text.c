#include "game.h"

struct info
{
	char name[20];
	int vn;
	int group;
};

struct info i = { "ɨ��",1,364};

void menu()
{
	printf("%s %d %d\n", i.name, i.vn, i.group);
	printf("************************\n");
	printf("*****  1.��ʼ��Ϸ  *****\n");
	printf("*****  0.������Ϸ  *****\n");
	printf("************************\n");

}
void game()//������������game()����
{
	//�����ŵ��׵����� �� ������������
	char  mine[ROWS][COLS], show[ROWS][COLS];

	//��ʼ�����飬���ｨ���������飬�û������ʱ���ж��������飬������ʾ��ʱ����ʾ�ڱ����飬�ǳ������ʵ����ɨ����Ϸ�������ҵ��ȸ÷������õ����
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS, '*');
	
	//���õ���
	SetMine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);//���Կ���QAQ������ʱ����˫б�ܷ�ӡ=A=��
	Displayboard(show, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()//��һ����������������������Ϸ��ҳ
{
	int input;//����һ�����α������ڴ���û����������
	srand((unsigned int)time(NULL));//���������
	do//����do whileѭ���ж��û���ѡ��
	{
		menu();//���ô�ӡ�˵��ĺ���
		printf("������:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//�ڶ�����������Ϸ���壬����game����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n\n");
			break;
		}

	} while (input);
	return 0;
}
