#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    char op = '\0';

    scanf("%d %c %d", &x, &op, &y);

    int result = 0;
    char strOperator[200] = "";

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n%d plus %d is %d\n", x, y, x + y, x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d\n%d minus %d is %d\n", x, y, x - y, x, y, x - y);
        break;
    case '/':
        printf("%d / %d = %d\n%d divided by %d is %d\n", x, y, x / y, x, y, x / y);
        break;
    case '%':
        printf("%d %% %d = %d\n%d modulus %d is %d\n", x, y, x % y, x, y, x % y);
        break;
    case '*':
        printf("%d * %d = %d\n%d times %d is %d\n", x, y, x * y, x, y, x * y);
        break;
    }

    return 0;
}