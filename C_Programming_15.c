#include <stdio.h>
int main()
{
    int n, t, div = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if ((n % 10) % 2 == 0)
    {
        printf("%d", n);
    }
    else
    {
        t = n;

        for (; t >= 10; t = t / 10)
        {
            div = div * 10;
        }

        printf("%d", n - div);
    }
}