// 1) 사용자에게 1개의 문자열을 입력받아서 문자열의 길이만큼만 저장하라
// ex) 배열	[ hello - 낭비공간 - ]
//			[ hello\0 ]

#include <stdio.h>

void main() {
	int len = 0;
	char temp[300];
	int i;
	char * hello;

	printf("입력: ");
	gets(temp);

	for (i = 0; i < 100; i++) {
		if (temp[i] == '\0') {
			len++;
			break;
		}
			
		else
			len++;
	}

	printf("길이: %d", len);

	hello = (char*)malloc(sizeof(char)*len);
	printf("hello 크기: %d \n", _msize(hello));

	memcpy(hello, temp, _msize(hello));
	printf("hello 저장내용: %s\n", hello);

	free(hello);
}



// 2) 사용자에게 5개의 정수를 입력받아 동적인 배열에 저장
//		입력받을때마다 배열의 크기를 늘려가세요
//		입력: 5 [5]
//		입력: 123 [5][123]


void main() {

	int i = 0, num = 0;
	int * arr;

	for (i = 0; i < 5; i++) {
		printf("입력%d: ", i + 1);
		scanf("%d", &num);

		if (i == 0) {
			arr = (int*)malloc((i + 1) * sizeof(int));
			arr[i] = num;
		}

		else {
			arr = (int*)realloc(arr, _msize(arr) + sizeof(int));
			arr[i] = num;
		}

		printf("arr의 크기: %d\n\n", _msize(arr));
		printf("arr[%d] = %d\n\n", i, num);
	}

	for (i = 0; i < 5; i++) {
		printf("%d  ", arr[i]);
	}

	free(arr);

}



//3. 사용자에게 5개의 문자열을 입력받아서 저장시켜라. 문자열의 길이만큼. 포인터배열 이용.
//====================
// [  ]	--> [hello\0]
// [  ] --> [bit\0]
// [  ] --> [aaa bbb ccc\0]
// [  ] --> [kkkkkkkkkkkkkk\0]
// [  ] --> [a\0]

void main() {

	char temp[5][300];
	int len;
	int i;
	char * pstr[5];

	for (i = 0; i < 5; i++) {
		printf("input: ");
		gets(temp[i]);
		puts(temp[i]);

		len = strlen(temp[i]) + 1;
		printf("len of input: %d\n", len);

		pstr[i] = (char*)malloc(len * sizeof(char));
		strcpy(pstr[i], temp[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("[ %p ] ", pstr[i]);
		printf("[ %d ] --> ", _msize(pstr[i]));
		printf("[ %s ]\n", pstr[i]);
	}

	for (i = 0; i<5; i++)
		free(pstr[i]);

}




//4. 로또 프로그램(포인터배열 이용)
//====================
// 구입: 2				-- 두개만 할당
// [] -> [][][][][][]
// [] -> [][][][][][]
// []
// []
// []







// 5. 다음이 논리적인 구조의 배열을 구현해보세요 (크기는 사용자 입력)  -- 메모리4_포인터배열에 풀이있음
//	[     ] --> [][][]
//	[     ] --> [][][][]
//	[     ] --> [][][][][]
//	[     ] --> [][]
//	[     ] --> [][][][][]
//	[     ] --> []

void main() {

	int * logic;
	int size;

	logic = (int*)malloc(sizeof(int)*100);

	printf("input: ");
	scanf("%d", &size);

	logic = (int*)realloc(logic, sizeof(int)*size);


	free(logic);

}

//===================================
// 6) 지뢰찾기
//====================================
// 초급
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]