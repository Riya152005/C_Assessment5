#include <stdio.h>
int main()
{
    int n, num, sum = 0, d, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;  
    for (; n > 0; n = n / 10)
    {
        d = n % 10;
        sum = sum + d;
    }
    printf("Sum of digits = %d\n", sum);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        printf("%d is Prime", num);
    else
        printf("%d is Not Prime", num);
}