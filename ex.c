#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// ���� �޼��� ���� ���
#pragma warning(disable : 4996)

/*
1��
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
2��
void main()
{
	int size;
	int * buf;
	scanf("%d", &size);

	buf = (int*)malloc(sizeof(int)*size);
	memset(buf, 0, _msize(buf)); // 0���� �ʱ�ȭ !! 

	buf = (int*)realloc(buf, _msize(buf) / 2);

	free(buf);
}
*/

/*
3��
void main()
{
char * str;
char  buf[256]; //
gets( buf ); // �Է� : [ABC\0                               ]

str = (char*)malloc( sizeof(char) * strlen(buf)+1 );
strcpy( str , buf);

free(str);
}
*/


/*
4��
int main()
{
	int i;
	int num[100];
	int * arr[10];

	for (int i = 0; i<5; i++)
	{
		printf("���ڸ� �Է��� �ּ��� : ");
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
5��
int main()
{
int i;
int num[100];
int * arr[10];

for (int i = 0; i<5; i++)
{
printf("���ڸ� �Է��� �ּ��� : ");
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
6��
typedef struct Student
{
	int sno;		  // �й� 
	char name[20];// �̸� 
}STUDENT;
//==============================================================
typedef struct lib
{
	STUDENT * Seat[3][3]; // 2���� �迭 
	int  stuCount;
}LIB;
//==============================================================
//  ������ �ڸ� ���� �ý��� !! 
//==============================================================
// Ȯ��
void showLib(LIB GguLib)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (GguLib.Seat[i][j] == NULL)
				printf("[ ���ڸ� ]");
			else
				printf("[ %d ]", GguLib.Seat[i][j]->sno);
		}
		puts("");
	}
}
// ������ �ʱ�ȭ 
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

// �Խ�
void inputSeat(LIB * GguLib) // �¼� Ȯ�� !!
{
	showLib(*GguLib);
	int x, y;
	printf("�¼� ���� ( ����, ����) :");
	scanf("%d %d", &x, &y);

	GguLib->Seat[x][y] = (LIB*)malloc(sizeof(LIB));

	printf("�й� : ");
	scanf("%d", &GguLib->Seat[x][y]->sno);
	getchar();
	//fflush(stdin);
	printf("�̸� :");
	gets(GguLib->Seat[x][y]->name);

}

// ���
void outputSeat(LIB * GguLib) // �¼� Ȯ�� !!
{
	showLib(*GguLib);
	int x, y;
	printf("�¼� ���� ( ����, ����) :");
	scanf("%d %d", &x, &y);

	GguLib->Seat[x][y] = (LIB*)malloc(sizeof(LIB));

	printf("�й� : ");
	scanf("%d", &GguLib->Seat[x][y]->NULL);
	getchar();
	printf("�̸� :");
	gets(GguLib->Seat[x][y]->NULL);
}

// �ڸ� �̵�
void outputSeat(LIB * GguLib) // �¼� Ȯ�� !!
{
	showLib(*GguLib);
	int x, y;
	printf("�¼� ���� ( ����, ����) :");
	scanf("%d %d", &x, &y);

	GguLib->Seat[x][y] = (LIB*)malloc(sizeof(LIB));

	printf("�й� : ");
	scanf("%d", &GguLib->Seat[x][y]->sno);
	getchar();
	printf("�̸� :");
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
8��
// �˻�
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