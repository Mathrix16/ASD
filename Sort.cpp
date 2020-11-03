#include "Sort.h"
#include <iostream>


Sort::Sort(int* input,int len)
{
	this->tab = input;
	this->len = len;
}



void Sort::Sorting(int input[],int len)	//Sortowanie przez wstawienie na podstawie pseudokodu z prezentacji.
{
	
	
	for (int x, i, j = 1; j < len ; j++) {
		x = input[j];
		i = j - 1;
		while (i >= 0 && input[i] > x) {
			input[i + 1] = input[i];
			i--;

		}
		input[i + 1] = x;
	}
}

bool Sort::sorted_correctly(int input[],int len)	//sprawdza, czy elementy sa posortowane, przechodzac po calej tablicy.
{
	for (int i = 0; i < len-1; i++) {
		if (input[i] > input[i + 1])
			return false;
	}
	return true;
}

void Sort::display(int input[],int len)	//wyswietlanie tablicy.
{
	
	for (int i = 0; i < len; i++) {
		std::cout << input[i] << " ";
	}
}

int* Sort::getTab()
{
	return this->tab;
}

int Sort::getLen()
{
	return this->len;
}
