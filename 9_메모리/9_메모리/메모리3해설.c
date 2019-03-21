//1번
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

	//1.temp에 저장된 문자열의 길이만큼 저장공간을 동적으로 할당.
	len=strlen(temp) +1 ;						//문자열 길이계산 함수/ +1은 널문자 포함을 위해서
	printf("%d\n", len);

	str = (char*)malloc(sizeof(char)*len);
	strcpy(str, temp);							//문자열 복사함수!!
	puts(str);
	printf("%d\n", _msize(str));
	free(str);
}
*/

//2번

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



//3번




