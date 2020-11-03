#pragma once
class Heap
{
private:
	int* arr;
	int length;

public:
	Heap(int tab[], int n);
	void heapify(int lng, int i);
	void build_heap();
	void heapsort();
	void disp();

};
