//==============================================
// 1. 사용자에게 주차장의 크기를 입력 받아 할당하고.. 
//    모두 0으로 초기화 하세요. 
//	입력 : 4    [0][0][0][0]
//==============================================
// 2. 문제1에서 할당된 배열을 현재 크기의 반으로 줄이세요. 
//			   [0][0]
//==============================================
#include <stdio.h>
#include <malloc.h>

void main() {
	int size = 0, i=0, answer=0;
	int * Parking;

	printf("주차장 크기를 입력하세요");
	scanf("%d", &size);

	Parking = (int*)malloc( sizeof(int)*size );
	memset( Parking, 0, _msize(Parking) );
	printf("주차장 크기: %d", _msize(Parking));
	for (i = 0; i < _msize(Parking); i++) {
		printf("[ %4d ]", Parking[i]);

	}

	printf("주차장의 크기를 반으로 줄일려면 1을 누르세요");
	scanf("%d", &answer);
	if (answer == 1) {
		Parking = (int*)realloc(Parking, _msize(Parking) / 2);
	}
	printf("주차장 크기: %d", _msize(Parking));

	free(Parking);
}