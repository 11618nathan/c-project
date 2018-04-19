
// ������� ����
#include <stdio.h>

#include <Windows.h>

#include<conio.h>

#include <stdlib.h>

#include <time.h>


// define 
#define BROAD_X 12 //������ ����ũ�� 
#define BROAD_Y 24 //������ ����ũ�� 
#define BROAD_X_W 3 //������ ��ġ���� 
#define BROAD_Y_W 1 //������ ��ġ���� 


#define ACTIVE_BLOCK -2
#define CEILLING -1
#define EMPTY 0
#define WALL 1
#define INACTIVE_BLOCK 2

// ���� ����
int best_score = 0;
int last_score = 0;
int level = 0;
int score = 0;
int level_goal = 1000;
int key = 0;
int crush = 0;
int cnt = 0;
int speed = 1000;

// ���� ��������
int main_org[BROAD_Y][BROAD_X];
int main_cpy[BROAD_Y][BROAD_X];

int sx, sy;
int key;

// ��� ���� ����
int block_type;
int block_rotation;
int block_type_next;

int blocks[7][4][4][4] = {
	{ { 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },
	{ 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },
	{ 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },
	{ 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 } },
	{ { 0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0 }
	,{ 0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0 },
	{ 0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0 },
	{ 0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0 } },
	{ { 0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0 }
	,{ 0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0 },
	{ 0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0 },
	{ 0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0 } },
	{ { 0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0 },{ 0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0 },
	{ 0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0 },{ 0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0 } },
	{ { 0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,0 },
	{ 0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0 },{ 0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0 } },
	{ { 0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,0,1,0,0,0,1,0,0,1,1,0,0 },
	{ 0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0 },{ 0,0,0,0,0,1,1,0,0,1,0,0,0,1,0,0 } },
	{ { 0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,0,1,0,0,0,1,1,0,0,1,0,0 },
	{ 0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0 },{ 0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0 } }
};



// �Լ� ���Ǻ�
void title();
void reset();
void reset_main();
void draw_map();
void draw_main();
void new_block();
void draw_main();
void check_game_over();


// X,Y ��ǥ ���� �Լ�
void gotoxy(int x, int y)
{
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

typedef enum
{
	NOCURSOR, SOLIDCURSOR, NORMALCURSOR
} CURSOR_TYPE;
void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;

	switch (c) {
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NORMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}


// MAIN �Լ�
int main()
{
	title();
	reset();

}





// ���� ȭ��
void title(void)
{
	// x ��ǥ
	int x = 5;

	// y ��ǥ
	int y = 5;

	// Ÿ��Ʋ �������� ���� ����
	int cnt;

	gotoxy(x, y + 0); printf("��������������������������");
	gotoxy(x, y + 1); printf("��������������������������");
	gotoxy(x, y + 2); printf("��������������������������");
	gotoxy(x, y + 3); printf("��������������������������");
	gotoxy(x, y + 4); printf("��������������������������");
	gotoxy(x, y + 5); printf("��������������������������");
	gotoxy(x, y + 6); printf("��������������������������");
	gotoxy(x, y + 7); printf("");
	gotoxy(x + 5, y + 8); printf("Please Enter Any Key to Start!");
	gotoxy(x, y + 8); printf(" ");
	gotoxy(x, y + 8); printf(" ");
	gotoxy(x, y + 8); printf(" ");
	gotoxy(x, y + 8); printf(" ");
	gotoxy(x, y + 8); printf(" ");
	puts("");
}


// ���� �ʱ�ȭ
void reset()
{
	FILE *file = fopen("score.dat", "rt");

	if (file == 0)
	{
		best_score = 0;
	}
	else
	{
		fscanf(file, "%d", &best_score);
		fclose(file);
	}
	level = 1;
	score = 0;
	level_goal = 1000;
	key = 0;
	crush = 0;
	cnt = 0;
	speed = 1000;

	system("cls");

	reset_main();
	draw_map();
	draw_main();

	block_type_next = rand() % 7;
	new_block();
}


//	��� ���� �Լ�
void new_block()
{
	int i, j;
	
}

void draw_main()
{
	int i = 0;
	int j = 0;

	for ( j = 1; j < BROAD_X - 1; j++)
	{
		if (main_org[3][j] = EMPTY)
		{
			main_org[3][j] = CEILLING;
		}
	}

	for (i = 0; i < BROAD_Y; i++)
	{
		for (j = 0; j < BROAD_X; j++)
		{
			if (main_cpy[i][j] != main_org[i][j])
			{
				gotoxy(BROAD_X_W + j, BROAD_Y_W + i);
				switch (main_org[i][j])
				{
				case EMPTY:
					printf("  ");
					break;
				case CEILLING:
					printf(". ");
					break;
				case WALL:
					printf("��");
					break;
				case INACTIVE_BLOCK: 
					printf("��");
					break;
				case ACTIVE_BLOCK:
					printf("��");
					break;
				}
			}
		}
	}
}

void check_game_over()
{
	int i;
	int x = 5;
	int y = 5;

	for (i = 0; i < BROAD_X; i++)
	{
		if (main_org[3][i] > 0)
		{
			gotoxy(x, y + 0); printf("��������������������������");
			gotoxy(x, y + 1); printf("��������������������������");
			gotoxy(x, y + 2); printf("��������������������������");
			gotoxy(x, y + 3); printf("��������������������������");
			gotoxy(x, y + 4); printf("��������������������������");
			gotoxy(x, y + 5); printf("��������������������������");
			gotoxy(x, y + 6); printf("��������������������������");
			gotoxy(x, y + 7); printf("");
			gotoxy(x + 5, y + 8); printf("G A M E O V E R");
			gotoxy(x + 6, y + 8); printf("YOUR SCORE %6d", score);
			gotoxy(x, y + 8); printf("Press any key to restart.");
			gotoxy(x, y + 8); printf(" ");
			gotoxy(x, y + 8); printf(" ");
			gotoxy(x, y + 8); printf(" ");
			last_score = score;

			if (score > best_score)
			{

			}
		}
	}

}