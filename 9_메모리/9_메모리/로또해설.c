//4. �ζ� ���α׷�(�����͹迭 �̿�)
//====================
// ����: 2				-- �ΰ��� �Ҵ�
// [] (lotto[0]) -> [][][][][][]
// [] (lotto[1]) -> [][][][][][]
// []
// []
// []

#include <stdio.h>
#include <malloc.h>		//malloc���� �Լ���
#include <time.h>

void buy(int * lotto[5])				//�ζ� ���� �Լ�
// void buy(int **lotto)
{
	int game, i, k;
	printf("���� ��(1~5): ");
	scanf("%d", &game);

	for (i = 0; i < game; i++)
	{
		lotto[i] = (int*)malloc(sizeof(int) * 6);
		for (k = 0; k < 6; k++)
			lotto[i][k] = rand() % 45 + 1;
	}
}

void show(int **lotto)
{
	int i, j;
	for (i = 0; i < 5; i++) {
		printf("[ %p ] --> ", lotto[i]);			//���������
		if (lotto[i] != NULL) {
			for (j = 0; j < 6; j++) {
				printf("[ %d ]", lotto[i][j]);
			}
		}
		puts("");
	}
}

void main() 
{
//	int lotto[5][6] = { 0 };

	int i;
	//�����͹迭 �̿�
	int * lotto[5] = {NULL};				//[  ][  ][  ][  ][  ]
	//NULL: �����ͺ����� �ƹ��͵� �������� �ʴ� ����!!

	buy(lotto);
	show(lotto);
	
	//�Ҵ�� ��ŭ�� ����!!
	for (i = 0; i < 5; i++) {
		if (lotto[i] != NULL)
			free(lotto[i]);
	}

}