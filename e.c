#include<stdio.h>
void main()
{
char c;
printf("enter the value");
scanf("%c",&c);
  if(c>='a'&&c<='z'||c>='A'&&c<='Z')
  {
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
      printf("the value is vowel");
    else
printf("the value is a consonent");
}
  else 
    printf("invalid entry");
}
