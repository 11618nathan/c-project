//1��+2��. ����ڿ��� �������� ũ�⸦ �Է¹޾� �Ҵ��ϰ� ��� 0���� �ʱ�ȭ + �迭�� ũ�⸦ �������� ������.

#include <stdio.h>
/*
void main() {
	int size, i;
	int * Parking;

	printf("������ ũ�� �Է�: ");
	scanf("%d", &size);

	Pakring = (int*)calloc(sizeof(int)*size);

	printf("������ ũ��: %d \n", _msize(Parking));
	for (i = 0; i < _msize(Parking) / sizeof(int); i++)
		printf("[ %4d ]", Parking[i]);

	puts("");
	free(buf);
}
*/

/*
//Ǯ��
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

//3��
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

//4��
/*
void main() {
	int i = 0; num = 0;
	int * arr;

	for (i = 0; i < 5; i++) {
		printf("�Է�[%d]", i + 1);
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