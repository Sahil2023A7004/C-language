#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
scanf("%d",&a[i]);
if(a[i]%2==0)
sum=sum+a[i];
else
sum1=sum1+a[i];
    }
    printf("sum of even elements of aray=%d",sum);
    printf("sum of odd elements of array=%d",sum1);
}