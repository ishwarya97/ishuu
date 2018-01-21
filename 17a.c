void main()
{
int n,sum=0;
printf("enter number");
while(n>0)
{
n=n%10;
sum=sum+(n*n*n)
n=n/10
}
if(n==sum)
{
printf("given number is armstrong");
}
else
{
printf("given number is not armstrong");
}
