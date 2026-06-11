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
        if(d == 2 || d == 3 || d == 5 || d == 7)
            count++;
    }
    printf("Total prime digits = %d", count);
}
