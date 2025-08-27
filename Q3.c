//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main()
{
    int l,w,p,a;
    printf("Length of rectangle:");
    scanf("%d",&l);
    printf("Width of rectangle:");
    scanf("%d",&w);
    a=l*w;
    p=2*(l+w);
    printf("Area:%d\n",a);
    printf("Perimeter:%d",p);
return 0;
}
