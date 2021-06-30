#include<stdio.h>

main()
{
 int f=1,i=1,j;

printf("enter a no ");
scanf("%d",&j);

while(i<=j)
{
printf("%d *",i);
 f=f*i;
  i++;

 }

printf(" = %d ",f);
}