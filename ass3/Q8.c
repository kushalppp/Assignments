#include<stdio.h>

main()
{
int i ,num;
 printf("enter no:");
scanf("%d",&num);
printf("%d=",num);

 for(i=2;num>1;i++)
{
 while(num%i==0)
{
printf("%d * ",i);
num=num/i;
}
}
}