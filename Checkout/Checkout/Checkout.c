
#include <stdio.h>

int main()
{
	int five_thousand, thousand, five_hundred, hundred, fifty, ten;
	int price1, price2, price3, total_price, mid_price;
	int change;
	printf("물건 값 입력 : ");
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

	printf("거스름돈은 %d원입니다.\n", change);
	printf("오천원권 : %d장\n", five_thousand);
	printf("천원권 : %d장\n", thousand);
	printf("오백원짜리 : %d개\n", five_hundred);
	printf("백원짜리 : %d개\n", hundred);
	printf("오십원짜리 : %d개\n", fifty);
	printf("오백원짜리 : %d개\n", ten);



	return 0;


	 
}