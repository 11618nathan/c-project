#include <stdio.h>

int main(void)
{
	// ������ �׸��� ���� �迭�� �ʱ�ȭ �ϼ��� �ݺ��� ���
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


	// ����� �Է�
	// [h][i][][][]
	// [a][b][c][][]
	// [T][T][][][]  
		printf("���ڸ� �Է��ϼ���(���� ����) : ");

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
	// Lotto �迭�� �Ű������� ���� �޾Ƽ� �ʱ�ȭ�ϴ� �Լ�
	// ����ڿ��� ���Ӽ��� �Է� ���� ��
	// �����ϰ� ������ ��
	// ��� 0���� �ʱ�ȭ �� ��

		void buy_input(int Lotto[][6])
		{ // ���� �� �Է¹ޱ�
			printf("���� ���� �Է��ϼ��� : ");

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
		{ // ���� �� �Է¹ޱ� = ����
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