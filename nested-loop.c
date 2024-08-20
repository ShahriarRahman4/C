#include<stdio.h>
int main()
{
int num;
printf("Enter your number :");
scanf("%d",&num);

if(num>=0)
{
    printf("Positive \n");
    if(num%2==0)
    {
        printf("EVEN\n");
    
    }
    else
    {
        printf("ODD \n");
    }
}
else
{
    printf("Negative");
}







    return 0;
}