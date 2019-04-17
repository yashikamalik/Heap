#pragma once
#include "stdafx.h"
#include<iostream>

using namespace std;
#define CAPACITY 20 

class Heap_Tree
{

	int HeapArray[CAPACITY];
	int size;

public:
	Heap_Tree();
	bool empty();
	void insert(int data);
	int retrieve();
	void remove();

};