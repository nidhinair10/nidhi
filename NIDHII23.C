#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter marks of three subjects");
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
e=a+b+c/3;
printf("total of three subjects=%d\n",d);
printf("average of three subjects=%d\n",e);
return (0);
}