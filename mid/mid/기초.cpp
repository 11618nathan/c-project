//--------------------------------------------------------------------------------
// Question   

// 6번에 2번
// 7번 마지막 문제 이해!
// 9번 마지막 문제 순서?

//---------------------------------------------------------------------------------

/*
1. 잘못된 부분을 찾아서 고쳐보세요
int		5N;
char	char;
double	123;
int		NiceNice;
int		N,			float F,		char c;
char	ch1 ch3 ch3;
char	ch1_ch2_ch3;
int		N1, N2, N3, N4, N5;
int		N = 5,			int M = 7;
char	'a';
int		N1 = 10, N2 = 20;
int		N = 32,767;

*/
int N5;
char ch;
double d123;

int n; float F; char c;

int N = 5; int M = 7;
char ch = 'a';
int N1 = 10; int N2 = 20;

/*
2. scanf 함수를 사용한 입력 코드입니다. 잘못된 부분을 찾으세요
int N1, N2;
scanf("%d %d", N1, N2);

//scanf("%d %d", &N1, &N2);

char ch;
scanf("%c\n", &ch);

//scanf("%c", &ch);

char ch1, ch2;
scanf("%c %c %c", ch1, ch2);
// scanf("%c %c", &ch1, &ch2);

int N;
scanf("정수 : %f: , &N);
// scanf("%f", &N);

char ch, N;
scanf("%c, %d", &ch, &N);
// scanf("%c %c", &ch, &N);

scanf("%d", 10);
// int x;
// scanf("%d", &x);

scanf("문자 : %c", 'A');
// char ch;
// scanf("문자: %c", &ch);

double db1;
scanf("%f", &db1);

3. 다음 조건을 만족시키는 변수를 선언하세요.
- 서울 지하철의 노선 개수
// int sub;

- 지구 둘레의 길이(km) : 4만 76.5km
// float around;

- 당신이 읽은 C언어 참고서 중에서 가장 두꺼운 책의 쪽수
// int page;

- 개장부터 지금까지 “롯데월드”에 놀러 온 사람들의 숫자
// int people;

- 당신의 키와 몸무게
// float height, wi;

- 사람의 혈액형
// char ch;

- 집에서부터 학교까지의 거리(m)와 소요시간(초)
// double m, s;

- 우리 머리에 있는 머리카락의 개수 : 10만개
// double hair;

- 아파트 한 동에 살고 있는 사람들의 숫자
// int people;

- 지구에서 태양까지의 거리(km)
// double ki;

*/

/*
4. 다음 코드들의 출력 결과는 무엇인가?
unsigned int N = -1;
printf("%u, %d", N, N);
// error, -1

int N = -1;
printf("%u, %d", N, N);
// error, -1

flaot fReal = 123.456789123456789;
printf("%f, %.10f", fReal, fReal);
// 123.456787, 123.4567871094

double fReal = 123.123456789123456789;
printf("%f, %.10f", fReal, fReal);
// 123.123457, 123.1234567891

5. 다음 조건들에 맞게 변수를 초기화하는 코드를 만드세요.
문자 변수를 선언하고, 알파벳 대문자 /Z'로 초기화,
// char ch ='Z';
	
정수 변수 N,M을 선언과 동시에 N은 5, M은 10의 값으로 초기화
// int N = 5;
// int M = 10;

자신의 가족이 몇명인지 저장할 변수를 선언하고 초기화
// int fam;

휴일 하루동안 동물원에 놀러 온 사람들의 숫자를 저장하기 위한 변수를 선언하고 
실제 놀러온 인원으로 초기화
// int people;

나와 동건이, 오성이의 100m 달리기 기록을 저장할 변수를 선언하고 초기화
// float d, o;

32살에 키 178.5, 몸무게 83.3kg 의 신체 조건 및 시력 오른쪽은 1.5, 왼쪽은 1.2의 신체정보를
저장할 변수들을 선언하고 초기화
float h= 178.5;
float w= 83.3;
float r= 1.5;
float ㅣ = 1.2;


/*
6. 아래의 질문에  입력을 받아 결과 출력이 나오도록 프로그램을 만들어보세요

1. 여기에 있는 학생들은 모두 몇명입니까?
출력 ] 학생 수 : 3
당신의 가족은 모두 3명입니다.

int stu = 3;
printf("%d \n", stu);


3. 살아오면서 눈썹이 휘날리도록 뛰어본 적이 있습니까?
자신의 최고 100m 기록은  얼마입니까? 소숫점 아래 한자리까지 기록은?
출력 ] 연도 : 2004
기록 : 13.5
당신의 최고 기록은 2004년도의 13.5초 입니다.

int a= 2004;
float x = 13.5;
printf("당신의 최고 기록은 %d년도의 %d초 입니다.", a, x);


4. 가장 좋아하는 과목은 무었입니까? 학점은 어떻게 됩니까?
출력 ] 학점입력(3개) : B C A
C 언어    : B
자료구조  : C
C++언어   : A

	char c;
	char j;
	char p;
	scanf("%c %c %c", &c, &j, &p);
	printf("C 언어    : %c \n", c);
	printf("자료구조  : %c \n", j);
	printf("C++언어   : %c \n", p);

*/

