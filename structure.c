 #include<stdio.h>
#include<string.h>

//user defined
struct student
{
int roll;
float cgpa;
char name[100];

};

int main()
{
struct student s1;
s1.roll = 211;
s1.cgpa = 3.5;
strcpy(s1.name,"Shahriar");

printf("Student name = %s\n",s1.name);
printf("Student roll = %d\n",s1.roll);
printf("Student name = %.2f\n",s1.cgpa);



return 0;

}