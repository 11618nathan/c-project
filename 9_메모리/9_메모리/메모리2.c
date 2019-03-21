//����
/*
#include <stdio.h>

void * CALLOC( int cnt, int size) {
	void * p = malloc(cnt*size);
	memset(p, 0, _msize(p));				// p�� _msize(p)��ŭ�� 0���� �ʱ�ȭ���ش�.
	return p;
}

void main() {
	int * parking = (int *)CALLOC(5, sizeof(int));
}
*/

//===============================================
//	���Ҵ�
//===============================================

#include <stdio.h>
//realloc --> ���Ҵ�/ ���� �Ҵ�� �޸��� ũ�� ����

void main()
{
	int i;
	//20����Ʈ �Ҵ�
	int * parking = (int*)calloc(5, sizeof(int));

	for (i = 0; i < _msize(parking) / sizeof(int); i++)
		printf("[%d]", parking[i]);
	puts("");

	//���� �Ҵ�� ũ���� 2��� ����!!
/*
	// 1. ���۾� (ū�� ����-�̻�-������ ����)
	//	-1. ���� �̻簥 ������ Ȯ��
	int * newParking = (int*)malloc( _msize(parking) * 2);

	//	-2. ����Ÿ�� �̵�(for��)
//	for (i = 0; i < _msize(parking) / sizeof(int); i++)
//		newParking[i] = parking[i];

	//*�޸�ī�� �Լ�
	memcpy( newParking, parking, _msize(parking)); //parking�� �ִ� ����, _msize��ŭ, newParking�� �Ѱܶ�.

	//	-3. ������ ������ ����
	free(parking);

	for (i = 0; i < _msize(newParking) / sizeof(int); i++)
		printf("[%d]", newParking[i]);
	free(newParking);

*/

	// 2. realloc �Լ� �̿�
	parking = (int*)realloc( parking, _msize(parking)*2 );

	for (i = 0; i < _msize(parking) / sizeof(int); i++)
		printf("[%d]", parking[i]);
	free(parking);
}






















