#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        char str[2000] = "";
        int arr[130] = {};
        scanf("%[^\n]", str);
        getchar();
        int x = strlen(str);
        for (int j = 0; j < x; j++)
        {
            arr[str[j]]++;
        }
        printf("Case #%d:\n", i + 1);

        for (int j = 0; j < 130; j++)
        {
            if (arr[j] > 0)
            {
                printf("%c: %d\n", j, arr[j]);
            }
        }
    }
    return 0;
}