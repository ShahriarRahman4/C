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

struct student s1 = {122 , 3.5  , "Rifat"};
printf("Student roll = %d\n ",s1.roll);

struct student *ptr = &s1;
printf("Student roll = %d\n",(*ptr).roll);




    return 0;
 }