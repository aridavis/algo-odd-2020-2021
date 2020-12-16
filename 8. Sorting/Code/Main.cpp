#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Swap.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"

int main()
{
    int arr[9] = {7, 2, 1, 6, 8, 5, 3, 4, 3};
    int size = sizeof(arr) / sizeof(int);

    BubbleSortOptimized(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}