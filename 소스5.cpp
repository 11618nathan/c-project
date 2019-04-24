#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// 다음과 같이 초기화하세요.
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


	// 사용자 입력 
	// [9][3][2][1][7]
	/*
	int Array[5];
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("%d번째 데이터 입력: ", i);
		scanf("%d", &Array[i]);
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", Array[i]);
	}
	*/


	/*
	// 랜덤 (1~10)
	int Array[5] = { rand() % 10 ,rand() % 10 ,rand() % 10 ,rand() % 10 ,rand() % 10 };
	int i; 
	for (i = 0; i < 5; i++)
	{ 
		printf("%d ", Array[i]);
	}
	*/ 


	/*
	// [A] [B] [C] ~ [Z] 
	char arr[26];//길이가 26인 배열 생성
	char a;
 
	//a에 'A'를 저장해서 배열에 저장 후 a값을 1증가하면? 다음 반복시 B가 됨
	for (int i = 0, a = 'A'; i < 26; i++)
		  arr[i] = a++;
 
	//%c를 사용하여 char배열의 저장된 값을 출력
	 for (int i = 0; i < 26; i++)
		  printf("%c ", arr[i]);

	*/ 

	/*
	// [Z] [Y] ~ [A] 
	char ch[26];//길이가 26인 배열 생성
	char a;

	//a에 'A'를 저장해서 배열에 저장 후 a값을 1증가하면? 다음 반복시 B가 됨
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	printf("%c", ch);
	*/

	
	// 다음의 함수 작성
	// 배열을 매개변수로 전달 받아서 가장 큰수를 리턴
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
	// 배열을 매개변수로 전달받아서 오른차 순으로 정렬
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
	// 배열을 매개변수로 전달 받아서 모두 소문자로 변환
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
	// 위 2문제의 배열을 매개변수로 전달받아 출력하는 함수


}