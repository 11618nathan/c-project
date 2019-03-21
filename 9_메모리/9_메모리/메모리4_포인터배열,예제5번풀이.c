//===================================================
// 포인터배열
//		--> 배열의 원소로 포인터를 갖는 배열!!
//===================================================

#include <stdio.h>

void main()
{
	int a1 = 10, a2 = 20, a3 = 30, a4 = 40, a5 = 50;
	int i,j;
	int size;

	//포인터 배열의 선언!!
	int arr[5];				// int형 자료가 5개 있는 배열   [][][][][]
	int * parr[5];			// int형 포인터가 5개 있는 배열 , 모든 포인터 변수의 크기는 4바이트. 따라서 현재 포인터 배열의 크기는 20.

//	parr[0] = &a1;

	for (i = 0; i < 5; i++)
	{
		printf("input: ");
		scanf("%d", &size);
		parr[i] = (int*)calloc(size, sizeof(int));
	}

	for (i = 0; i < 5; i++)
	{
		printf("[ %p ] --> ", parr[i]);
		for (j = 0; j < _msize(parr[i]) / sizeof(int); j++) {
			printf("[ %d ]", parr[i][j]);
		}
		puts("");
	}

	for (i = 0; i < 5; i++) 
		free(parr[i]);

}