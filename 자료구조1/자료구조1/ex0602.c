//1번+2번. 사용자에게 주차장의 크기를 입력받아 할당하고 모두 0으로 초기화 + 배열의 크기를 절반으로 만들어라.

#include <stdio.h>
/*
void main() {
	int size, i;
	int * Parking;

	printf("주차장 크기 입력: ");
	scanf("%d", &size);

	Pakring = (int*)calloc(sizeof(int)*size);

	printf("주차장 크기: %d \n", _msize(Parking));
	for (i = 0; i < _msize(Parking) / sizeof(int); i++)
		printf("[ %4d ]", Parking[i]);

	puts("");
	free(buf);
}
*/

/*
//풀이
void main()
{
	int size;
	int * buf;
	scanf("%d", &size);

	buf = (int*)malloc(sizeof(int)*size);
	memset(buf, 0, _msize(buf));

	buf = (int*)realloc(buf, _msize(buf) / 2 );
	free(buf);
}
*/

//3번
/*
void main()
{
	char * str;
	char buf[20];
	gets(buf);

	str = (char*)malloc(sizeof(char)* strlen(buf) + 1 );
	strcpy(str, buf);
	printf("%s\n", buf);
	free(str);
}
*/

//4번
/*
void main() {
	int i = 0; num = 0;
	int * arr;

	for (i = 0; i < 5; i++) {
		printf("입력[%d]", i + 1);
		scanf("%d", &num);

		if(i==0)
		{
		arr = (int*)malloc( sizeof(int)* (i+1) );
		arr[i]=num;
		}
		else if(i>0)
		{
		arr = (int*)realloc( arr, sizeof(int) * (i+1) );
		}
	}
}
*/