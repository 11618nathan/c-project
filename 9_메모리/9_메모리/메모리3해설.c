//1��
#include <stdio.h>
/*
void main()
{
	//[hello\0                ]

	int len;
	char * str;
	char temp[1024];			//
	printf("input: ");
	gets(temp);
	puts(temp);

	//1.temp�� ����� ���ڿ��� ���̸�ŭ ��������� �������� �Ҵ�.
	len=strlen(temp) +1 ;						//���ڿ� ���̰�� �Լ�/ +1�� �ι��� ������ ���ؼ�
	printf("%d\n", len);

	str = (char*)malloc(sizeof(char)*len);
	strcpy(str, temp);							//���ڿ� �����Լ�!!
	puts(str);
	printf("%d\n", _msize(str));
	free(str);
}
*/

//2��

/*
void main() {

	int * buf;
	int i, input, j;
	for (i = 0; i < 5; i++) {
		printf("input: ");
		scanf("%d", &input);

		if (i == 0) {
			buf = (int*)malloc(sizeof(int));
		}
		else {
			buf = (int*)realloc(buf, _msize(buf) + sizeof(int));
		}

		buf[i] = input;
		for (j = 0; j < _msize(buf)/sizeof(int); j++) {
			printf("[ %d ] ", buf[j]);
		}
		puts("");
	}
	free(buf);
}
*/



//3��




