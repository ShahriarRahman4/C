#include<stdio.h>
int main()
{
int n;
printf("Enter your number :");
scanf("%d",&n);

int fact =1;
for(int i=1;i<=n;i++)
{
    fact = fact * i;
                  /*
                 4!=1*2*3*4 
                     */

}


printf("Final factorial %d",fact);


    return 0;
}