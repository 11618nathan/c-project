#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

}

// �Լ��� ����

/*1��
// 1���� ������ �Ű������� ���޹޾Ƽ� 1Ȧ���� 0�� ����
int num(int);
int num(int x)
{
	if (x % 2 == 0)
		return 0;
	else
		return 1;
}
*/


/*2��
// 2���� ������ �Ű������� ���޹޾Ƽ� �μ��� ���� ����
int num(int);
int num(int x, int y)
{
	return x + y;
}
*/


/*3��
// 3���� ������ �Ű������� ���� �޾Ƽ� ���� ���� ���� �����ϴ� �Լ�
int num(int);
int num(int x, int y, int z)
{
	int x, y, z;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y && x > z)
		printf("���� ū ���� %d�Դϴ�\n", x);
		return x;
	else
	{
		if (y > x && y > z)
			printf("���� ū ���� %d�Դϴ�\n", y);
			return y;
		else
			printf("���� ū ���� %d�Դϴ�\n", z); 
			return z;
	}
}
*/


/*4��
// 1���� ������ 1���� ���ڸ� �Է� �޾Ƽ� ������ ������ �ƽ�Ű �ڵ尡 ��ġ�ϸ� ã�Ҵ� ���
char ch(void);
char ch(void)
{
	char y;
	int num;
	printf("��ȯ: \n");
	scanf("%c %d", &y, &num);
	(num == y) ? puts("��ġ�մϴ�.") : puts("�ٽ� �Է��ϼ���.");
	return;
}
*/


/*5��
// ����ڿ��� 1���� ���ڸ� �Է� �޾Ƽ� �����ϴ� �Լ�
char input()
{
	char input;
	scanf("%d", &input);
	return input;
}
*/


/*6��
// 1���� ������ �Ű������� ���� �޾Ƽ� 1~ �Ű����������� ��� ����ϴ� �Լ� 
int input()
{
	int input;
	int i;
	scanf("%d", &input);
	for (int i=1;i<=input;i++)
	{
		printf("%d", i);
	}
	return input;
}
*/


/*7��
// 1���� ����(2~9)�� �Ű������� ���� �޾Ƽ� �ش��ϴ� ���� �������� ���
int num(int);
int num(void)
{
	int x;
	int y;
	scanf("%d", y);
	for (x; x < 10; x++)
		printf("%d * %d = %d", y, x, x*y);
	 return 0;
}
*/


/*8��
// ���� 2���� �Ű� ������ ���� �޾Ƽ� �� ���� ������ ��� ���� ���
char ch(void);
char ch(void)
{
	char x = getchar();
	char y = getchar();
	scanf("%c %c", &x, &y);
	for ( char x; x<=y; x++)
		printf("%d", x);
	return x;
}
*/


/*9��
// ȭ�鿡 �ݰ����б��� 5�� ����ϴ� �Լ�
int print(void);
int print(void)
{ 
	for (int x= 0; x<5; x++)
		printf("�ݰ����б� \n");
	return 0;
}
*/


/*10��
// ������ �߻����Ѽ� ¦���� ��쿡�� �����ϴ� �Լ� Ȧ���̸� -1 ����
int num(int);
int num(int x)
{
	int x;
	x = rand();
	if (x % 2 == 0)
		return;
	else
		return -1;
}
*/ 