#include <stdio.h>
int main()
{
    int num, rev = 0, x;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (; num != 0; num = num / 10)
    {
        x = num % 10;
        rev = rev * 10 + x;
    }
    printf("Reverse of the number = %d", rev);

}