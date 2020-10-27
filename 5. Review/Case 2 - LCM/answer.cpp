#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        getchar();
        int arr[200] = {};
        int max = -1;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            getchar();
            if (max < arr[j])
            {
                max = arr[j];
            }
        }

        for (int j = max; true; j++)
        {
            bool divided = true;
            for (int k = 0; k < n; k++)
            {
                if (j % arr[k] != 0)
                {
                    divided = false;
                    break;
                }
            }
            if (divided)
            {
                printf("Case #%d: %d\n", i + 1, j);
                break;
            }
        }
    }
    return 0;
}