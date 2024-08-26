#include<stdio.h>

int main()
{
FILE *fptr;
fptr = fopen("NEWTest.txt ",  "r");//use w to create the file
if(fptr == NULL)
{
    printf("File does not exist\n");
}
else
{
    fclose(fptr);
}


    return 0;
}