#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int l, int r, int x)
{
    if (l > r)
    {
        return -1;
    }
    int mid = l + (r - l) / 2;

    if (x == arr[mid])
    {
        return x;
    }
    if (x > arr[mid])
    {
        return binarySearch(arr, mid + 1, r, x);
    }
    if (x < arr[mid])
    {
        return binarySearch(arr, l, mid - 1, x);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", binarySearch(arr, 0, n - 1, 80));
    return 0;
}