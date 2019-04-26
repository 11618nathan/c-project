//======================================================================================
// 이중 연결 리스트 (Double Linked List)
//		-> 단일 연결리스트는 다음 노드에 대한 포인터만 갖는다!! (방향성)
//		-> 다음 노드의 링크	--> next
//		-> 이전 노드의 링크 --> prev
//		-> 양방향성	--> 정방향 : 역방향 !!
//		-> 가장 많이 사용되는 연결리스트의 형태
//======================================================================================
/*
	[데이타	]     [데이타]	  [데이타]
	[		] --> [		] --> [		]
	[		] <-- [		] <-- [		]

*/
//======================================================================================
// 이중연결리스트 노드!!
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
// 이중연결리스트 구현(head, tail 더미노드 방식 구현)
//======================================================================================

typedef struct node
{
	int data;
	struct node * next;	//다음노드
	struct node * prev; //이전노드
}NODE;

//헤드 테일 전역변수 선언
NODE * head = NULL;
NODE * tail = NULL;

void insert(NODE * where, int value);
NODE * find(int key);
void erase(NODE * where);

//초기화함수
void init()
{
	//노드생성
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));
	//링크연결
	head->prev = head;
	head->next = tail;
	tail->prev = head;
	tail->next = tail;
}

//삽입함수
void push_front(int value)	//리스트의 맨 앞에 삽입
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

void push_back(int value)	//리스트의 맨 뒤에 삽입
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

void insert(NODE * Where, int value)	//Where 노드 뒤에 value를 삽입
{
	//새로운 노드 생성
	NODE * newNode = (NODE*)malloc(sizeof(NODE));
	//데이터값 대입
	newNode->data = value;
	//링크 연결: 우선 새로운 노드의 화살표부터 만들어준다음에, 기존 화살표를 변경
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
	//연결리스트의 처음부터 끝까지 순회하는 코드
	while (p != tail) {
		if (p->data == key)
			return p;			//노드의 포인터 리턴
		else
			p = p->next;
	}
	return NULL;
}
//cf. head와 tail은 더미노드
//연결리스트 삭제 함수
//앞에서 삭제
void pop_front()
{
	if(head->next != tail)
		erase(head->next);
}

//뒤에서 삭제
void pop_back()
{
	if(tail->prev != head)
		erase(tail->prev);
}

//중간에서 삭제
void erase(NODE * where)	//where: 삭제할 노드
{
	//전후관계 상관 없음!!
	where->next->prev = where->prev;
	where->prev->next = where->next;
	//노드 해제
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




