#include<stdio.h>
int main()
{
 int marks;
 printf("Enter your marks: ");
 scanf("%d",&marks);

 if (marks>=100||marks<=100)
 {
    if (marks>=80)
    {
       printf("Grade: A+");
    }
     else if (marks>=75)
    {
       printf("Grade: A");
    }
     else if (marks>=70)
    {
       printf("Grade: A-");
    } else if (marks>=65)
    {
       printf("Grade: B+");
    } else if (marks>=60)
    {
       printf("Grade: B-");
    }
     else if (marks>=55)
    {
       printf("Grade: B");
    }
     else if (marks>=50)
    {
       printf("Grade: B-");
    }
     else if (marks>=45)
    {
       printf("Grade: C");
    }
     else
    {
       printf("Grade: F");
    }
 }
 else{
    printf("Invalid");
 }
return 0;
}