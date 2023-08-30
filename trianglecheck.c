#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the three sides of the Triangle: \n");
 scanf("%d%d%d",&a,&b,&c);
 
 

 if(a==b&&b==c)
 {
    printf("The triangle is Equilateral");
 }
 else if(a==b||b==c)
 {
    printf("The triangle is Isosceles");
 }
 else
 {
    printf("The Triangle is Scalene");
 }
return 0;
}