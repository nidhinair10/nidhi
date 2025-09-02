#include<stdio.h>
int main()
{
int a,b,c;
printf("enter gross sales and discount");
scanf("%d%d",&a,&b);
c=a-b*1/100;
printf("calculating net sales=%d\n",c);
return (0);
}