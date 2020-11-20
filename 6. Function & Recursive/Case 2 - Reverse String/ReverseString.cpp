#include <bits/stdc++.h>
using namespace std;

void reverse(char str[])
{
    if (str[0] == '\0')
    {
        return;
    }
    reverse(str + 1);

    printf("%c", str[0]);
}

int main()
{
    while (true)
    {
        char str[500] = "";
        strcpy(str, "");
        scanf("%[^\n]", str);
        getchar();
        if (strcmp(str, "EXIT") == 0)
            break;
        reverse(str);
        printf("\n");
    }
    return 0;
}