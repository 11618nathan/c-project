//4. 로또 프로그램(포인터배열 이용)
//====================
// 구입: 2				-- 두개만 할당
// [] (lotto[0]) -> [][][][][][]
// [] (lotto[1]) -> [][][][][][]
// []
// []
// []

#include <stdio.h>
#include <malloc.h>		//malloc관련 함수들
#include <time.h>

void buy(int * lotto[5])				//로또 구입 함수
// void buy(int **lotto)
{
	int game, i, k;
	printf("게임 수(1~5): ");
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
		printf("[ %p ] --> ", lotto[i]);			//포인터출력
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
	//포인터배열 이용
	int * lotto[5] = {NULL};				//[  ][  ][  ][  ][  ]
	//NULL: 포인터변수가 아무것도 참조하지 않는 상태!!

	buy(lotto);
	show(lotto);
	
	//할당된 만큼만 해제!!
	for (i = 0; i < 5; i++) {
		if (lotto[i] != NULL)
			free(lotto[i]);
	}

}