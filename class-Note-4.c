// C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops
#include <stdio.h>

int main() {
    
int num = 1;
int sum1=0;//even number sum
int sum2=0;//odd number sum

do {
if (num % 2 == 0) //num=2
{
sum1 = sum1 + num;
}
 num++;//num++=num+1
} while (num <= 50);


num=1;

do {
if (num % 2 != 0) 
 {
  sum2 = sum2 + num;
 }
num++;
} while (num <= 50);

printf("Sum of even numbers =  %d\n", sum1);
printf("Sum of odd numbers  =  %d\n", sum2);

return 0;
}
