#include<stdio.h>

main()
{
int i,j=1;
printf("enter no");
scanf("%d",&i);

while(j<=10)
{
printf("%d * %d = %d \n",i,j,i*j);
j++;
}
}
