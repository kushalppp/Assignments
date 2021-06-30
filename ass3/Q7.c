#include<stdio.h>

 main()
{
int i,j=1;
printf("enter no");
scanf("%d",&i);

while(i%j==0)
{
printf("%d %d %d\n",j,i/j,i);
j++;
}
}
