//-------------------------------------------------------------------------
// [ Question ] 
//-------------------------------------------------------------------------

#include <stdio.h>


//-------------------------------------------------------------------------
// 1. 잘못된 부분을 찾아서 고쳐보세요 
//-------------------------------------------------------------------------

void main()
{
	double F = 1.0;
	F = 36.5 % 3.65;		// 변수 F는 10

	//float F =.10;

	int n;
	3 X 5 = N;				// N에는 15가 저장된다.
	// N = 3 * 5;

	char ch;
	ch = 'A' + 3;
	printf("%d", ch);

	int a = 2, b = 4, c = 6;
	ax2 + bx + c = 46;
	// (a * 2) + (b * ? ) + c 

	float F1 = 5.0;
	double F2 = 5.5;
	printf("%d", F1 + F2);
	//float F2 = 5.5;

	char ch = 'c';
	int F = 5.0;
	printf("%c", ch + F);
	//printf("%c", ch + F);

	int N = 5, M = 7, K = 9;
	N += 5, M *= 7, K /= 9;
	// N += 5;
	// M *= 7;
	// K /= 9;

	int N = 1;
	++N++;
	// ++N;
	// N++;

	int N = 5;
	N = N x 5;
	// N= N * N;

	char ch;
	scanf("%c", ch);
	ch += 3;
	printf("%c", ch);
	// printf("%d", ch);

	int N = 5;
	N = N % 5;			// 결과 1
	// N = N % N;	

	int N1 = 5, N2 = 10;
	printf("%c", N1 + N2);
	// printf("%d", N1 + N2);

	char ch = 'C';
	ch++;
	printf("%c", ch);		// 문자 p 출력
	// ch++;

	int N = 1;
	N *= -N - -N * +N + +N;
	// N *= N*N;

	char ch = 'z';
	ch += '+';
	// ch == '+';
}



//-------------------------------------------------------------------------
// 2. 변수 N에 저장되는 최종 결과값은 얼마일까요?
//-------------------------------------------------------------------------

void main()
{
	int N = 5;
	N += 10;
	// 15

	int N = 1;
	N <<= 4;
	// 16

	double F1 = 5.0, F2 = 5.5;
	int N = F1 + F2;
	// 10

	int N = 0x1F, M = 0xF1;
	N &= M;

	int N, M = 7;
	N = M / 3;
	// 2

	int N, M = 7;
	N = (2 * M * M) + (5 * M) + 8;
	// 141

	int N = 0xFFFF;
	N = ~N;
	// -65536

	int N, M = 7;
	N = (M / 3) % 3;
	// 2

	int N, M = 7;
	N = M != 7;
	// 0

	int N = 5, M = 7;
	N *= (N + M) % M;
	//25

}

//-------------------------------------------------------------------------
// 3. 질문을 만족시키는 코드를 모두 찾아보세요
//-------------------------------------------------------------------------

void main()
{
	// 정수 N을 1 증가(3가지)
	int x = 10;
	printf("%d \n", ++x); // 1	
	x = x + 1;
	printf("%d \n", x); // 2
	x += 1;
	printf("%d \n", x); // 3
	x++;
	printf("%d \n", x); // 4

	// 정수 N을 네 배로 증가(6가지)

	// 정수 N의 부호 변경(4가지)

	// 정수 N을 128로 설정(저장)
}

//-------------------------------------------------------------------------
// 4. 나머지 연산 
//-------------------------------------------------------------------------

void main()
{
	int N, M = 7;
	N = M / 5;

	// N에 들어가는 결과값은?
	// 1 

	// N이 7일때  같은 결과를 만드는 M의 값은?
	// 35

	// 정수 N을 10으로 나눈 나머지를 구했을 때, 나올 수 있는 경우의 수는 몇개?
	// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	// 10개

	N = M % K;
	// 나오는 결과값이 0 ~ 20 사이가 되려면 M 과 K가 얼마가 되어야 하나?
	// m:40   k:20
}

//-------------------------------------------------------------------------
// 5. 관련 문제 
//-------------------------------------------------------------------------

// 1) 키보드로부터 입력 받은 정수 N을 5로 나눈 몫과 나머지는?
//    출력) 정수   : 21
//		    몫     : 4
//          나머지 : 1		

	int x;
	printf("input  : ");
	scanf("%d", &x);
	printf("정수   : %d \n", x);
	printf("몫     : %d \n", x/5);
	printf("나머지 : %d \n", x%5);

// 2) 정수 N을 입력받아 개월과 일수로 변환(1개월은 무조건 30일)
//    출력)  날수 : 100
//           결과 : 3개월 10일 

	int num;
	scanf("%d", &num);
	printf("%d 개월 %d일 \n", num/30, num%30); 


// 3) 알파벳 소문자의 갯수는 몇 개인가?
//	출력) 개수 : 26
	char ch = 'a';
	ch = ch + 32;
	printf("%d", ch); 
	printf("개수: %d", 'z' - 'a' + 1);

// 4) 알파벳 소문자 두개를 입력 받아 두 개의 문자 가운데에 있는 문자 출력
//    정확하게 가운데 문자가 존재하지 않으면 앞의 문자 출력 
//	출력)  입력 : a d
//         중심 : b

	char ch1, ch2;
	printf("입력: ");
	scanf("%c %c", &ch1, &ch2);
	if ((ch1 + ch2) % 2 == 1)
		printf("%c", ((ch1 + ch2) / 2) + 1);
	else
		printf("%c", (ch1 + ch2) / 2);

// 5) 문자 입력 후 소문자 이면 대문자로 변경 
//  출력) 입력 : a
//        변환 : A

	char ch;
	printf("입력: ");
	scanf("%d", &ch);
	if (ch >= 'a'&& ch <= 'z')
		printf("변환: %c", ch - 32);

// 6) 문자 입력 후 소문자 이면 대문자로 대문자이면 소문자로 출력
//	출력)  입력 : A
//		   변환 : a

	char ch;
	printf("입 력: ");
	scanf("%d", &ch);
	if (ch >= 'A'&& ch <= 'Z')
		printf("변 환: %c", ch + 32);


