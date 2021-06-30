#include<stdio.h>

main()
{
int n1=1,n2=1,i,j;
printf("enter no\n");
scanf("%d",&i);
printf( "%d ,%d ",n1,n2);
int next_term;

for(j=3;j<=i;j++)
{
next_term= n1+n2;

printf("%d,",next_term);
n1=n2;
n2=next_term;
}
}