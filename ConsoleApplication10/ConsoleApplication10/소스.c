
// ��ȣǥ
// ť�ΰ�? - ���� ������ �����Ͱ� ���� ó���� �Ǳ� ����
// ���Ḯ��Ʈ�ΰ�? - ũ�⸦ ������ �� ���� -> ���� ������ ���� �ٸ��� ���� 

#include "Dlist.h"

void push_queue(int num)
{
	push_front(num);
}

void pop_queue()
{
	pop_back();
}

int rear()
{
	if (head->next == tail)
		return -1;
	else
		return head->next->num;
}

int front()
{
	if (tail->prev == head)
		return -1;
	else
		return tail->prev->num;
}


// â��
// ���� - Ex)main 
// �迭- â�� ���� �������� �װͿ� ���� �ϵ� ó���� �ȴ�
#define MAX 5

int stack_array[MAX];
int top = -1;

void push(int data)
{
	if (top >= MAX - 1)
		puts("stack overflow !!");
	else
		stack_array[++top] = data;
}
void pop()
{
	if (top <= -1)
		puts("stack underflow!!");
	else
		top--;
}


// ����� ����
// �������� ���� ? -> ������ ���߿� ���� �� ���� ó��
// ����Ʈ -> ���� ���� �ٸ��� -> â���� ��ó�� �ӵ� ����  ���̴� ���� �ٸ���

void push(int data)
{
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	newNode->data = data;

	newNode->next = head->next;
	newNode->prev = head;
	head->next->prev = newNode;
	head->next = newNode;

}

void pop()
{
	if (head->next == tail)
	{
		puts("stack underflow !! ");
		return;
	}
	NODE * del = head->next;

	del->next->prev = del->prev;
	del->prev->next = del->next;
	free(del);
}

void topStack()
{
	if (head->next != tail)
		printf(" top : %d\n", head->next->data);
}

void main()
{
	init();
	push_queue(10);
}
