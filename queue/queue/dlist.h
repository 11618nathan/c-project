#pragma once
//����ü ����
//�Լ� ����
//#define 
//==>���α׷� �ۼ��� �ʿ��� ������ �̸� �صδ� ��

#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h>	


//=================================================
//  ���� ����Ʈ ���� ( head,  tail ���� ��� ������� ���� )
//=================================================

/*
typedef struct customer  //�մ�  queue
{
	int num;
	struct customer *next;
	struct customer *prev;
}CUSTOMER;

typedef struct job  //���� stack
{
	int money;
	struct job *next;
	struct job *prev;
}JOB;


//=================================================
// head , tail ������ ���� ���� !! 
CUSTOMER * head;
CUSTOMER * tail;

JOB * head;
JOB * tail;
*/

typedef struct node  //���� stack
{
	int data;
	struct node *next;
	struct node *prev;
}NODE;


int staff[5]; //���� �迭

NODE * head;	//�մ� ����Ʈ ���
NODE * tail;	//����
NODE * head2;	//���� ����Ʈ ���
NODE * tail2;	//����


void insert(NODE * Where, int value);


void push_Queue(int value); // �մ� �ޱ�

void push_stack(int value); // ���� �ޱ�


void pop_Queue(); // �մ� �����ϱ�

void pop_stack(); // ���� ó���ϱ�


void erase(NODE * Where); //  �߰����� ���� !! 

void show_customer();

void show_job();

NODE * find(int key);