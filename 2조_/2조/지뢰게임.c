#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//=======================================================================================
// - 지뢰찾기
// - 오목
// - 빙고
// - 스타크레프트 맵 에디터
// - 애니팡
//=======================================================================================
#define ROW  5 
#define COL  5
#define BOOM -1 
#define EMPTY 0 
#define OPEN 9999
#define CLOSE 8888 

void CreateLand();
void CreateLand2();
void Print_arr();	// 만들어진 타일 출력

int arr[ROW][COL];	// 타일의 값을 저장하기 위한 2차원 배열 선언

int main(void)
{
	srand((int)time(NULL));	// 난수 생성 함수

	printf("지뢰 = 0 \n");
	CreateLand();
	Print_arr();

	// 생성된 지뢰를 이용해 주변 타일의 숫자를 바꾸는 함수
	printf("지뢰에 맞게 값 변경 \n");
	CreateLand2();
	Print_arr();

	return 0;
}

// 지뢰를 랜덤으로 생성
void CreateLand()
{
	int i, j, count = 0;	// 반복문에 쓰일 변수와 지뢰 개수를 저장할 변수 선언
							// count 값에 따라 타일의 숫자값이 바뀜

	while (count != 10)
	{
		count = 0;
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				arr[i][j] = rand() % 8;
				if (arr[i][j] == 0)
					count++;
			}
		}
	}
}

// 생성된 지뢰를 이용해 주변 타일들의 값을 생성
void CreateLand2()
{
	int i, j, count;	// i:행, j:열, count:지뢰개수

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			count = 0;	// 하나의 타일 값 지정이 끝나면 초기화
			if (arr[i][j] != 0) {	// 타일의 값이 지뢰인지 아닌지 검사, 지뢰가 아닐 경우 아래 if문 실행
				if (i == 0) {	// 첫 번째 행일 경우
					if (j == 0) {	// 첫 번째 열일 경우
									// 첫 번째 행의 첫 번째 열 : 주변 타일이 우측,우측하단,하단 밖이 없으므로 세 개의 타일만 검사
						if (arr[i][j + 1] == 0)	// 우측 타일 검사
							count++;
						if (arr[i + 1][j + 1] == 0)	// 우측 하단 타일 검사
							count++;
						if (arr[i + 1][j] == 0)	// 하단 타일 검사
							count++;
						// 타일들 중 지뢰인 타일이 나오면 count를 하나 증가시킨다.
					}
					else if (j == 8) {	// 첫 번째 줄 마지막 열
						if (arr[i + 1][j] == 0)	// 하단 타일 검사
							count++;
						if (arr[i + 1][j - 1] == 0)	// 좌측 하단 타일 검사
							count++;
						if (arr[i][j - 1] == 0)	// 좌측 타일 검사
							count++;
					}
				}
				else if (i == 8) {	// 마지막 줄일 때 위와 같이 j=0,j=8 일때 검사

				}
				else
				{
					// i가 1~7일 때 j=0, j=8, else로 나눠 검사
				}
			}
			switch(count)	// 주변에 있는 지뢰 개수에 따라 타일의 값을 지정
				case 0:	// 지뢰가 하나도 없을 경우
					arr[i][j] = 9;
					break;
				case 1:
					arr[i][j] = 1;	// 지뢰가 하나 있을 경우 값을 1로 지정
					break;
				case 2:
					// 지뢰가 두 개 있을 경우 값을 2로 지정
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
		}
	}
}