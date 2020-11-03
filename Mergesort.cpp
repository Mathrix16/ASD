#include "Mergesort.h"

void Mergesort::merge(int input[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = input[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = input[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            input[k] = L[i];
            i++;
        }
        else
        {
            input[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        input[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        input[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void Mergesort::Sort(int input[], int left, int right)
{
    if (left < right)
    {

        int m = left + (right - left) / 2;
        Sort(input, left, m);
        Sort(input, m + 1, right);
        merge(input, left, m, right);
    }
}
