 
#pragma once 
#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h>	

typedef struct node
{
	int data;
	struct node * next;
	struct node * prev;
}NODE;



NODE * head;
NODE * tail;

void push_back(int value);
void push_front(int value);
void insert(NODE * Where, int value);

void erase(NODE * Where);
void pop_front();
void pop_back();

void init();

void show();

NODE * find(int key);