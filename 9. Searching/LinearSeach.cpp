#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int x, int size, int idx)
{
    if (idx >= size)
    {
        return -1;
    }

    if (arr[idx] == x)
    {
        return x;
    }
    return linearSearch(arr, x, size, idx + 1);
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", linearSearch(arr, 100, n, 0));
    return 0;
}