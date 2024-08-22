#include<stdio.h>
void software_engineering();
void datascience_engineering();

int main()
{
    char ch;
    printf("Enter s for software-engineering & d for datascience-engineering :");
    scanf("c",&ch);
    if(ch=='s')
    {
        software_engineering();
    }
    else
    {
       datascience_engineering(); 
    }
    return 0;
}


void software_engineering()
{
    printf("You are a Software Engineer");
}

void datascience_engineering()
{
    printf("You are a Data-Science Engineer");
}