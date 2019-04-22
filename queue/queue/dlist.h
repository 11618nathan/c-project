#pragma once
//구조체 선언
//함수 선언
//#define 
//==>프로그램 작성에 필요한 선언을 미리 해두는 것

#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h>	


//=================================================
//  이중 리스트 구현 ( head,  tail 더미 노드 방식으로 구현 )
//=================================================

/*
typedef struct customer  //손님  queue
{
	int num;
	struct customer *next;
	struct customer *prev;
}CUSTOMER;

typedef struct job  //업무 stack
{
	int money;
	struct job *next;
	struct job *prev;
}JOB;


//=================================================
// head , tail 포인터 전역 선언 !! 
CUSTOMER * head;
CUSTOMER * tail;

JOB * head;
JOB * tail;
*/

typedef struct node  //업무 stack
{
	int data;
	struct node *next;
	struct node *prev;
}NODE;


int staff[5]; //직원 배열

NODE * head;	//손님 리스트 헤드
NODE * tail;	//테일
NODE * head2;	//업무 리스트 헤드
NODE * tail2;	//테일


void insert(NODE * Where, int value);


void push_Queue(int value); // 손님 받기

void push_stack(int value); // 업무 받기


void pop_Queue(); // 손님 응대하기

void pop_stack(); // 업무 처리하기


void erase(NODE * Where); //  중간에서 삭제 !! 

void show_customer();

void show_job();

NODE * find(int key);