#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the three sides of Triangle: \n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c&&a<b+c)
 {
    printf("The Triangle is valid");
 }
 else if(b>a&&b>c&&b<a+c)
 {
    printf("The Triangle is valid");
 }
 else if(c>b&&c>a&&c<a+b)
 {
    printf("The Triangle is valid");
 }
 else
 {
    printf("The Triangle is not valid");
 }
return 0;
}
