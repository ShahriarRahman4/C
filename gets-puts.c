#include<stdio.h>
int main()
{
char name[100];
char age[100];
fgets(name, 100, stdin);
fgets(age, 100, stdin);
printf("%s",name);
printf("%s",age);

}