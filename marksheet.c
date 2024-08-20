#include<stdio.h>
int main()
{
int marks; 
printf("Enter your marks : ");
scanf("%d",&marks);
if(marks>100)
{
    printf("Not a valid mark");
}
else if(marks<0)
{
    printf("Not a valid mark");
}
else if(marks>=80)
{
    printf("A+");
}
else if(marks>=70)
{
    printf("A");
}
else if(marks>=60)
{
    printf("A-");
}
else if(marks>=50)
{
    printf("B");
}
else if(marks>=33)
{
    printf("C");
}
else
{
    printf("Fail");
}

    return 0;
}