// 1) ����ڿ��� 1���� ���ڿ��� �Է¹޾Ƽ� ���ڿ��� ���̸�ŭ�� �����϶�
// ex) �迭	[ hello - ������� - ]
//			[ hello\0 ]

#include <stdio.h>

void main() {
	int len = 0;
	char temp[300];
	int i;
	char * hello;

	printf("�Է�: ");
	gets(temp);

	for (i = 0; i < 100; i++) {
		if (temp[i] == '\0') {
			len++;
			break;
		}
			
		else
			len++;
	}

	printf("����: %d", len);

	hello = (char*)malloc(sizeof(char)*len);
	printf("hello ũ��: %d \n", _msize(hello));

	memcpy(hello, temp, _msize(hello));
	printf("hello ���峻��: %s\n", hello);

	free(hello);
}



// 2) ����ڿ��� 5���� ������ �Է¹޾� ������ �迭�� ����
//		�Է¹��������� �迭�� ũ�⸦ �÷�������
//		�Է�: 5 [5]
//		�Է�: 123 [5][123]


void main() {

	int i = 0, num = 0;
	int * arr;

	for (i = 0; i < 5; i++) {
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);

		if (i == 0) {
			arr = (int*)malloc((i + 1) * sizeof(int));
			arr[i] = num;
		}

		else {
			arr = (int*)realloc(arr, _msize(arr) + sizeof(int));
			arr[i] = num;
		}

		printf("arr�� ũ��: %d\n\n", _msize(arr));
		printf("arr[%d] = %d\n\n", i, num);
	}

	for (i = 0; i < 5; i++) {
		printf("%d  ", arr[i]);
	}

	free(arr);

}



//3. ����ڿ��� 5���� ���ڿ��� �Է¹޾Ƽ� ������Ѷ�. ���ڿ��� ���̸�ŭ. �����͹迭 �̿�.
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




//4. �ζ� ���α׷�(�����͹迭 �̿�)
//====================
// ����: 2				-- �ΰ��� �Ҵ�
// [] -> [][][][][][]
// [] -> [][][][][][]
// []
// []
// []







// 5. ������ ������ ������ �迭�� �����غ����� (ũ��� ����� �Է�)  -- �޸�4_�����͹迭�� Ǯ������
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
// 6) ����ã��
//====================================
// �ʱ�
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]
// [][][][][][]