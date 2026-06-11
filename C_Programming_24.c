#include <stdio.h>
int main()
{
    int n;
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    for(; n >= 10; n = n / 10)
    {
        num = n % 100;
        if(num == 16 || num == 25 || num == 36 ||
           num == 49 || num == 64 || num == 81)
            count++;
    }
    printf("Total 2-digit perfect square numbers = %d", count);
}
