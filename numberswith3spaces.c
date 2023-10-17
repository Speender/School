#include <stdio.h>
int main()
{
//local declerations
    short int value;
    short int firstvalue;
    short int secondvalue;
    short int thirdvalue;
    short int fourthvalue;
    short int fifthvalue;
//input statements
    printf("Enter a value that ranges 0 = 32767: ");
    scanf("%hd", &value);
//process
    firstvalue = value / 10000;
    secondvalue = value / 1000 % 10;
    thirdvalue = value / 100 % 10;
    fourthvalue = value / 10 % 10;
    fifthvalue = value % 10;
//output
    printf("%hd\t%hd\t%hd\t%hd\t%hd\n", firstvalue, secondvalue, thirdvalue, fourthvalue, fifthvalue);
    printf("%hd\t%hd\t%hd\t%hd\t\n", secondvalue, thirdvalue, fourthvalue, fifthvalue);
    printf("%hd\t%hd\t%hd\n", thirdvalue, fourthvalue, fifthvalue);
    printf("%hd\t%hd\n", fourthvalue, fifthvalue);
    printf("%hd", fifthvalue);




    return 0;
}