#include <stdio.h>
int main()
{
    int a, b, i, lcm = 0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    for(i = (a > b ? a : b); lcm == 0; i++)
    {
        if(i % a == 0 && i % b == 0)
            lcm = i;
    }
    printf("LCM = %d", lcm);
}
