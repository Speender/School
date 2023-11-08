#include <stdio.h>
#include <math.h>

void rightTriangle(double a, double b);

int main() {
    double sideA, sideB;
    printf("Enter the length of the side A of the right triangle: ");
    scanf("%lf", &sideA);
    NULL;
    printf("Enter the length of the side b of the right triangle: ");
    scanf("%lf", &sideB);
    rightTriangle(sideA, sideB);
    return 0;
}

void rightTriangle(double a, double b) {
    double hypotenuse, area;

    hypotenuse = sqrt(a * a) + (b * b); 
    area = 0.5 * (a * b);               
    printf("The length of the hypotenuse is: %.2lf\n", hypotenuse);
    printf("The area is equal to: %.2lf\n", area);
}
