#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// 오류 메세지 제거 방법
#pragma warning(disable : 4996)

/*
1번
void main()
{
	int size;
	int * buf;
	scanf("%d", &size);

	buf = (int*)malloc(sizeof(int)*size);
	memset(buf, 0, _msize(buf));
}
*/

/*
2번
void main()
{
	int size;
	int * buf;
	scanf("%d", &size);

	buf = (int*)malloc(sizeof(int)*size);
	memset(buf, 0, _msize(buf)); // 0으로 초기화 !! 

	buf = (int*)realloc(buf, _msize(buf) / 2);

	free(buf);
}
*/

/*
3번
void main()
{
char * str;
char  buf[256]; //
gets( buf ); // 입력 : [ABC\0                               ]

str = (char*)malloc( sizeof(char) * strlen(buf)+1 );
strcpy( str , buf);

free(str);
}
*/


/*
4번
int main()
{
	int i;
	int num[100];
	int * arr[10];

	for (int i = 0; i<5; i++)
	{
		printf("숫자를 입력해 주세요 : ");
		scanf(num);
		arr = (int *)malloc(sizeof((num)+1));
	}

	for (i = 0; i<5; i++)
	{
		printf("%s\n", arr[i]);
	}

	for (i = 0; i<5; i++)
	{
		free(arr[i]);
	}

	return 0;

}
*/

/*
5번
int main()
{
int i;
int num[100];
int * arr[10];

for (int i = 0; i<5; i++)
{
printf("숫자를 입력해 주세요 : ");
scanf(num);
arr = (int *)malloc(sizeof((num)+1));
}

for (i = 0; i<5; i++)
{
printf("%s\n", arr[i]);
}

for (i = 0; i<5; i++)
{
free(arr[i]);
}

return 0;

}
*/

/*
6번
typedef struct Student
{
	int sno;		  // 학번 
	char name[20];// 이름 
}STUDENT;
//==============================================================
typedef struct lib
{
	STUDENT * Seat[3][3]; // 2차원 배열 
	int  stuCount;
}LIB;
//==============================================================
//  도서관 자리 예약 시스템 !! 
//==============================================================
// 확인
void showLib(LIB GguLib)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (GguLib.Seat[i][j] == NULL)
				printf("[ 빈자리 ]");
			else
				printf("[ %d ]", GguLib.Seat[i][j]->sno);
		}
		puts("");
	}
}
// 도서관 초기화 
void initLib(LIB GguLib)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			GguLib.Seat[i][j] = NULL;
		}
	}
}

// 입실
void inputSeat(LIB * GguLib) // 좌석 확보 !!
{
	showLib(*GguLib);
	int x, y;
	printf("좌석 선택 ( 가로, 세로) :");
	scanf("%d %d", &x, &y);

	GguLib->Seat[x][y] = (LIB*)malloc(sizeof(LIB));

	printf("학번 : ");
	scanf("%d", &GguLib->Seat[x][y]->sno);
	getchar();
	//fflush(stdin);
	printf("이름 :");
	gets(GguLib->Seat[x][y]->name);

}

// 퇴실
void outputSeat(LIB * GguLib) // 좌석 확보 !!
{
	showLib(*GguLib);
	int x, y;
	printf("좌석 선택 ( 가로, 세로) :");
	scanf("%d %d", &x, &y);

	GguLib->Seat[x][y] = (LIB*)malloc(sizeof(LIB));

	printf("학번 : ");
	scanf("%d", &GguLib->Seat[x][y]->NULL);
	getchar();
	printf("이름 :");
	gets(GguLib->Seat[x][y]->NULL);
}

// 자리 이동
void outputSeat(LIB * GguLib) // 좌석 확보 !!
{
	showLib(*GguLib);
	int x, y;
	printf("좌석 선택 ( 가로, 세로) :");
	scanf("%d %d", &x, &y);

	GguLib->Seat[x][y] = (LIB*)malloc(sizeof(LIB));

	printf("학번 : ");
	scanf("%d", &GguLib->Seat[x][y]->sno);
	getchar();
	printf("이름 :");
	gets(GguLib->Seat[x][y]->name);
}

void main()
{
	LIB GguLib;

	memset(&GguLib, 0, sizeof(LIB));

	initLib(GguLib);
	showLib(GguLib);
	inputSeat(&GguLib);
	showLib(GguLib);

}
*/

/*
8번
// 검색
void search(int key)
{
	NODE * s = head;
	while (p != tail)
	{
		if (p->data == key)
		{
			printf("key");
			return p;
		}
		p = p->next;
	}
	return NULL;
}
*/