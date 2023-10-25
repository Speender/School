//non-void with parameter done DONE
//void w/o parameter return cube DONE
//non-void w/o parameter grading system using if else DONE
//non-void w parameter calculator using switch case Done
#include <stdio.h>
double Add(double num1, double num2);
double Min(double num1, double num2);
double Mul(double num1, double num2);
double Div(double num1, double num2);
int main()
{
    float a, b, sum, diff, quo, prod;
    char oprtr;
    printf("Enter your equation: ");
    scanf("%f %c %f", &a, &oprtr, &b);

    switch (oprtr)
    {
    case '+':
        sum = Add(a, b);
        printf("The Sum is: %.2f\n", sum);
    break;

    case '-':
        diff = Min(a, b);
        printf("The Difference is: %.2f\n", diff);
    break;

    case '*':
        prod = Mul(a, b);
        printf("The Product is: %.2f\n", prod);
    break;
    
    case '/':
        quo = Div(a, b);
        printf("The Quotient is: %.2f\n", quo);
    break;
    default:
        break;
    }
    


    return 0;
}
    double Add(double num1, double num2)
    {
        return num1 + num2;
    }
    double Min(double num1, double num2)
    {
        return num1 - num2;
    }
    double Mul(double num1, double num2)
    {
        return num1 * num2;
    }
    double Div(double num1,double num2)
    {
        return num1 / num2;
    }