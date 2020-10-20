#include <bits/stdc++.h>
using namespace std;

void print(const char *c)
{
    if (*c != '\0')
    {
        print(c + 1);
        printf("%c", *c);
    }
}

int main()
{
    char str[2000] = "";
    while (true)
    {
        scanf("%[^\n]", str);
        getchar();
        if (strcmp(str, "EXIT") == 0)
        {
            break;
        }
        print(str);
        printf("\n");
    }
    return 0;
}