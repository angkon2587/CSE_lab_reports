#include<stdio.h>
void main ()
{
int i;
for(i = 0; i<10; i++)
{
printf("%d ",i);
if(i == 6) // loop will end when the condition becomes true
break;
}
printf("came outside of loop i = %d",i);
}