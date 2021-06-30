#include<stdio.h>

 main()
{
int i,j=1,sum=1;
printf("enter no");
scanf("%d",&i);

while(j<=i)
{
printf("%d * ",j);
sum=sum*j;
j++;
}
printf(" = %d\n",sum);
}