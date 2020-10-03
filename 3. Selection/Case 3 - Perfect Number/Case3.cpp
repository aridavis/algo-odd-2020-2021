#include <stdio.h>

int main()
{
    int x = 0;
    scanf("%d", &x);

    int ratus = x / 100;
    int puluh = x / 10 % 10;
    int satuan = x % 10;

    bool result = ratus > puluh && puluh > satuan;

    char arr[15][15] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    printf("%s %s %s is %s number\n",
           arr[ratus], arr[puluh], arr[satuan],
           result ? "a perfect" : "an imperfect");

    return 0;
}