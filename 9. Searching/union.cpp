#include <bits/stdc++.h>
using namespace std;

union data
{
    int a;
    int b;
};

int main()
{
    data x;
    x.a = 100;
    x.b = 200;

    printf("%d\n", &x.a);
    printf("%d\n", &x.b);
    printf("%d\n", x.a);

    return 0;
}