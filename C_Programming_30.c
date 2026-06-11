#include <stdio.h>
int main()
{
    int a, b, c, i, lcm = 0, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if(b > max) max = b;
    if(c > maxq) max = c;
    for(i = max; lcm == 0; i++)
    {
        if(i % a == 0 && i % b == 0 && i % c == 0)
            lcm = i;
    }
    printf("LCM = %d", lcm);
}
