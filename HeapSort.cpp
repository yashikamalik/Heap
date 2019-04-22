#include "stdafx.h"
using namespace std;
#include <iostream>
#include "Heap.h"
#define CAPACITY 100

Heap_tree::Heap_tree()
{
	size = '\0';
	HeapArray[0] = 0;

}

int parent(int i) { return (i - 1) / 2; }

// to get index of left child of node at index i 
int left(int i) { return (2 * i + 1); }

// to get index of right child of node at index i 
int right(int i) { return (2 * i + 2); }
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

bool Heap_tree::empty()
{
	if (HeapArray[0] = NULL)
		return true;
	else
		return false;
}
void Heap_tree::insert(int data)
{
	/*if (size = CAPACITY)
	{
		cout << "There is no space. " << endl;
		return;
	}
	else
	{
		size++;
		int i = size ;
		HeapArray[i] = data;
		if (HeapArray[i] > HeapArray[parent(i)])
		{
			swap(HeapArray[i], HeapArray[parent(i)]);
			i = parent(i);
		}
	}*/
	if (size == CAPACITY)
	{
		cout << "\nOverflow: Could not insertKey\n";
		return;
	}

	// First insert the new key at the end 
	size++;
	int i = size - 1;
	HeapArray[i] = data;

	 
	while (i != 0 && HeapArray[parent(i)] < HeapArray[i])
	{
		swap(&HeapArray[i], &HeapArray[parent(i)]);
		i = parent(i);
	}


}
int Heap_tree::retreive()
{
	cout << "The largest element is: " << endl;
	return HeapArray[1];
}
void Heap_tree::remove()
{
	if (HeapArray[0] = NULL)
	{
		cout << "The tree is empty. " << endl;
	}
	else
	{
		HeapArray[1] = NULL;
		HeapArray[size] = HeapArray[1];
		int i;
		for (i = 1; i <= size; i++)
		{
			if (HeapArray[i] < HeapArray[left(i)])
			{
				swap(&HeapArray[i], &HeapArray[left(i)]);

			}
			else if (HeapArray[i] < HeapArray[right(i)])
			{
				swap(&HeapArray[i], &HeapArray[right(i)]);
			}
			else
			{
				HeapArray[i] = HeapArray[i];
			}

		}
	}


}
void Heap_tree::sort()//to sort after indserting or deleting
{
	int i;
	for ( i = 1; i <= size; i++)
	{
		if (HeapArray[i] < HeapArray[left(i)])
		{
			swap(&HeapArray[i], &HeapArray[left(i)]);

		}
		else if (HeapArray[i] < HeapArray[right(i)])
		{
			swap(&HeapArray[i], &HeapArray[right(i)]);
		}
		else
		{
			HeapArray[i] = HeapArray[i];
		}
		
	}
	cout << "The sorted tree is: " << HeapArray[i] << endl;
	

}

