#include<stdio.h>
int main()
{
    int num,x,y,z;
    for(num=1;num<=100;num++)
    {
    x=num/10;
    y=num%10;
    z=x+y;
    {  
        if((num%2==0)&&(z==6))
        printf("%d\n",num);
    }
    }
}
