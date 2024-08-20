#include<stdio.h>
int main()
{
char ch;
printf("Enter charecter :");
scanf("%c", &ch);

if(ch>='A' && ch<= 'Z'  )
{
    printf("Upper Case ");
}
else if(ch>= 'a' && ch<= 'z' )
{
    printf("lower case ");
}
else
{
    printf("Not a letter");
}
    return 0;
}