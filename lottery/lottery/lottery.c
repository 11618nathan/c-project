#include <stdio.h>
#include <time.h>

int buy_input(int Lotto_input[5][6]) // 수동 게임
{
	int games;
	int i, j, k;

	printf("\n▶ 수동게임 횟수 입력 : ");
	scanf("%d", &games);

	if (games > 5)
		printf("※ 한번에 최대 5회까지 가능합니다.\n");
	else
	{
		for (i = 0; i < games; i++)
		{
			printf("\n숫자 6개를 입력해주세요 \n");
			for (j = 0; j < 6; j++)
			{
				printf("[ No. %d ] : ", j + 1);
				scanf("%d", &Lotto_input[i][j]);
				getchar();
				if (Lotto_input[i][j] > 45 || Lotto_input[i][j] < 1) // 1 ~ 45 범위 확인
				{
					puts("");
					printf("※ 1~45 사이의 수를 입력해주세요\n");
					puts("");
					j--;
				}
				for (k = 0; k < j; k++) // 중복 확인
				{
					if (Lotto_input[i][j] == Lotto_input[i][k])
					{
						printf("※ 같은 수가 입력되었습니다. 다시 입력해 주세요.\n");
						printf("\n숫자 6개를 입력해주세요 \n");
						j--;
						break;
					}
				}
			}
		}

		printf("\n▶ 수동게임의 결과는 다음과 같습니다. \n"); // 결과
		for (i = 0; i < games; i++)
		{
			printf(" 수동 [ %d 회 ]", i + 1);
			for (j = 0; j < 6; j++)
			{
				printf("%4d", Lotto_input[i][j]);
			}
			printf("\n");
		}
	}
	return Lotto_input;
}


int buy_random(int Lotto_random[5][6]) // 자동 게임
{
	//	srand((unsigned)time);
	int cnt, i, j, k;

	printf("\n▶ 자동게임 횟수 입력 : ");
	scanf("%d", &cnt);

	if (cnt > 5)
		printf("※ 한번에 최대 5회까지 가능합니다.\n");
	else {
		for (i = 0; i < cnt; i++)
		{
			for (j = 0; j < 6; j++)
			{
				Lotto_random[i][j] = rand() % 45 + 1;
				for (k = 0; k < j; k++)
				{
					if (Lotto_random[i][j] == Lotto_random[i][k]) // 중복 확인
					{
						j--;
						break;
					}
				}
			}
		}
	}

	printf("\n▶ 자동게임 결과는 다음과 같습니다.\n"); // 결과
	for (i = 0; i < cnt; i++) {
		printf(" 자동 [ %d 회 ]", i + 1);
		for (j = 0; j < 6; j++) {
			printf("%4d", Lotto_random[i][j]);
		}
		puts("");
	}
	printf("\n");
	return Lotto_random;
}


int won_Lotto(int won[6])	// 로또 당첨번호 추첨/ 당첨번호 배열 형성
{
	int i, j;
	printf(" \n[ 당첨번호를 추첨합니다 ]\n.\n.\n.\n");
	for (i = 0; i < 6; i++) {
		won[i] = rand() % 45 + 1;
		for (j = 0; j<i; j++) {
			if (won[i] == won[j]) {
				i--;
				break;
			}
		}
	}

	printf("\n▶ 당첨 번호 발표 \n");
	for (i = 0; i < 6; i++)
		printf("[ %d ]", won[i]);
	printf("\n\n");

	return won;
}

void check(int Lotto_input[5][6], int Lotto_random[5][6], int won[6])	// 당첨 개수 확인
{
	int i, j, k, sum = 0;

	printf("\n▶ 당첨결과 확인 \n\n");
	for (i = 0; i < 5; i++) {
		if (Lotto_input[i][0] == 0)
			break;
		for (j = 0; j < 6; j++) {
			for (k = 0; k<6; k++) {
				if (won[k] == Lotto_input[i][j])
					sum++;
			}
		}
		printf("수동 [ %d 회 ] %d 개 맞춤 ", i + 1, sum);

		switch (sum) {
		case 0: printf("");	break;
		case 1: printf(""); break;
		case 2: printf("");	break;
		case 3: printf(""); break;
		case 4: printf("  3등 당첨!"); break;
		case 5: printf("  2등 당첨!"); break;
		case 6: printf("  1등 당첨!"); break;
		}
		sum = 0;
		puts("");
	}

	puts("");
	for (i = 0; i < 5; i++) {
		if (Lotto_random[i][0] == 0)
			break;
		for (j = 0; j < 6; j++) {
			for (k = 0; k < 6; k++) {
				if (won[k] == Lotto_random[i][j])
					sum++;
			}
		}
		printf("자동 [ %d 회 ] %d 개 맞춤 ", i + 1, sum);

		switch (sum) {
		case 0: printf("");	break;
		case 1: printf(""); break;
		case 2: printf("");	break;
		case 3: printf(""); break;
		case 4: printf("  3등 당첨!"); break;
		case 5: printf("  2등 당첨!"); break;
		case 6: printf("  1등 당첨!"); break;
		}
		sum = 0;
		puts("");
	}

	for (i = 0; i < 5; i++) {	// 당첨확인 후 게임배열 초기화
		for (j = 0; j < 6; j++) {
			Lotto_input[i][j] = 0;
			Lotto_random[i][j] = 0;
		}
	}
}

void show_menu(void) {
	printf("\n//////////////////////////////////////////\n");
	printf("//                                      //\n");
	printf("//          메             뉴           //\n");
	printf("//                                      //\n");
	printf("//          1. 수동 게임                //\n");
	printf("//          2. 자동 게임                //\n");
	printf("//          3. 당첨 결과 확인           //\n");
	printf("//          4. 종료                     //\n");
	printf("//                                      //\n");
	printf("//////////////////////////////////////////\n");
}

int main(void)
{
	int menu, i, j;
	char method;
	int Lotto_input[5][6], Lotto_random[5][6], won[6];

	for (i = 0; i < 5; i++) {										//게임배열 초기화
		for (j = 0; j < 6; j++) {
			Lotto_input[i][j] = 0;
			Lotto_random[i][j] = 0;
		}
	}


	printf("//////////////////////////////////////////\n");
	printf("//                                      //\n");
	printf("//   금강 로또에 오신것을 환영합니다!   //\n");
	printf("//                                      //\n");
	printf("//////////////////////////////////////////\n\n");

	printf("//////////////////////////////////////////\n");
	printf("//                                      //\n");
	printf("//          메             뉴           //\n");
	printf("//                                      //\n");
	printf("//          1. 수동 게임                //\n");
	printf("//          2. 자동 게임                //\n");
	printf("//          3. 당첨 결과 확인           //\n");
	printf("//          4. 종료                     //\n");
	printf("//                                      //\n");
	printf("//////////////////////////////////////////\n\n");

	while (1) // 메뉴 반복
	{
		printf("\n\n▣ 메뉴를 선택해 주세요.(메뉴 다시보기는 0번을 눌러주세요)  ");
		scanf("%d", &menu);

		if (menu == 1)
			buy_input(Lotto_input);
		else if (menu == 2)
			buy_random(Lotto_random);
		else if (menu == 3) {
			won_Lotto(won);
			check(Lotto_input, Lotto_random, won);
		}
		else if (menu == 4) {
			printf("\n만든 사람\n[ 1조 ] 김성윤, 김민섭, 강경림 \n\n");
			printf("감사합니다.\n\n");
			break;
		}
		else if (menu == 0) {
			show_menu();
		}
	}
	return 0;
}
