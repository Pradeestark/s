#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d if large number",a);
else if(b>c)
printf("%d if large number",b);
else
printf("%d if large number",c);
}
