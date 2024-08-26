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

struct student s2;
s2.roll = 212;
s2.cgpa = 3.92;
strcpy(s2.name,"Nil");

printf("Student name = %s\n",s2.name);
printf("Student roll = %d\n",s2.roll);
printf("Student cgpa = %.2f\n",s2.cgpa);

struct student s3;
s3.roll= 213;
s3.cgpa = 4.00;
strcpy(s3.name,"Akash");

printf("Student name = %s\n",s3.name);
printf("Student roll = %d\n",s3.roll);
printf("Student cgpa = %.2f\n",s3.cgpa);



return 0;

}