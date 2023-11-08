#include <stdio.h>
#include <math.h>
double myDecimal(double num);
int main() {
    double num1;
  
    printf("Enter a floating point number to be rounded off: ");
    scanf("%lf", &num1);
    
    double roundedNumber = myDecimal(num1);
    
    printf("Rounded number: %.6lf\n", roundedNumber);
    
    return 0;
}

double myDecimal(double num1) {
    double roundedNumber;
    
    roundedNumber = num1 * 100 + 0.005; 
    double value = round(roundedNumber) / 100.0;
    
    return value;
}
