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

        int arr[1005] = {};
        for (int i = 0; i <= 1000; i++)
        {
            arr[i] = i;
        }

        for (int j = 0; j < n; j++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            getchar();
            arr[x] = y;
        }
        int z = 0;
        scanf("%d", &z);
        getchar();

        while (arr[z] != z)
        {
            z = arr[z];
        }

        printf("Case #%d: %d\n", i + 1, z);
    }
    return 0;
}