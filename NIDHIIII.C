#include<stdio.h>
int main()
{
int a,b;
printf("enter gross sales,allowance and discount");
scanf("%d",&a);
b=a+a*10/100-a*3/100;
printf("calculating net sales=%d\n",b);
return (0);
}