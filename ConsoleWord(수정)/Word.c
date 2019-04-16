//�ܼ� ���� ���α׷�

#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct node {
	char word[20];		//���ڿ�
	struct node * prev;
	struct node * next;
}NODE;

NODE * head, *tail;

void show();

void init() {
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));

	head->next = tail;
	head->prev = NULL;
	tail->prev = head;
	tail->next = NULL;
}

void insertList(NODE*where, NODE * newNode) {
	newNode->next = where->next;
	newNode->prev = where;
	where->next->prev = newNode;
	where->next = newNode;
}

//�ܾ� �߰�
void insertWord(char * word) {
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	strcpy(newNode->word, word);						//���ڿ� ����

	insertList(tail->prev, newNode);
	show();
}

//�ܾ� ã��
NODE * find(char * word) {
	NODE * p;
	for (p = head->next; p != tail; p = p->next) {
		if (strcmp(p->word, word) == 0)
			return p;
	}
	return NULL;
}

//�ܾ� ����
void deleteWord(char* word) {
	NODE * s = find(word);
	s->prev->next = s->next;
	s->next->prev = s->prev;
	free(s);
	show();
}

void show() {
	NODE * p;
	printf("[Result] ");
	for (p = head->next; p != tail; p = p->next) {
		printf("%s ", p->word);
	}
	puts("");
}

void copyWord(char * word, char * copyTemp) {
	NODE * s = find(word);
	strcpy(copyTemp, s->word);
	show();
}

void pasteWord(char * word, char*copyTemp) {
	NODE * s = find(word);
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	strcpy(newNode->word, copyTemp);
	
	insertList(s, newNode);
	show();
}

void main()
{
	char cmd[32] = {0};	//��ɾ�
	char copyTemp[20] = { 0 };
	init();

	while (1) {
		gets(cmd);
		if (strncmp("insert", cmd, 6) == 0) {
			insertWord( cmd + 7 );
		}
		else if (strncmp("delete", cmd, 6) == 0) {
			deleteWord(cmd + 7);
		}
		else if (strncmp("copy", cmd, 4) == 0) {
			copyWord(cmd + 5, copyTemp);
		}
		else if (strncmp("paste", cmd, 5) == 0) {
			pasteWord(cmd + 6, copyTemp);
		}
	}

}

