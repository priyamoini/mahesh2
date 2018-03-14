#include<stdio.h>
void main()
{
int fact=1,i,a;
printf("\n Enter the value");
scanf("%d",&a);
for(i=1;i<=5;i++)
{
fact=fact*i;
}
printf("\n The factorial is %d",fact);
getch();
}
