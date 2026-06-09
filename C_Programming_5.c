#include<stdio.h>
int main()
{
    int num;
    printf("Odd numbers between 1 to 9");
    for(num=1;num<=9;num++)
    {  
        if(num%2!=0)
        printf("\n%d",num);
    }
  
}
