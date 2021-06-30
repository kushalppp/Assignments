#include<stdio.h>

 main()
{
int i,n,sum=0,r;
printf("enter no");
scanf("%d",&i);
i=n;
while(i!=0)
{
r=i%10;
sum=sum+r*r*r;
i=i/10;

}
if(n==sum)
printf("NO. is armstrong");
else
printf("NO. is not armstrong");

}