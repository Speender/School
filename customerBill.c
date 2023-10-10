#include <stdio.h>
int main(void){
//constant statements
    float tv = 400.00;
    float vcr = 220.00;
    float rc = 35.20;
    float cd = 300.00;
    float tr = 150.00;
    float a1, a2, a3, a4, a5, subtotal, tax, total;
//input
    int a, b , c, d, e;

//input statements
    printf("Enter the quantity of Television/s you want to purchase: ");
    scanf("%d", &a);
    printf("Enter the quantity of VCR/S you want to purchase: ");
    scanf("%d", &b);
     printf("Enter the quantity of Remote Controller/s you want to purchase: ");
    scanf("%d", &c);
     printf("Enter the quantity of CD Player/s you want to purchase: ");
    scanf("%d", &d);
     printf("Enter the quantity of Tape Recorder/s you want to purchase: ");
    scanf("%d", &e);
//process
     a1 = a * tv;
     a2 = b * vcr;
     a3 = c * rc;
     a4 = d * cd;
     a5 = e * tr;
     subtotal = a1 + a2 + a3 + a4 + a5;
     tax = subtotal * 0.0825;
     total = subtotal + tax;
//output statements
    printf("QTY\t\tDESCRIPTION\t\tUNIT PRICE\t\tTOTAL PRICE\n");
    printf("===\t\t===========\t\t==========\t\t===========\n");
    printf("%.2d\t\tTV/s\t\t\t%.2f\t\t\t%.2f\n", a, tv, a1);
    printf("%.2d\t\tVCR/s\t\t\t%.2f\t\t\t%.2f\n", b, vcr, a2);
    printf("%.2d\t\tREMOTE Controller/s\t%.2f\t\t\t%.2f\n", c, rc, a3);
    printf("%.2d\t\tCD PLAYER/s\t\t%.2f\t\t\t%.2f\n", d, cd, a4);
    printf("%.2d\t\tTAPE RECORDER/s\t\t%.2f\t\t\t%.2f\n", e, tr, a5);
    printf("===\t\t================\t==========\t\t==========\n");
    printf("\t\t\t\t\tSUBTOTAL:\t\t%.2f\n", subtotal);
    printf("\t\t\t\t\tTAX:\t\t\t%.2f\n", tax);
    printf("\t\t\t\t\tTOTAL:\t\t\t%.2f\n", total);

    return 0;
}