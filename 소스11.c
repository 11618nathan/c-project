#include <stdio.h>
//=====================================================
// 1) ����ڿ��� 1���� ���ڿ��� �Է¹޾Ƽ� ���ڿ��� ���̸�ŭ�� �����϶�... 
//	 ex) �迭 [hello  - ���� ���� -  ] 
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
//  1) temp����� ���ڿ��� ���̸�ŭ ��������� ���� �Ҵ� !!
len = strlen( temp ) + 1;

str = (char*)malloc(sizeof(char)*len);
strcpy(str, temp); // ���ڿ� ���� !!


puts(str);
printf("%d", _msize(str));
free(str);
}
*/
// 2) ����ڿ��� 5���� ������ �Է¹޾� ������ �迭�� �����ϼ���. 
//	  �Է� ���������� �迭�� ũ�⸦ �÷� ������. 
//    �Է� : 5 [5] 
//    �Է� : 123 [5][123]
//    �Է� : 7    [5][123][7] 

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
// 3) ����ڿ��� 5���� ���ڿ� �Է� �޾Ƽ� ������Ѷ�.. ���ڿ��� ���̸�ŭ ! 
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
// 4) �ζ� ���α׷� !! 
//=====================================================
// ���� :  2
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
	free(str);   // ����

}


void buy(int * Lotto[5])
{
	int game, i, k;
	printf("���Ӽ�: ");
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

		
		printf("[%p]", Lotto); // �ּҰ�
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
	//������ ������ �ƹ��͵� �������� �ʴ� ����
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

// 5)  ������ ������ ������ �迭�� ������ ������ ( ũ��� ����� �Է�) 
//	[   ] --> [][][][]
//	[   ] --> [][][][][]
//	[   ] --> [][]
//	[   ] --> [][][][][]
//	[   ] --> [][][]
//=====================================================   




void buy(int * Lotto[5])
{
	int game, i, k;
	printf("���Ӽ�: ");
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
	//������ ������ �ƹ��͵� �������� �ʴ� ����
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