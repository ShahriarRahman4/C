/* C program to calculate the sum of even and odd numbers
separately from 1 to a user-defined number. Use loops and conditional statements to check and accumulate even and odd numbers.*/
#include<stdio.h>
int main()
{
int limit;
int sum1=0;//even sum
int sum2=0;//odd sum
printf("Enter your limit :");
scanf("%d",&limit);

for(int i=1 ; i<=limit ; i++)
{
    if (i%2==0)
    {
        sum1=sum1+i;
    }

    else
    {
     sum2=sum2+i;

    }
}

printf("sum of even numbers = %d\n",sum1);
printf("sum of odd numbers = %d",sum2);



return 0;
}
