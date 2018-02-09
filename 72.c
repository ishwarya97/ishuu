#include"stdio.h"
int main()
{
  char c, tolowercasevowel, touppercasevowel;
  printf("it is an alphabet");
  scanf("%s",c);
   tolowercasevowel(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   touppercasevowel(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(tolowercasevowel||touppercasevowel)
{
  printf("%c is vowel");
  printf("yes");
}
else
{
  printf("no");

  
}
}  
