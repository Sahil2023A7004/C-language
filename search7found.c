 
#include<stdio.h>
void main ()
{ int array[30],ele,i,found=0,num;
  printf("enter the elements of array",i);
  scanf(" %d",&num);
  for(i=0;i<num;i++)
{
    printf("enter the element array[%d] ",i);
    scanf(" %d",&array[i]);
}
printf("enter the element to search");
scanf(" %d",&ele);
for(i=0;i<num;i++)
if(array[i]==ele)
{
    printf("element found at index %d=%d:\n",i,ele);
    found=1;
    break;
}
 if(!found){
    printf("element is not found");
 }}