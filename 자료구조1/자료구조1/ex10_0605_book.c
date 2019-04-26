#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct book
{
	char title[10];
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

void init() {
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));
	head->next = tail;
	tail->next = NULL;
}

void insert(NODE * where) {
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	puts("책 제목: ");
	gets(newNode->volume.title);
	puts("지은이: ");
	gets(newNode->volume.writer);

	newNode->next = where->next;
	newNode->prev = where;
	where->next->prev = newNode;
	where->next = newNode;
}



