#include<stdio.h>
void main()
{
int n,c=0,a;
scanf("%d",&n);
while(n!=0)
{
a=n%10;
c++;
n=n/10;
}
printf("count==%d",c);
}
