//질문
/*
#include <stdio.h>

void * CALLOC( int cnt, int size) {
	void * p = malloc(cnt*size);
	memset(p, 0, _msize(p));				// p를 _msize(p)만큼을 0으로 초기화해준다.
	return p;
}

void main() {
	int * parking = (int *)CALLOC(5, sizeof(int));
}
*/

//===============================================
//	재할당
//===============================================

#include <stdio.h>
//realloc --> 재할당/ 현재 할당된 메모리의 크기 변경

void main()
{
	int i;
	//20바이트 할당
	int * parking = (int*)calloc(5, sizeof(int));

	for (i = 0; i < _msize(parking) / sizeof(int); i++)
		printf("[%d]", parking[i]);
	puts("");

	//현재 할당된 크기의 2배로 증가!!
/*
	// 1. 수작업 (큰집 마련-이사-작은집 정리)
	//	-1. 새로 이사갈 공간을 확보
	int * newParking = (int*)malloc( _msize(parking) * 2);

	//	-2. 데이타를 이동(for문)
//	for (i = 0; i < _msize(parking) / sizeof(int); i++)
//		newParking[i] = parking[i];

	//*메모리카피 함수
	memcpy( newParking, parking, _msize(parking)); //parking에 있는 값을, _msize만큼, newParking에 넘겨라.

	//	-3. 기존의 공간을 정리
	free(parking);

	for (i = 0; i < _msize(newParking) / sizeof(int); i++)
		printf("[%d]", newParking[i]);
	free(newParking);

*/

	// 2. realloc 함수 이용
	parking = (int*)realloc( parking, _msize(parking)*2 );

	for (i = 0; i < _msize(parking) / sizeof(int); i++)
		printf("[%d]", parking[i]);
	free(parking);
}






















