
#include <stdio.h>

int main()
{
	int five_thousand, thousand, five_hundred, hundred, fifty, ten;
	int price1, price2, price3, total_price, mid_price;
	int change;
	printf("���� �� �Է� : ");
	scanf("%d %d %d", &price1, &price2, &price3);
	total_price = price1 + price2 + price3;
	change = 10000 - total_price;
	five_thousand = change / 5000;
	mid_price = change % 5000;
	thousand = mid_price / 1000;
	mid_price %= 1000;
	five_hundred = mid_price / 500;
	mid_price %= 500;
	hundred = mid_price / 100;
	mid_price %= 100;
	fifty = mid_price / 50;
	mid_price %= 50;
	ten = mid_price / 10;

	printf("�Ž������� %d���Դϴ�.\n", change);
	printf("��õ���� : %d��\n", five_thousand);
	printf("õ���� : %d��\n", thousand);
	printf("�����¥�� : %d��\n", five_hundred);
	printf("���¥�� : %d��\n", hundred);
	printf("���ʿ�¥�� : %d��\n", fifty);
	printf("�����¥�� : %d��\n", ten);



	return 0;


	 
}