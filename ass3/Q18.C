#include<stdio.h>

main()
{
int i,j;
printf(" enter no");
scanf("%d", &i);

if(i<=10)
  {
for(j=1;j<=10;j++)
{
printf(" %d * %d = %d \n",i,j,i*j);
}
}
printf(" enter no between 1 to 10");
}



