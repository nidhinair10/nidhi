#include <stdio.h>
int main ()
{
int a,b,c,d;
printf("enter gross salary,allowance and deduction");
scanf("%d%d%d",&a);
d=a+a*10/100-a*3/100;
printf("enter net salary=%d\n",d);
return 0;
}
