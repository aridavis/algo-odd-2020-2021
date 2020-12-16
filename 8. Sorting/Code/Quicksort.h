#include <bits/stdc++.h>
using namespace std;

int getPartitionIndex(int *arr, int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[right], &arr[i + 1]);
    return i + 1;
}

void QuickSort(int *arr, int left, int right)
{
    if (right <= left)
    {
        return;
    }
    int pIndex = getPartitionIndex(arr, left, right);
    QuickSort(arr, left, pIndex - 1);
    QuickSort(arr, pIndex + 1, right);
}
