//==============================================
// 1. ����ڿ��� �������� ũ�⸦ �Է� �޾� �Ҵ��ϰ�.. 
//    ��� 0���� �ʱ�ȭ �ϼ���. 
//	�Է� : 4    [0][0][0][0]
//==============================================
// 2. ����1���� �Ҵ�� �迭�� ���� ũ���� ������ ���̼���. 
//			   [0][0]
//==============================================
#include <stdio.h>
#include <malloc.h>

void main() {
	int size = 0, i=0, answer=0;
	int * Parking;

	printf("������ ũ�⸦ �Է��ϼ���");
	scanf("%d", &size);

	Parking = (int*)malloc( sizeof(int)*size );
	memset( Parking, 0, _msize(Parking) );
	printf("������ ũ��: %d", _msize(Parking));
	for (i = 0; i < _msize(Parking); i++) {
		printf("[ %4d ]", Parking[i]);

	}

	printf("�������� ũ�⸦ ������ ���Ϸ��� 1�� ��������");
	scanf("%d", &answer);
	if (answer == 1) {
		Parking = (int*)realloc(Parking, _msize(Parking) / 2);
	}
	printf("������ ũ��: %d", _msize(Parking));

	free(Parking);
}