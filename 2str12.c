#iclude<stdio.h>
#include<ctype.h>
int stringcmp(char*s1,char*s2);
int main()
{
char str1[10],str2[10];
printf("enter string1");
scanf("[%^n]"s,str1);
getchchar();
printf("enter string2");
scanf(["%^n"s,str2);
if(!stringcmp(str1,str2))
printf("stringcmp:string are same.");
else
printf("stringcmp:string ara not same.");
printf("\n");
return 0;
}
int stringcmp(char*s1,char*s2)
{
int i=0;
for(i=o;s1[i]!='0';i++)
{
if(s1[i]=s2[i])
return 1;
}
return 0;
}
