
#include <stdio.h>

int main()
{
	FILE *fp;
	int c;
	// a모드, append모드
	fp = fopen("memo.txt", "a");
	if (fp == NULL)
	{
		printf("file open error \n");
		return 1;
	}
	while ((c = getchar()) != EOF )
	{
		fputc(c, fp);
	}
	fclose(fp);
	return 0;
}