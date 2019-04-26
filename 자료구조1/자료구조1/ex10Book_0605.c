#include <stdio.h>
#include <malloc.h>
#include <string.h>


typedef struct book
{
	char title[20];
	char writer[10];
}BOOK;

typedef struct node
{
	BOOK volume;
	struct node * next;
	struct node * prev;
}NODE;

NODE * head;
NODE * tail;
void init();
void insert(NODE * where);
NODE * find();
void show();
void erase();

void init() {
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));
	head->next = tail;
	tail->prev = head;
	tail->next = NULL;
	head->prev = NULL;
}

void insert(NODE * where) {
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	getchar();
	fputs("책 제목: ", stdout);
//	gets(newNode->volume.title);
//	gets_s(newNode->volume.title);
	fgets(newNode->volume.title, sizeof(char)*20, stdin);
	getchar();
	fputs("지은이: ", stdout);
//	gets(newNode->volume.writer);
//	gets_s(newNode->volume.writer);
	fgets(newNode->volume.writer, sizeof(char)*10, stdin);

	newNode->next = where->next;
	newNode->prev = where;
	where->next->prev = newNode;
	where->next = newNode;

	show();
}

void push_front() {
	insert(head);
}

void push_back() {
	insert(tail->prev);
}

NODE * find( ) {
	char input[20];
	int i;
	printf("책 제목: ");
	fgets(input, sizeof(input), stdin);
	NODE * p = head->next;
	
	while (p != tail) {
		if (p->volume.title != NULL) {
			for (i = 0; i < strlen(input); i++) {
				if (p->volume.title[i] == input[i])
					return p;
			}
		}
//		if (p->volume.title == input)
//			return p;
		else
			p = p->next;
	}
	printf("등록되지 않은 도서입니다.");
	return NULL;
}

void show(){
	NODE * p = head->next;
	int cnt = 1;
	while (p != tail) {
		printf("[ %2d 번 도서 ]\n", cnt);
		printf("책제목 | %s \n", p->volume.title);
		printf("지은이 | %s \n", p->volume.writer);
		cnt++;
		p = p->next;
	}
	printf("- 목록 끝 -");
}

void erase() {
	NODE * s = find();
	if (s != NULL) {
		printf(" < %s > 를 목록에서 제거합니다.\n", s->volume.title);
		s->prev->next = s->next;
		s->next->prev = s->prev;
		free(s);
	}
	else {
		printf("등록되지 않은 도서입니다.");
	}
	show();
}

void menu() {
	printf("***** 도서관리 프로그램 *****\n");
	printf("1. 도서 등록(push_back)\n");
	printf("2. 도서 검색\n");
	printf("3. 도서 삭제\n");
	printf("4. 도서 현황\n");
	printf("5. 프로그램 종료\n");
}

void main() {
	int input;
	init();
	menu();
	printf("메뉴 선택: ");
	scanf("%d", &input);

	switch (input) {
	case 1: push_back();	break;
	case 2: find();			break;
	case 3: erase();		break;
	case 4: show();			break;
	case 0: return;
	default: puts("input error");
	}
}