#include <stdio.h>
int main()
{
    int n;
    int d, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(; n > 0; n = n / 10)
    {
        d = n % 10;
        if(d == 0 || d == 1 || d == 4 || d == 9)
            count++;
    }
    printf("Perfect square digits = %d", count);
}
