#pragma once
class Sort
{
private:
	int* tab;
	int len;
public:
	Sort(int input[],int len);
	void Sorting(int input[],int len);
	bool sorted_correctly(int input[],int len);
	void display(int input[],int len);
	int* getTab();
	int getLen();

};

