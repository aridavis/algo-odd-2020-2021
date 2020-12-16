void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIdx] > arr[j])
            {
                minIdx = j;
            }
        }
        swap(&arr[minIdx], &arr[i]);
    }
}