// 개인별 과제
// 주차 관리 프로그램

// [0][0][0][0][0]

// 입차:2 4885
// [0] [4885] [0][0][0]
// 출차: 4885
// [0][0][0][0][0]

// 전체 출력

#include <stdio.h>
#include <windows.h>

void input(int(*place), int * carNum, int * i, int *j)
{
	printf("주차 위치를 선택해주세요 : ");
	scanf("%d", &place);
	printf("차량 번호를 입력해주세요 : ");
	scanf("%d", &carNum); 
	for (*i = 0; *i < 5; *i++) {
		if (*i == *place)
			printf("[ %d ]", *carNum);
		else if (*i != *place)
			printf("[ 0 ]");
		else if (*i >= 5)
			printf("위치를 다시 선택해 주세요 : ");
	} 
}

void output(int(*place), int * carNum, int * i, int *j)
{
	printf("주차 위치를 선택해주세요 : ");
	scanf("%d", &place);
	printf("차량 번호를 입력해주세요 : ");
	scanf("%d", &carNum);
	for (*i = 0; *i < 5; *i++) {
		if (*i == *place)
			printf("[ %d ]", 0);
		else if (*i != *place)
			printf("[ 0 ]");
		else if (*i >= 5)
			printf("위치를 다시 선택해 주세요 : ");
	}
}

void showPlace(int(*place), int * i)
{ 
	for ( *i = 0; *i < 5; *i++)
	{
		printf("[%d]", place[*i]);
	}
}

void main()
{
	int num;
	int place[5] = { 0,0,0,0,0 };
	int i, j; 
	int carNum; 
	while (1)
	{
		printf("입차 : 1,    출차 : 2,    주차 상태 : 3,    나머지 숫자: 종료\n");
		scanf("%d", &num);
		system("cls");
		if (num == 1)
		{
			input(place, &carNum, &i, &j); 
		}
		else if (num == 2)
		{
			output(place, &carNum, &i, &j);
		}
		else if (num == 3)
		{
			showPlace(place, &i);
		}
		else
			break;
		
	}

}