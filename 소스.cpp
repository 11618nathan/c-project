#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

}

// 함수의 선언

/*1번
// 1개의 정수를 매개변수롤 전달받아서 1홀수면 0을 리턴
int num(int);
int num(int x)
{
	if (x % 2 == 0)
		return 0;
	else
		return 1;
}
*/


/*2번
// 2개의 정수를 매개변수로 전달받아서 두수의 합을 리턴
int num(int);
int num(int x, int y)
{
	return x + y;
}
*/


/*3번
// 3개의 정수를 매개변수로 전달 받아서 가장 작은 수를 리턴하는 함수
int num(int);
int num(int x, int y, int z)
{
	int x, y, z;
	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y && x > z)
		printf("가장 큰 수는 %d입니다\n", x);
		return x;
	else
	{
		if (y > x && y > z)
			printf("가장 큰 수는 %d입니다\n", y);
			return y;
		else
			printf("가장 큰 수는 %d입니다\n", z); 
			return z;
	}
}
*/


/*4번
// 1개의 정수와 1개의 문자를 입력 받아서 정수와 문자의 아스키 코드가 일치하면 찾았다 출력
char ch(void);
char ch(void)
{
	char y;
	int num;
	printf("변환: \n");
	scanf("%c %d", &y, &num);
	(num == y) ? puts("일치합니다.") : puts("다시 입력하세요.");
	return;
}
*/


/*5번
// 사용자에게 1개의 문자를 입력 받아서 리턴하는 함수
char input()
{
	char input;
	scanf("%d", &input);
	return input;
}
*/


/*6번
// 1개의 정수를 매개변수로 전달 받아서 1~ 매개변수까지를 모두 출력하는 함수 
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


/*7번
// 1개의 정수(2~9)를 매개변수로 전달 받아서 해당하는 단의 구구단을 출력
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


/*8번
// 문자 2개를 매개 변수로 전달 받아서 두 문자 사이의 모든 문자 출력
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


/*9번
// 화면에 금강대학교를 5번 출력하는 함수
int print(void);
int print(void)
{ 
	for (int x= 0; x<5; x++)
		printf("금강대학교 \n");
	return 0;
}
*/


/*10번
// 난수를 발생시켜서 짝수일 경우에만 리턴하는 함수 홀수이면 -1 리턴
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