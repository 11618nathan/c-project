#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// ������ ���� �ʱ�ȭ�ϼ���.
	// int buf[5] 
	/*
	// [0][0][0][0][0]
	int buf[5] = { 0, 0, 0, 0, 0 };
	for (i =0; i<5; i++)
		buf[i] = 0;

	*/
	/*
	// [1][2][3][4][5]
	int buf[5] = { 1, 2, 3, 4, 5 };
	for (i =0; i<5; i++)
		buf[i] = 0;
	*/
	/*
	// [6][5][2][8][10]
	int buf[5] = { 6, 5, 2, 8, 10 };
	*/
	for (i = 0; i < 5; i++)
		scanf("%d", buf[i]);


	// ����� �Է� 
	// [9][3][2][1][7]
	/*
	int Array[5];
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("%d��° ������ �Է�: ", i);
		scanf("%d", &Array[i]);
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", Array[i]);
	}
	*/


	/*
	// ���� (1~10)
	int Array[5] = { rand() % 10 ,rand() % 10 ,rand() % 10 ,rand() % 10 ,rand() % 10 };
	int i; 
	for (i = 0; i < 5; i++)
	{ 
		printf("%d ", Array[i]);
	}
	*/ 


	/*
	// [A] [B] [C] ~ [Z] 
	char arr[26];//���̰� 26�� �迭 ����
	char a;
 
	//a�� 'A'�� �����ؼ� �迭�� ���� �� a���� 1�����ϸ�? ���� �ݺ��� B�� ��
	for (int i = 0, a = 'A'; i < 26; i++)
		  arr[i] = a++;
 
	//%c�� ����Ͽ� char�迭�� ����� ���� ���
	 for (int i = 0; i < 26; i++)
		  printf("%c ", arr[i]);

	*/ 

	/*
	// [Z] [Y] ~ [A] 
	char ch[26];//���̰� 26�� �迭 ����
	char a;

	//a�� 'A'�� �����ؼ� �迭�� ���� �� a���� 1�����ϸ�? ���� �ݺ��� B�� ��
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	printf("%c", ch);
	*/

	
	// ������ �Լ� �ۼ�
	// �迭�� �Ű������� ���� �޾Ƽ� ���� ū���� ����
/*
int Arr(int buf[])
{
	int i; 
	int max;
	for (i = 0; i < 5; i++)
	{
		if (max < Array[i])
			max = Array[i];
	}
	return max;
}
void main()
{
	
	int Array[5] = { rand() % 10 ,rand() % 10 ,rand() % 10 ,rand() % 10 ,rand() % 10 };
	Arr(Array);
}

*/


	/*
	// �迭�� �Ű������� ���޹޾Ƽ� ������ ������ ����
int tm(void)
{
	int a[5];
	int n, i, j, temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for ( j = 0; j < n; ++j)
	{
		for(i=0; i<j; ++i)
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		for (i = 0; i < n; ++i)
			printf("%d ", a[i]);
		printf("\n");
		return 0;
	}
}
*/
	// �迭�� �Ű������� ���� �޾Ƽ� ��� �ҹ��ڷ� ��ȯ
char c(void)
{
	char ch[50];
	int i;

	scanf("%s", &ch);
	for (i = 0; i<sizeof(ch); i++) {
		if (ch[i] == NULL) { break; }
		else if (ch[i] >= 'A' && ch[i] <= 'Z') {
			printf("%c", ch[i] + 32);
		}
		else {
			printf("%c", ch[i]);
		}
	}
	printf("\n");
	for (i = 0; i<sizeof(ch); i++) {
		if (ch[i] == NULL) { break; }
		else if (ch[i] >= 'a' && ch[i] <= 'z') {
			printf("%c", ch[i] - 32);
		}
		else {
			printf("%c", ch[i]);
		}
	}
	return 0; 
}
	// �� 2������ �迭�� �Ű������� ���޹޾� ����ϴ� �Լ�


}