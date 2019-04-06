#include <stdio.h>

int main(void)
{
	int num = 100;
	int *ptr = &num;
	int **ptr = &ptr;
	int ***ptr = &dptr;

	printf("%d %d \n", **dptr, ***tptr);
	return 0;
}