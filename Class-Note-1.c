#include<stdio.h>
#define pi 3.14
int main()
{
 int degree; 
 float radian;
//int pi=3.14;
for (degree = 0; degree<=360 ; degree=degree+10)
{
    radian = (degree * pi)/180;
    printf("Degree = %d then radian = %.2f\n",degree,radian);
}



    return 0;
}