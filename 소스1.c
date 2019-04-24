#include <stdio.h>
//=====================================================
// 1) 사용자에게 1개의 문자열을 입력받아서 문자열의 길이만큼만 저장하라... 
//	 ex) 배열 [hello  - 낭비 공간 -  ] 
//			  [hello\0] 
/*
void main()
{
//[hello\0       ]
int len = 0;
char * str;
char temp[1024];	// [aaa bbb ccc ---------------------------- ]
printf("input: ");
gets(temp);
//  1) temp저장된 문자열의 길이만큼 저장공간을 동적 할당 !!
len = strlen( temp ) + 1;

str = (char*)malloc(sizeof(char)*len);
strcpy(str, temp); // 문자열 복사 !!


puts(str);
printf("%d", _msize(str));
free(str);
}
*/
// 2) 사용자에게 5개의 정수를 입력받아 동적인 배열에 저장하세요. 
//	  입력 받을때만다 배열을 크기를 늘려 가세요. 
//    입력 : 5 [5] 
//    입력 : 123 [5][123]
//    입력 : 7    [5][123][7] 

void main()
{
	int * buf;
	int i, k;
	int input;
	for (i = 0; i < 5; i++)
	{
		printf("input: ");
		scanf("%d", &input);
		if (i == 0)
			buf = (int*)malloc(sizeof(int));
		else
			buf = (int*)realloc(buf, _msize(buf) + sizeof(int));

		buf[i] = input;
		for (k = 0; k < _msize(buf) / sizeof(int); k++)
			printf("[%d]", buf[k]);
		puts("");
	}

	free(buf);

}
//=====================================================
// 3) 사용자에게 5개의 문자열 입력 받아서 저장시켜라.. 문자열의 길이만큼 ! 
//=====================================================
// [  ] --> [hello\0]
// [  ] --> [bit\0]
// [  ] --> [aaa bbb ccc\0]
// [  ] --> [kkkkkkkkkkkkkkkkkkkk\0]
// [  ] --> [a\0]
//=====================================================
void main()
{
	char *str;
	char temp[200];
	int i;
	for (int i = 0; i < 5; i++) 
	{
		printf("input : ");
		scanf("%s", temp);
		str = (char*)malloc(sizeof(char) + 1);
		strcpy(str, temp);
		printf("[%s]", str);
		puts("");
	}
	free(str);
}
/*
void main()
{
int * buf;
int i, k;
char input;
for (i = 0; i < 5; i++)
{
printf("input: ");
scanf("%d", &input);
if (i == 0)
buf = (int*)malloc(sizeof(char));
else
buf = (int*)realloc(buf, _msize(buf) + sizeof(char);

buf[i] = input;
for (k = 0; k < _msize(buf) / sizeof(int); k++)
printf("[%d]", buf[k]);
puts("");
}

free(buf);

}
*/
// 4) 로또 프로그램 !! 
//=====================================================
// 구입 :  2
// [] -> [][][][][][]
// [] -> [][][][][][]
// []
// []
// []
//===================================================== 

void main()
{
	int *str;
	int * Lotto[5];
	int i;
	for (int i = 0; i < 6; i++)
	{
		printf("input : ");
		scanf("%d", * Lotto); 
		str = (int*)malloc(sizeof(int) + 1);
		strcpy(str, * Lotto);

		printf("[%d]", str);
		puts("");
	} 
	free(str);   // 종료

}


void buy(int * Lotto[5])
{
	int game, i, k;
	printf("게임수: ");
	scanf("%d", &game);
	for ( i = 0; i < game; i++)
	{
		Lotto[i] = (int*)malloc(sizeof(int) * 6);
		for ( k = 0; k < 6; k++)
		{
			Lotto[i][k] = rand() % 45 + 1;
		}
	}

}

void show(int ** Lotto)
{
	int i, j;
	for ( i = 0; i < 5; i++)
	{
		if (Lotto[i] = !NULL) {

		
		printf("[%p]", Lotto); // 주소값
		for ( j = 0; i < 6; i++)
		{
			printf("[%d]", Lotto[i][j]);
		}
		puts("");
		}
	}
}

void main()
{
	int i;
	//포인터 변수가 아무것도 참조하지 않는 상태
	int * Lotto[5] = { NULL }; //
	buy(Lotto);
	show(Lotto);

	for (i = 0; i < 5; i++)
	{
		if (Lotto[i] != NULL)
		{
			free(Lotto[i]);
		}
	}
}

// 5)  다음의 논리적인 구조의 배열을 구현해 보세요 ( 크기는 사용자 입력) 
//	[   ] --> [][][][]
//	[   ] --> [][][][][]
//	[   ] --> [][]
//	[   ] --> [][][][][]
//	[   ] --> [][][]
//=====================================================   




void buy(int * Lotto[5])
{
	int game, i, k;
	printf("게임수: ");
	scanf("%d", &game);
	for (i = 0; i < game; i++)
	{
		Lotto[i] = (int*)malloc(sizeof(int) * 6);
		for (k = 0; k < 6; k++)
		{
			Lotto[i][k] = rand() % 45 + 1;
		}
	}

}

void main()
{
	int i;
	//포인터 변수가 아무것도 참조하지 않는 상태
	int * Lotto[5] = { NULL }; //
	buy(Lotto);
	show(Lotto);

	for (i = 0; i < 5; i++)
	{
		if (Lotto[i] != NULL)
		{
			free(Lotto[i]);
		}
	}
}