/*
7. 다음에 나오는 형식들에 맞게 출력하세요
6개의 정수를 입력 받은 다음, 한 줄에 3개씩 출력
출력 ] 정수(6개)  1 2 3 10 20 30
첫번째 : 1   2   3
두번째 : 10  4   30

int a = 1;
int b = 2;
int c = 3;
int d = 10;
int e = 4;
int f = 30;
printf("%d %d %d \n", a, b, c);
printf("%d %d %d \n", d, e, f);


입력받은 순서와 반대 순서로 출력하세요
출력 ] 입력 : 3 5 7
출력 : 7 5 3

	int a = 3;
	int b = 5;
	int c = 7;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d \n", c, b, a);


	// 문제 이해
최대 4자리 정수들을 입력받는다.
입력 숫자는 312, 5963, 18, 9
첫번째 열은 빈 자리를 0으로 채웠고
두번째 열은 공배으로 채웠다.
두번째 열의 '*'은 공백이 들어가는 것을 보여주기 위해 출력함
출력]	
0001      *   1*
0023      *  23*
0456      * 456*
7890      *7890* 

int a, b, c, d;
scanf("%d %d %d 5d", &a, &b, &c, &d);
printf(" ")



8. 아스키 코드표는 화면 출력과 관련된 256개의 문자를 저장하는 표이다.
키보드로부터 한 문자를 입력 받은 다음, 입력 받은 문자와 해당 문자의 아스키 코드값을 출력
출력 ] 
문자 : A
값  : 65

	char ch;
	scanf("%c", &ch);
	printf("문자: %c \n", ch);
	printf("값: %d \n", ch);


키보드로 부터 0부터 255사이의 정수를 입력 받은 다음, 입력 받은 정수가 가리키는
아스키 문자 출력
출력 ] 정수 : 99
문자 : C

	int num;
	printf(" 0부터 255사이의 정수를 입력 \n");
	scanf("%d", &num);
	printf("%c \n", num);


9. 변수 두개의 값을 맞바꾸는 문제입니다.
정수 변수 N과 M이 각각 5, 7이 들어있습니다.
아래 코드를 통해 출력했을 경우 순서가 바뀌도록 두번 출력해주세요
[ 포함 코드 ] printf("N = %d, M = %d\n", N, M);
출력 ] 
before : N = 5, M = 7
after  : N = 7, M = 5

	int N= 5;
	int M = 7;
	printf("before : ");
	printf("N = %d, M = %d\n", N, M);
	printf("after : ");
	printf("N = %d, M = %d\n", M, N);


정수 N과 M을 키보드로부터 입력을 받습니다.
받은 후 위의 문제와 같이 변경해서 출력해보세요
	
	int N;
	int M;
	scanf("%d %d", &N, &M);
	printf("before : ");
	printf("N = %d, M = %d\n", N, M);
	printf("after : ");
	printf("N = %d, M = %d\n", M, N);



이번에는 3개의 정수 변수를 입력받아서 순서를 변경시켜 보세요

	int N;
	int M;
	int L;
	scanf("%d %d %d", &N, &M, &L);
	printf("before : ");
	printf("N = %d, M = %d, L = %d\n", N, M, L);
	printf("after : ");
	printf("N = %d, M = %d, L = %d\n", M, L, N);

*/
