#include <stdio.h>
int main ()
{
int a,b,add,sub,prod,divi;
printf ("enter the first number:");
scanf ("%d",&a);
printf("enter the second number:");
scanf ("%d",&b);
add=a+b;
prod=a*b;
sub=a-b;
divi=a/b;
printf("the sum of two numbers is =%d\n",add);
printf("the product of two numbers is =%d\n",prod);
printf("the difference of two numbers=%d\n",sub);
printf("the quotient of two numbers=%d\n",divi);
return 0;
}


