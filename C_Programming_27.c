#include <stdio.h>
int main()
{
    int i, n, d, sum;
    for(i = 1; i < 100000; i++)
    {
        sum = 0;
        for(n = i; n > 0; n = n / 10)
        {
            d = n % 10;
            sum = sum + d;
        }
        if(sum == 14)
            printf("%d\n", i);
    }
}
