#include<stdio.h>
#include<stdlib.h>
void main()
{
int num,guess,i=1;
num=rand()%1000;
do
{

	printf("enter a number between 1 t0 1000\n");
	scanf("%d",&guess);
	i++;
	if(num==guess)
	{
	printf(" \"congates ! you won.\" ");
	break;
    }
	if(num>guess)
	printf (" \n *left*");
	else
	printf("\n *right*");
}
while(i<=10);

{
printf("*********game over********\n");
printf (" you reached maximum limit\n");
printf(" lucky no is %d\n",num);
}
}