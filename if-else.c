#include<stdio.h>
int main()
{
int age;
printf("Enter your age : ");
scanf("%d",&age);

if(age>=18)
{
    printf("Adult\n");

}
else if(age<18 && age>13)
{
 printf("teenager\n");
}
else
{
    printf("child\n");
}

printf("Thank you !");


    return 0;
}