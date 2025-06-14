//C program that calculates the product of numbers from 1 to 5 using a while loop.
#include <stdio.h>
int main() {
int num = 1;
int product = 1;


while (num <= 5) 
{
        product *= num; //product = product *num;
        num++;
}


printf("The product of numbers =  %d\n", product);

return 0;
}
