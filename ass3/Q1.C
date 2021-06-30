#include<stdio.h>

main()
{
 int i;
char ch;
printf("enter a design");
scanf("%c",&ch);
printf("enter a no of times design should be printed:");
scanf("%d",&i);

while(i!=0)
{
  printf("%c",ch);
  i--;
 }


}