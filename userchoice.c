#include <stdio.h>
int main ()
{
    int choices;
    float radius,sides ,length ,width;
    float perimeter,area;
    printf(" select your choice from the following");
    printf("\n1.circle");
    printf("\n2.square");
    printf("\n3. rectangle ");
    printf(" enter the choice");
scanf(" %d",choices);
if (choice==1)
{ printf(" enter the radius of the circle ");
 scanf(" %f", &radius );
 area=3.14*radius *radius;
 perimeter =2*3.14*radius;
}
else if (choice ==2)
{ printf(" enter the value of sides");
scanf(" %f",&sides);
area = sides*sides;
perimetre=4*sides;
}
else if (choices==3)
{printf("enter the value of length and width of rectangle:\n");
scanf(" %f",&length );
scanf(" %f",%width);
area =length *width;
perimeter 2*(l+b);
}
else 
{printf("invalid choice");}
printf(" area:%.2f",area);
printf(" perimeter :%.2f",perimeter);
return 0;

}