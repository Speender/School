/* #include <stdio.h>
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
   draft ni
*/

#include <stdio.h>

#define LABOR_RATE 0.35
#define TAX_RATE 0.085

double area(double num1, double num2);
double carpet(double area, double price);
double laborChargeValue(double area);
double priceValue(double carpetCharge, double laborCharge);
double discountTotalValue(double priceTotal, double discountRate);
double subTotalValue(double priceTotal, double discountTotal);
double taxTotalValue(double subtotal);
double totalValue(double tax, double subtotal);
double percentage(double discount, char symbol);

int main() {
    double length, width, compute, carpetCharge, laborCharge, priceTotal, discountTotal, subtotal, tax, total, discount_rate, price;
    char symbol;

    printf("Enter the length of the room: ");
    scanf("%lf", &length);
    printf("Enter the width of the room: ");
    scanf("%lf", &width);
    printf("Enter the price for carpet: ");
    scanf("%lf", &price);
    printf("Enter the discount rate and symbol '%%': ");
    scanf("%lf %c", &discount_rate, &symbol);

    double discount = percentage(discount_rate, symbol);
    compute = area(length, width);
    carpetCharge = carpet(compute, price);
    laborCharge = laborChargeValue(compute);
    priceTotal = priceValue(carpetCharge, laborCharge);
    discountTotal = discountTotalValue(priceTotal, discount);
    subtotal = subTotalValue(priceTotal, discountTotal);
    tax = taxTotalValue(subtotal);
    total = totalValue(tax, subtotal);

    printf("\t\t\tMEASUREMENT\n\n");
    printf("Length\t\t\t\t\t%.2lf ft\n", length);
    printf("Width\t\t\t\t\t%.2lf ft\n", width);
    printf("Area\t\t\t\t\t%.2lf square ft\n", compute);
    printf("\n\t\t\tCHARGES\n\n");
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2lf\t\t$%.2lf\n", compute, carpetCharge);
    printf("Labor\t\t\t%.2lf\t\t%.2lf\n", LABOR_RATE, laborCharge);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2lf\n", priceTotal);
    printf("Discount\t\t%.2lf%%\t\t%.2lf\n", discount_rate, discountTotal);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax\t\t\t\t\t%.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2lf\n", total);

    return 0;
}

double area(double num1, double num2) 
{
    return num1 * num2;
}

double carpet(double area, double price) 
{
    return area * price;  
}

double laborChargeValue(double area) 
{
    return area * LABOR_RATE;
}

double priceValue(double carpetCharge, double laborCharge)
 {
    return carpetCharge + laborCharge;
}

double discountTotalValue(double priceTotal, double discountRate) 
{
    return priceTotal * discountRate / 100;
}

double subTotalValue(double priceTotal, double discountTotal) 
{
    return priceTotal - discountTotal;
}

double taxTotalValue(double subtotal)
 {
    return subtotal * TAX_RATE;
}

double totalValue(double tax, double subtotal) 
{
    return subtotal + tax;
}

double percentage(double discount, char symbol) 
{
    if (symbol == '%') {
        return discount / 100.0;
    } else {
        return discount;
    }
}


//another type without char
#include <stdio.h>

#define LABOR_RATE 0.35
#define TAX_RATE 0.085

double area(double num1, double num2);
double carpet(double area, double price);
double laborChargeValue(double area);
double priceValue(double carpetCharge, double laborCharge);
double discountTotalValue(double priceTotal, double discountRate);
double subTotalValue(double priceTotal, double discountTotal);
double taxTotalValue(double subtotal);
double totalValue(double tax, double subtotal);
double percentage(double discount);

int main() {
    double length, width, compute, carpetCharge, laborCharge, priceTotal, discountTotal, subtotal, tax, total, discount_rate, price;

    printf("Enter the length of the room: ");
    scanf("%lf", &length);
    printf("Enter the width of the room: ");
    scanf("%lf", &width);
    printf("Enter the price for carpet: ");
    scanf("%lf", &price);
    printf("Enter the discount rate: ");
    scanf("%lf", &discount_rate);

    double discount = percentage(discount_rate);
    compute = area(length, width);
    carpetCharge = carpet(compute, price);
    laborCharge = laborChargeValue(compute);
    priceTotal = priceValue(carpetCharge, laborCharge);
    discountTotal = discountTotalValue(priceTotal, discount);
    subtotal = subTotalValue(priceTotal, discountTotal);
    tax = taxTotalValue(subtotal);
    total = totalValue(tax, subtotal);

    printf("\t\t\tMEASUREMENT\n\n");
    printf("Length\t\t\t\t\t%.2lf ft\n", length);
    printf("Width\t\t\t\t\t%.2lf ft\n", width);
    printf("Area\t\t\t\t\t%.2lf square ft\n", compute);
    printf("\n\t\t\tCHARGES\n\n");
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2lf\t\t$%.2lf\n", compute, carpetCharge);
    printf("Labor\t\t\t%.2lf\t\t%.2lf\n", LABOR_RATE, laborCharge);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2lf\n", priceTotal);
    printf("Discount\t\t%.2lf%%\t\t%.2lf\n", discount_rate, discountTotal);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax\t\t\t\t\t%.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2lf\n", total);

    return 0;
}

double area(double num1, double num2) {
    return num1 * num2;
}

double carpet(double area, double price) {
    return area * price;  
}

double laborChargeValue(double area) {
    return area * LABOR_RATE;
}

double priceValue(double carpetCharge, double laborCharge) {
    return carpetCharge + laborCharge;
}

double discountTotalValue(double priceTotal, double discountRate) {
    return priceTotal * discountRate / 100;
}

double subTotalValue(double priceTotal, double discountTotal) {
    return priceTotal - discountTotal;
}

double taxTotalValue(double subtotal) {
    return subtotal * TAX_RATE;
}

double totalValue(double tax, double subtotal) {
    return subtotal + tax;
}

double percentage(double discount) {
    return discount / 100.0;
}


