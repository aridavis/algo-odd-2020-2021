#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);
        getchar();

        int arr[10] = {};

        int min = 99999999;

        for (int j = 0; j < x; j++)
        {
            scanf("%d", &arr[j]);
            getchar();
            if (min > arr[j])
            {
                min = arr[j];
            }
        }

        for (int j = min; j >= 1; j--)
        {
            bool divided = true;
            for (int k = 0; k < x; k++)
            {
                if (arr[k] % j != 0)
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