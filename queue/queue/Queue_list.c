#include "dlist.h"

void push_queue(int data)
{
	push_front(data);

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
		return head->next->data;


}

int front() {
	if (head->next == tail)
		return -1;
	else
		return head->next->data;

}

void main() {
	push_queue(10);
	printf("front : %d rear : %d \n", front(), rear());
	push_queue(20);
	printf("front : %d rear : %d \n", front(), rear());
	push_queue(30);
	printf("front : %d rear : %d \n", front(), rear());
	push_queue(40);
	printf("front : %d rear : %d \n", front(), rear());
	push_queue(50);
	printf("front : %d rear : %d \n", front(), rear());
	pop_queue();
    printf("front : %d rear : %d \n", front(), rear());

}