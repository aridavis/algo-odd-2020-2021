#include <stdio.h>

int primeNumbers[1000000] = {};

int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();

    for (int z = 0; z < t; z++)
    {
        int counter = 0;

        counter++;
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        getchar();

        a = a < 2 ? 2 : a;

        bool isFirst = true;

        printf("Case #%d: ", z + 1);

        for (int i = a; i <= b; i++)
        {
            counter++;
            bool isPrime = true;

            for (int j = 2; j < i; j++)
            {
                counter++;
                if (i % j == 0)
                {
                    primeNumbers[i] = 2;
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                if (isFirst == false)
                {
                    printf(" ");
                }
                printf("%d", i);
                primeNumbers[i] = 1;
                isFirst = false;
            }
        }
        printf("\n");
    }

    return 0;
}