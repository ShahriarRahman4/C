#include<stdio.h>

void calculateprice(float value);

int main()
{
    float price;
    printf("Enter the price: ");
    scanf("%f", &price);
    
    calculateprice(price); // Pass the price variable here

    return 0;
}

void calculateprice(float value)
{
    value = value + (0.30 * value);
    printf("Final price: %f\n", value);
}
