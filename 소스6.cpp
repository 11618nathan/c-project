#include <stdio.h>

int main(void)
{
	// 다음의 그림과 같이 배열을 초기화 하세요 반복문 사용
	// [1][2][3][4]
	// [5][6][7][8]
	// [9][10][11][12]

	int arr[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("[%d]", arr[i][j]);
		}
		puts("");
	}


	// [13][23][33]
	// [23][33][43]
	// [33][43][53]
	int arr[3][4];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j + 1;
		}
	}


	// 사용자 입력
	// [h][i][][][]
	// [a][b][c][][]
	// [T][T][][][]  
		printf("문자를 입력하세요(띄어쓰기 포함) : ");

		char str[3][5];
		int i, j;


		for (i = 0; i < 3; i++) {
			for (b = 0; b < 5; j++) {
				scanf("%c", &str[i][j]);
				printf("[%c]", str[i][j]);
			}
			puts("");
		} 

	//int Lotto[5][6] = {0,};
	// Lotto 배열을 매개변수로 전달 받아서 초기화하는 함수
	// 사용자에게 게임수를 입력 받을 것
	// 랜덤하게 생성할 것
	// 모두 0으로 초기화 할 것

		void buy_input(int Lotto[][6])
		{ // 게임 수 입력받기
			printf("게임 수를 입력하세요 : ");

			int game_input;
			scanf("%d", &game_input);

			int i, j;
			for (i = 0; i < game_input; i++) {
				for (j = 0; j < 6; j++) {
					printf("[ %d ]", Lotto[i][j]);
				}
				puts("");
			}
			puts("");
		}


		void buy_random(int Lotto[5][6])
		{ // 게임 수 입력받기 = 랜덤
			srand(time(NULL));

			int game_random = rand() % 6;

			int ir, jr;
			for (ir = 0; ir < game_random; ir++) {
				for (jr = 0; jr < 6; jr++) {
					printf("[ %d ]", Lotto[ir][jr]);
				}
				puts("");
			}
		}

		void main()
		{
			int Lotto[5][6] = { 0 };
			buy_input(Lotto);
			buy_random(Lotto);
		}