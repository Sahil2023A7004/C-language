#include<stdio.h>
void main ()
{
    int a,b;
    printf("enter the value of of a");
    scanf("%d",&a);
    for(int a=1;a<10;a++)
    {
        b=a*a*a;
        printf("cubes:%d",b);
    }
    printf("\n");
}