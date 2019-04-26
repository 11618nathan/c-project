//======================================================================================
// ���� ���� ����Ʈ (Double Linked List)
//		-> ���� ���Ḯ��Ʈ�� ���� ��忡 ���� �����͸� ���´�!! (���⼺)
//		-> ���� ����� ��ũ	--> next
//		-> ���� ����� ��ũ --> prev
//		-> ����⼺	--> ������ : ������ !!
//		-> ���� ���� ���Ǵ� ���Ḯ��Ʈ�� ����
//======================================================================================
/*
	[����Ÿ	]     [����Ÿ]	  [����Ÿ]
	[		] --> [		] --> [		]
	[		] <-- [		] <-- [		]

*/
//======================================================================================
// ���߿��Ḯ��Ʈ ���!!
/*
	typedef struct Node
	{
		int data;
		NODE * next;
		NODE * prev;
	}NODE;
*/
//======================================================================================
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//======================================================================================
// ���߿��Ḯ��Ʈ ����(head, tail ���̳�� ��� ����)
//======================================================================================

typedef struct node
{
	int data;
	struct node * next;	//�������
	struct node * prev; //�������
}NODE;

//��� ���� �������� ����
NODE * head = NULL;
NODE * tail = NULL;

void insert(NODE * where, int value);
NODE * find(int key);
void erase(NODE * where);

//�ʱ�ȭ�Լ�
void init()
{
	//������
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));
	//��ũ����
	head->prev = head;
	head->next = tail;
	tail->prev = head;
	tail->next = tail;
}

//�����Լ�
void push_front(int value)	//����Ʈ�� �� �տ� ����
{
	insert(head, value);
/*	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	newNode->data = value;
	
	newNode->next = head->next;
	newNode->prev = head;
	head->next->prev = newNode;
	head->next = newNode;
*/
}

void push_back(int value)	//����Ʈ�� �� �ڿ� ����
{
	insert(tail->prev, value);
/*	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	newNode->data = value;

	newNode->next = tail;
	newNode->prev = tail->prev;
	tail->prev->next = newNode;
	tail->prev = newNode;
	*/
}

void insert(NODE * Where, int value)	//Where ��� �ڿ� value�� ����
{
	//���ο� ��� ����
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	//�����Ͱ� ����
	newNode->data = value;
	//��ũ ����: �켱 ���ο� ����� ȭ��ǥ���� ������ش�����, ���� ȭ��ǥ�� ����
	newNode->next = Where->next;
	newNode->prev = Where;
	Where->next->prev = newNode;
	Where->next = newNode;
}


void show()
{
	NODE*p = head->next;
	while (p != tail) {
		printf("[ %d ]", p->data);
		p = p->next;
	}
	puts("");
}


NODE * find(int key)
{
	NODE * p = head->next;
	//���Ḯ��Ʈ�� ó������ ������ ��ȸ�ϴ� �ڵ�
	while (p != tail) {
		if (p->data == key)
			return p;			//����� ������ ����
		else
			p = p->next;
	}
	return NULL;
}
//cf. head�� tail�� ���̳��
//���Ḯ��Ʈ ���� �Լ�
//�տ��� ����
void pop_front()
{
	if(head->next != tail)
		erase(head->next);
}

//�ڿ��� ����
void pop_back()
{
	if(tail->prev != head)
		erase(tail->prev);
}

//�߰����� ����
void erase(NODE * where)	//where: ������ ���
{
	//���İ��� ��� ����!!
	where->next->prev = where->prev;
	where->prev->next = where->next;
	//��� ����
	free(where);
}

void main()
{
	init();
	push_back(30);
	push_back(20);
	push_front(40);
	insert(find(20), 4885);
	show();
	erase(find(4885));
	show();
}




