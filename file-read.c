#include<stdio.h>

int main()
{
FILE *fptr;
fptr = fopen("Test.txt",  "r");//use w to create the file

char ch; 
fscanf(fptr,"%c",&ch);
printf("Charecter =  %c\n",ch);

fclose(fptr);


    return 0;
} 