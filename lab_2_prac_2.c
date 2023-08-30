#include<stdio.h>

 void main()
 {
     int r, d;
     float pi, c, area;

     printf("Enter the radius of Circle:\n");
     scanf("%d",&r);

     d = 2*r;
     pi = 3.14;
     c = 2*pi*r;
     area = pi*r*r;

     printf("Diameter = %d\nCircumference = %.1f\nArea = %.1f\n",d,c,area);
 }
