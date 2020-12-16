void InsertionSort(int arr[], int size)
{
    for (int j = 1; j < size; j++)
    {
        int idx = j - 1;
        int key = arr[j];

        while (idx >= 0 && arr[idx] > key)
        {
            arr[idx + 1] = arr[idx];
            idx--;
        }
        arr[idx + 1] = key;
    }
}