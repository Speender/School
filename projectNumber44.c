#include <stdio.h>
#define LABOR 0.35
#define TAX_Rate 0.85
#define DISCOUNT 0.20
double area (double num1, double num2);
int main()
{
    double length, width, compute, carpetCharge, laborCharge, priceTotal, discountTotal, subtotal, tax, total;
    printf("Enter the length of the room: ");
    scanf("%lf", &length);
    NULL;
    printf("Enter the width of the room: ");
    scanf("%lf", &width);
    compute = area(length, width);
    carpetCharge = compute * 5;
    laborCharge = LABOR * compute;
    priceTotal = carpetCharge + laborCharge;
    discountTotal = DISCOUNT * priceTotal;
    subtotal = priceTotal - discountTotal;
    tax = TAX_Rate * subtotal;
    total = tax + subtotal;


    printf("\t\t\tMEASUREMENT\n");
    NULL;
    printf("Lenth\t\t\t\t\t\t%.0lf ft\n", length);
    printf("Width\t\t\t\t\t\t%.0lf ft\n", width);
    printf("Aea\t\t\t\t\t\t%0.lf square ft\n", compute);
    NULL;
    NULL;
    printf("\t\t\tCHARGES\n");
    NULL;
    NULL;
    printf("DESCRIPTION\t\tCOST/SQ.FT.\t\tCHARGE\n");
    printf("-----------\t\t-----------\t\t-----------\n");
    printf("Carpet\t\t\t%.2lf\t\t\t$%.2lf\n", compute, carpetCharge);
    printf("Labor\t\t\t%lf\t\t%.2lf\n", LABOR, laborCharge);
    printf("\t\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t\t%.2lf\n", priceTotal);
    printf("Discount\t\t%.2lf%%\t\t\t%.2lf\n", DISCOUNT, discountTotal);
    printf("\t\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax\t\t\t\t\t\t%.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t\t$%.2lf", total);

    return 0;
}
    double area (double num1, double num2)
{
    double ans;
    ans = num1 * num2;
    return ans;
}
   
    