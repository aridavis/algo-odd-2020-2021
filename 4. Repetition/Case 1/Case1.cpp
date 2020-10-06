#include <stdio.h>

long long int prime[1000000] = {};

int numSize = 0;
int main()
{
    while (true)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        getchar();
        bool hasOne = false;
        a = a < 2 ? 2 : a;
        long long int counter = 0;
        for (long long int i = a; i < b; i++)
        {

            counter++;
            if (prime[i] == 1)
            {
                if (hasOne == true)
                {
                    printf(" ");
                }
                printf("%lld", i);
                hasOne = true;
            }
            else if (prime[i] == 2)
            {
                continue;
            }
            else
            {
                bool isPrime = true;
                for (int j = 2; j < i; j++)
                {
                    counter++;

                    if (i % j == 0)
                    {
                        isPrime = false;
                        prime[i] = 2;
                        break;
                    }
                    else
                    {
                        isPrime = true;
                    }
                }
                if (isPrime)
                {
                    prime[i] = 1;
                    if (hasOne == true)
                    {
                        printf(" ");
                    }
                    printf("%lld", i);
                    hasOne = true;
                }
            }
        }
        printf("Counter: %lld\n", counter);
    }
    return 0;
}