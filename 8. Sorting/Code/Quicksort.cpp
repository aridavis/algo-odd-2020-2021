#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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

void sort(int *arr, int left, int right)
{
    if (right <= left)
    {
        return;
    }
    int pIndex = getPartitionIndex(arr, left, right);
    sort(arr, left, pIndex - 1);
    sort(arr, pIndex + 1, right);
}

int main()
{
    int arr[9] = {7, 2, 1, 6, 8, 5, 3, 4, 3};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}