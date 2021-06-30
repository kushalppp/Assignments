#include<stdio.h>

main()
{
int i,j;
printf("enter no");
scanf("%d",&i);

for(j=1;j<=i;j++)
{
if(i%j==0)
{
 printf("%d,",j);
}
}
}
