#include<stdio.h>

 main()
{
int i,sum=0,r,n;
printf("enter no");
scanf("%d",&i);
i=n;
while(i!=0)
{
r=i%10;
sum=sum*10+r;
i=i/10;

}
printf("%d %d",sum,n);
if(n==sum)
{
printf("NO. is palindrome");
}
else
{
printf("NO. is not palindrome");
}

}