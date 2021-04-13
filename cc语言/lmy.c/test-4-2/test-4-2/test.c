#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
void game()
{
	int ret=0;
	char board[ROW][COL] = {0};
	InitBoard(board,ROW ,COL);
	DisplayBorad(board,ROW,COL);
	while(1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBorad(board,ROW,COL);
		ret = Iswin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		DisplayBorad(board,ROW,COL);
		ret = Iswin(board,ROW,COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if( ret=='#')
	{
		printf("����Ӯ\n");
	}
	else if(ret='Q')
	{
		printf("ƽ��\n");
	}
	/*else if()*/
}

//������������Ϸ
void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit****\n");
	printf("*************************\n");

}
void test()
{
	int input=0;
	 srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��:\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}



