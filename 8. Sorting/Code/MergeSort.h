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
    for (j; j < sizeRight; j++)
    {
        arr[idx++] = right[j];
    }
}

void MergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + ((r - l) / 2);

    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);

    merge(arr, l, mid, r);
}