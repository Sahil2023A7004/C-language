#include<stdio.h>
#include<math.h>
int main()
{
    int number,originalnumber,remainder,result=0,n=0;
    printf("enter the number");
    scanf("%d",&number);
    originalnumber=number;
    while(originalnumber!=0)
    {
        originalnumber/=10;
        ++n;
    }
    originalnumber=number;
    while(originalnumber!=0)
    {
        remainder=originalnumber%10;
        result=pow(remainder,n);
        originalnumber/=10;
    }
    if(result==originalnumber)
    {
        printf("the number is amstrong number");
    }
    else
    {
        printf("the number is not amstrong number");
}
}