#include<stdio.h>

main()
{
int base,ind,j;
float result=1.0;
printf("enter base and ind");
scanf("%d %d",&base ,&ind);

for(j=1;j<=ind;j++)
{
result *= base;

}
printf( " %f is the result",result);
}
