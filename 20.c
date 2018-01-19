#include<stdio.h>
void main()
{
int i,n,d;
clrscr();
printf("enter the limit");
scanf("%d",&n);
printf("enter a number");
scanf("%d",&d);
for(i=1;i<=n;i++)
{
if(i%d==0)
{
printf('%d\t",i);
getch();
}
