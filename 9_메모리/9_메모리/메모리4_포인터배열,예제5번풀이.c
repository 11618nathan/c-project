//===================================================
// �����͹迭
//		--> �迭�� ���ҷ� �����͸� ���� �迭!!
//===================================================

#include <stdio.h>

void main()
{
	int a1 = 10, a2 = 20, a3 = 30, a4 = 40, a5 = 50;
	int i,j;
	int size;

	//������ �迭�� ����!!
	int arr[5];				// int�� �ڷᰡ 5�� �ִ� �迭   [][][][][]
	int * parr[5];			// int�� �����Ͱ� 5�� �ִ� �迭 , ��� ������ ������ ũ��� 4����Ʈ. ���� ���� ������ �迭�� ũ��� 20.

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