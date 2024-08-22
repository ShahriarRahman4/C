#include<stdio.h>
int main()
{
int num;
while(1)
{
printf("Enter your number :");
scanf("%d",&num);


if(num%2==0)
{
    printf("%d\n",num);
    
}
else
{  
    printf("This is an odd number\n");
}
}

    return 0;
}