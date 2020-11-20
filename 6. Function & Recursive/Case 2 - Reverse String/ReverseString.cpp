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

    reverse("ABC");
    return 0;
}