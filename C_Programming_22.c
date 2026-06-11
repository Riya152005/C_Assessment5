#include <stdio.h>
int main()
{
    long long int n;
    int a, b, count = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    for(; n >= 10; n = n / 10)
    {
        a = n % 10;
        b = (n / 10) % 10;
        if(((b * 10) + a) % 2 != 0)
            count++;
    }
    printf("Two-digit odd numbers = %d", count);
}
