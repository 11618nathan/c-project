// ���κ� ����
// ���� ���� ���α׷�

// [0][0][0][0][0]

// ����:2 4885
// [0] [4885] [0][0][0]
// ����: 4885
// [0][0][0][0][0]

// ��ü ���

#include <stdio.h>
#include <windows.h>

void input(int(*place), int * carNum, int * i, int *j)
{
	printf("���� ��ġ�� �������ּ��� : ");
	scanf("%d", &place);
	printf("���� ��ȣ�� �Է����ּ��� : ");
	scanf("%d", &carNum); 
	for (*i = 0; *i < 5; *i++) {
		if (*i == *place)
			printf("[ %d ]", *carNum);
		else if (*i != *place)
			printf("[ 0 ]");
		else if (*i >= 5)
			printf("��ġ�� �ٽ� ������ �ּ��� : ");
	} 
}

void output(int(*place), int * carNum, int * i, int *j)
{
	printf("���� ��ġ�� �������ּ��� : ");
	scanf("%d", &place);
	printf("���� ��ȣ�� �Է����ּ��� : ");
	scanf("%d", &carNum);
	for (*i = 0; *i < 5; *i++) {
		if (*i == *place)
			printf("[ %d ]", 0);
		else if (*i != *place)
			printf("[ 0 ]");
		else if (*i >= 5)
			printf("��ġ�� �ٽ� ������ �ּ��� : ");
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
		printf("���� : 1,    ���� : 2,    ���� ���� : 3,    ������ ����: ����\n");
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