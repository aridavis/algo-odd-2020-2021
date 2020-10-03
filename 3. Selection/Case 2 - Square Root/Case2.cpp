#include <stdio.h>
#include <math.h>
int main()
{
    int x = 0;
    scanf("%d", &x);
    getchar();

    if (x < 0)
    {
        printf("Complex\n");
    }
    else
    {
        printf("%0.3f\n", sqrt(x));
    }

    return 0;
}