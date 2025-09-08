#include<stdio.h>
int main()
{
int A,P,L,B;
printf("enter L,B");
scanf("%d",&L,&B);
A=L*B;
P=2*L+B;
printf("calculating area of rectangle=%d\n",A);
printf("calculating perimeter of rectangle=%d\n",P);
return (0);
}
