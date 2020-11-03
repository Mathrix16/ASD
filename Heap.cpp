#include "Heap.h"
#include<iostream>;
Heap::Heap(int tab[], int n)
{
	arr = tab;
	length = n;
}

void Heap::heapify(int lng, int i)
{
	int max = i;
	int left = (i << 1) + 1;
	int right = (i << 1) + 2;
	if (left<lng && arr[left]>arr[max])
		max = left;
	if (right<lng && arr[right]>arr[max])
		max = right;
	if (max != i)
	{
		int supp;
		supp = arr[i];
		arr[i] = arr[max];
		arr[max] = supp;
		heapify(lng, max);
	}
}
void build_heap(){
for (int i = length / 2; i >= 0; i--) {
		heapify(length, i);
	}
}
void Heap::heapsort()
{
	int supp;	
	for (int i = length - 1; i > 0; i--) {
		supp = arr[0];
		arr[0] = arr[i];
		arr[i] = supp;
		heapify(i, 0);
	}
}

void Heap::disp()
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
}