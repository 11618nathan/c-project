
// 번호표
// 큐인가? - 먼저 삽입한 데이터가 먼저 처리가 되기 때문
// 연결리스트인가? - 크기를 예측할 수 없다 -> 매일 고객들의 수가 다르기 때문 

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


// 창구
// 스택 - Ex)main 
// 배열- 창구 수가 정해지고 그것에 따라 일도 처리가 된다
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


// 점장님 스택
// 여러개의 스택 ? -> 서류의 나중에 쌓인 것 부터 처리
// 리스트 -> 쌓인 양이 다르다 -> 창구의 일처지 속도 마다  쌓이는 양이 다르다

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
