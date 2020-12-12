#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int sizeLeft = m - l + 1;
    int sizeRight = r - m;

    int left[sizeLeft], right[sizeRight];

    for (int i = 0; i < sizeLeft; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < sizeRight; i++)
    {
        right[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, idx = l;
    while (i < sizeLeft && j < sizeRight)
    {
        if (left[i] < right[j])
        {
            arr[idx++] = left[i++];
        }
        else
        {
            arr[idx++] = right[j++];
        }
    }
    for (i; i < sizeLeft; i++)
    {
        arr[idx++] = left[i];
    }
    for (i; i < sizeRight; i++)
    {
        arr[idx++] = right[i];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + ((r - l) / 2);
    for (int i = l; i <= mid; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" SPLIT ");
    for (int i = mid + 1; i <= r; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    merge(arr, l, mid, r);
}

int main()
{
    int arr[] = {123, 11, 12, 32, 231, 531, 4124};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}