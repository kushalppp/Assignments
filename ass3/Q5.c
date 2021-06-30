#include<stdio.h>

main()
{
 int f=1,i;

printf("enter a no ");
scanf("%d",&i);

while(i!=0)
{

printf("%d * ",i);
 f=f*i;
  i--;

 }

printf(" = %d ",f);
}