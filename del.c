#include<stdio.h>
void main()
{
int a[20],
printf("\n Enter the value of n");
scanf("%d",&n);
printf("\n Enter the value of k");
scanf("%d",&k);
printf("\n Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-k;i++)
{
printf("\n The final value is %d",a[i]);
}
getch();
}
