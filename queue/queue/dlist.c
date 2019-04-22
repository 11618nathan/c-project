
#include "dlist.h"

//=================================================
//  ����Ʈ �ʱ�ȭ !! 
//=================================================
void init()
{	// ��� ���� !! 
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));
	// ��ũ ���� !! 
	head->next = tail;
	head->prev = head;
	tail->prev = head;
	tail->next = tail;
}
//=================================================
// ����Ʈ ���� �Լ� !! 
//=================================================
void push_front(int value) //  ����Ʈ�� �Ǿտ� ���� !! 
{
	insert(head, value);
}
void push_back(int value) // ����Ʈ�� �ǵڿ� ���� !! 
{
	insert(tail->prev, value);
}
void insert(NODE * Where, int value) // Where��� �ڿ� value�� ����  
{
	NODE * newNode = (NODE*)malloc(sizeof(NODE)); // ��� ���� !
	newNode->data = value;
	// ��ũ���� !! 
	newNode->next = Where->next;
	newNode->prev = Where;
	Where->next->prev = newNode;
	Where->next = newNode;

}
//=================================================
// ����Ʈ ���� �Լ� !! 
//=================================================
void erase(NODE * Where) //  �߰����� ���� !! 
{
	// ��ũ ����!! 
	Where->next->prev = Where->prev;
	Where->prev->next = Where->next;
	free(Where); // ��� ���� 
}
void pop_front() // �տ��� ���� !! 
{
	if (head->next != tail)
		erase(head->next);
}
void pop_back() // �ڿ��� ���� !! 
{
	if (tail->prev != head)
		erase(tail->prev);
}


void show()
{
	NODE * p = head->next;  // head���� ������ 
	while (p != tail)	// tail���� ��� ����...
	{
		printf(" %d -->", p->data);
		p = p->next;		// ���� ���� �̵� !! 
	}
	puts("");
}
//===================================================
//  find :  �˻��Լ����� ..
//  �Ű����� : key�� !! 
//	���� :  key���� �ش��ϴ� ����� �����͸� ���� !! 
//===================================================
NODE * find(int key)
{
	NODE * p = head->next;  // 

							// ���ὺƮ�� ó���������� ���������� ��ȸ�ϴ� �ڵ� !! 
	while (p != tail)
	{
		if (p->data == key)
			return p; // ����� �����͸� ���� !! 
		else
			p = p->next;
	}
	return NULL;
}

