#include<stdio.h>
int main()
{
int a,KB,MB,GB;
printf("enter a");
scanf("%d",&a);
KB=1024*a;
MB=1024*1024*a;
GB=1024*1024*1024*a;
printf("converting bytes into kilobytes=%d\n",KB);
printf("converting bytes into megabytes=%d\n",MB);
printf("converting bytes into gigabytes=%d\n",GB);

return (0);
}