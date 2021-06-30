#include<stdio.h>

 main()
{
int i,sum=0,r;
printf("enter no");
scanf("%d",&i);

while(i!=0)
{
r=i%10;
sum=sum+r;
i=i/10;

}
printf("%d",sum);
}