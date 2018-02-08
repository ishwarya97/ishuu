#include<stdio.h>
#include<string.h>
void main()
{
  char st[10],ch;
  int i,l;
  printf("enter the string");
  gets(st);
  l=strlen(st);
  printf("the original string is %s\n",st);
  for(i=0;i<l/2;i++)
  {
    ch=st[i];
    st[i]=st[l-1-i];
    st[l-1-i]=ch;
    printf("reverse string is %s\n",&st);
    
  }
}
