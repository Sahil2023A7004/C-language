#include<stdio.h>
void main()
{
    int i,j,num;
    printf("enter the value to genratrate table");
    scanf("%d",num);
    for(i=1;i<=20;i++)
    {
        j=num*i;
    printf("%d*%d=%d\n",i,num,j);
    }
}