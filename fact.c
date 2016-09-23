#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=1;
printf("Enter the number:");
scanf("%d",&n);
for(i=n;i>0;i--)
{
sum=sum*i;
}
printf("sum=%d",sum);
return 0;
}