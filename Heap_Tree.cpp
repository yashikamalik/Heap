
#include "stdafx.h"
#include<iostream>
using namespace std;
#include "Heap_Tree.h"


Heap_Tree::Heap_Tree()
{
	size = 0;
	HeapArray[0] = 0;
}



bool Heap_Tree::empty()
{
	if (HeapArray[0] == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
	

}



void insert(int data) 
{
	if (empty() == true)
	{
		HeapArray[1] = data;
	}
	else
	{
		int size = HeapArray[0];
		size++;
		HeapArray[size] = data;
		temp = HeapArray[1];
		HeapArray[1] = HeapArray[size]; 
	}
}



int Heap_Tree::retrieve()
{

}



void Heap_Tree::remove()
{

}