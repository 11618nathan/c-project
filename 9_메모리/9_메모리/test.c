#include <stdio.h>
#define STAR 5

void star1(int * mine[5]) {

	int i, j;

	for (i = 0; i < STAR ; i++) {
		mine[i] = (int*)calloc(6, sizeof(int));

		printf("[ %p ] --> ", mine[i]);
		for (j = 0; j < 6; j++)
			printf("[ %d ] ", mine[i][j]);
		puts("");

	}
}

void star2(int * mine[5]) {

	int i, j;

	for (i = 0; i < STAR*2 ; i++) {
		mine[i] = (int*)calloc(6, sizeof(int));
		mine[i] = (int*)realloc(mine[i], _msize(mine[i]) * 2);
	}

	for (i = 0; i < STAR*2; i++) {
		for (j = 0; j < _msize(mine[i]) / sizeof(int); j++)
			printf("[ %d ]", mine[i][j]);
		puts("");
	}

}

void star3(int * mine[5]) {
	int i, j;

	for (i = 0; i < STAR * 3; i++) {
		mine[i] = (int*)calloc(6, sizeof(int));
		mine[i] = (int*)realloc(mine[i], _msize(mine[i]) * 3);
	}

	for (i = 0; i < STAR * 3; i++) {
		for (j = 0; j < _msize(mine[i]) / sizeof(int); j++)
			printf("[ %d ]", mine[i][j]);
		puts("");
	}

}


void main() {

	int grade = 0;
	int * mine[STAR] = { NULL };

	printf("1. 초급\n 2. 중급\n3. 고급\n\n난이도를 선택하세요.  ");
	scanf("%d", &grade);

	switch (grade) {
	case 1: star1(mine);
	case 2: star2(mine);
	}




}