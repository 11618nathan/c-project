#include <stdio.h>
#include <time.h>

int buy_input(int Lotto_input[5][6]) // ���� ����
{
	int games;
	int i, j, k;

	printf("\n�� �������� Ƚ�� �Է� : ");
	scanf("%d", &games);

	if (games > 5)
		printf("�� �ѹ��� �ִ� 5ȸ���� �����մϴ�.\n");
	else
	{
		for (i = 0; i < games; i++)
		{
			printf("\n���� 6���� �Է����ּ��� \n");
			for (j = 0; j < 6; j++)
			{
				printf("[ No. %d ] : ", j + 1);
				scanf("%d", &Lotto_input[i][j]);
				getchar();
				if (Lotto_input[i][j] > 45 || Lotto_input[i][j] < 1) // 1 ~ 45 ���� Ȯ��
				{
					puts("");
					printf("�� 1~45 ������ ���� �Է����ּ���\n");
					puts("");
					j--;
				}
				for (k = 0; k < j; k++) // �ߺ� Ȯ��
				{
					if (Lotto_input[i][j] == Lotto_input[i][k])
					{
						printf("�� ���� ���� �ԷµǾ����ϴ�. �ٽ� �Է��� �ּ���.\n");
						printf("\n���� 6���� �Է����ּ��� \n");
						j--;
						break;
					}
				}
			}
		}

		printf("\n�� ���������� ����� ������ �����ϴ�. \n"); // ���
		for (i = 0; i < games; i++)
		{
			printf(" ���� [ %d ȸ ]", i + 1);
			for (j = 0; j < 6; j++)
			{
				printf("%4d", Lotto_input[i][j]);
			}
			printf("\n");
		}
	}
	return Lotto_input;
}


int buy_random(int Lotto_random[5][6]) // �ڵ� ����
{
	//	srand((unsigned)time);
	int cnt, i, j, k;

	printf("\n�� �ڵ����� Ƚ�� �Է� : ");
	scanf("%d", &cnt);

	if (cnt > 5)
		printf("�� �ѹ��� �ִ� 5ȸ���� �����մϴ�.\n");
	else {
		for (i = 0; i < cnt; i++)
		{
			for (j = 0; j < 6; j++)
			{
				Lotto_random[i][j] = rand() % 45 + 1;
				for (k = 0; k < j; k++)
				{
					if (Lotto_random[i][j] == Lotto_random[i][k]) // �ߺ� Ȯ��
					{
						j--;
						break;
					}
				}
			}
		}
	}

	printf("\n�� �ڵ����� ����� ������ �����ϴ�.\n"); // ���
	for (i = 0; i < cnt; i++) {
		printf(" �ڵ� [ %d ȸ ]", i + 1);
		for (j = 0; j < 6; j++) {
			printf("%4d", Lotto_random[i][j]);
		}
		puts("");
	}
	printf("\n");
	return Lotto_random;
}


int won_Lotto(int won[6])	// �ζ� ��÷��ȣ ��÷/ ��÷��ȣ �迭 ����
{
	int i, j;
	printf(" \n[ ��÷��ȣ�� ��÷�մϴ� ]\n.\n.\n.\n");
	for (i = 0; i < 6; i++) {
		won[i] = rand() % 45 + 1;
		for (j = 0; j<i; j++) {
			if (won[i] == won[j]) {
				i--;
				break;
			}
		}
	}

	printf("\n�� ��÷ ��ȣ ��ǥ \n");
	for (i = 0; i < 6; i++)
		printf("[ %d ]", won[i]);
	printf("\n\n");

	return won;
}

void check(int Lotto_input[5][6], int Lotto_random[5][6], int won[6])	// ��÷ ���� Ȯ��
{
	int i, j, k, sum = 0;

	printf("\n�� ��÷��� Ȯ�� \n\n");
	for (i = 0; i < 5; i++) {
		if (Lotto_input[i][0] == 0)
			break;
		for (j = 0; j < 6; j++) {
			for (k = 0; k<6; k++) {
				if (won[k] == Lotto_input[i][j])
					sum++;
			}
		}
		printf("���� [ %d ȸ ] %d �� ���� ", i + 1, sum);

		switch (sum) {
		case 0: printf("");	break;
		case 1: printf(""); break;
		case 2: printf("");	break;
		case 3: printf(""); break;
		case 4: printf("  3�� ��÷!"); break;
		case 5: printf("  2�� ��÷!"); break;
		case 6: printf("  1�� ��÷!"); break;
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
		printf("�ڵ� [ %d ȸ ] %d �� ���� ", i + 1, sum);

		switch (sum) {
		case 0: printf("");	break;
		case 1: printf(""); break;
		case 2: printf("");	break;
		case 3: printf(""); break;
		case 4: printf("  3�� ��÷!"); break;
		case 5: printf("  2�� ��÷!"); break;
		case 6: printf("  1�� ��÷!"); break;
		}
		sum = 0;
		puts("");
	}

	for (i = 0; i < 5; i++) {	// ��÷Ȯ�� �� ���ӹ迭 �ʱ�ȭ
		for (j = 0; j < 6; j++) {
			Lotto_input[i][j] = 0;
			Lotto_random[i][j] = 0;
		}
	}
}

void show_menu(void) {
	printf("\n//////////////////////////////////////////\n");
	printf("//                                      //\n");
	printf("//          ��             ��           //\n");
	printf("//                                      //\n");
	printf("//          1. ���� ����                //\n");
	printf("//          2. �ڵ� ����                //\n");
	printf("//          3. ��÷ ��� Ȯ��           //\n");
	printf("//          4. ����                     //\n");
	printf("//                                      //\n");
	printf("//////////////////////////////////////////\n");
}

int main(void)
{
	int menu, i, j;
	char method;
	int Lotto_input[5][6], Lotto_random[5][6], won[6];

	for (i = 0; i < 5; i++) {										//���ӹ迭 �ʱ�ȭ
		for (j = 0; j < 6; j++) {
			Lotto_input[i][j] = 0;
			Lotto_random[i][j] = 0;
		}
	}


	printf("//////////////////////////////////////////\n");
	printf("//                                      //\n");
	printf("//   �ݰ� �ζǿ� ���Ű��� ȯ���մϴ�!   //\n");
	printf("//                                      //\n");
	printf("//////////////////////////////////////////\n\n");

	printf("//////////////////////////////////////////\n");
	printf("//                                      //\n");
	printf("//          ��             ��           //\n");
	printf("//                                      //\n");
	printf("//          1. ���� ����                //\n");
	printf("//          2. �ڵ� ����                //\n");
	printf("//          3. ��÷ ��� Ȯ��           //\n");
	printf("//          4. ����                     //\n");
	printf("//                                      //\n");
	printf("//////////////////////////////////////////\n\n");

	while (1) // �޴� �ݺ�
	{
		printf("\n\n�� �޴��� ������ �ּ���.(�޴� �ٽú���� 0���� �����ּ���)  ");
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
			printf("\n���� ���\n[ 1�� ] �輺��, ��μ�, ���渲 \n\n");
			printf("�����մϴ�.\n\n");
			break;
		}
		else if (menu == 0) {
			show_menu();
		}
	}
	return 0;
}
