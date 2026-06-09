#include<stdio.h>
int main()
{
    int num;
    printf("2 digit odd numbers between 11 to 20");
    for(num=11;num<20;num++)
    {  
        if(num%2!=0)
        printf("\n%d",num);
    }
  
}
