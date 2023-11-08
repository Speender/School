#include <stdio.h>
#include <math.h>

double ceilingNumber(double number);
double floorNumber(double number);
double roundOff(double number);

int main()
{
    double num1, roundingOff, floor, ceiling;
    printf("Enter your value: ");
    scanf("%lf", &num1);
    
    floor = floorNumber(num1);
    ceiling = ceilingNumber(num1);
    roundingOff = roundOff(num1);
    
    printf("The floor value: %.6lf\n", floor);
    printf("The ceiling value: %.6lf\n", ceiling);
    printf("Rounded value: %.6lf\n", roundingOff);
    
    return 0;
}

double roundOff(double number)
{
    double value;
    value = number + 0.005;
    value = value * 100;
    return round(value) / 100;
}

double floorNumber(double number)
{
    return floor(number);
}

double ceilingNumber(double number)
{
    return ceil(number);
}
