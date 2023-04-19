// Currency converter in C -  US$ and BRL

#include <stdio.h>
#include <math.h>

int main() {
    // Variable declaration
    double val; // Value variable
    double crcy; // Currency variable
    double ccv; // Current currency value variable
    double R; // Real variable
    double D; // Dollar variable

    // Data input
    printf("----------------------------------------------\n");
    printf("MONEY CONVERTER\n\n");
    printf("What currency would you like to convert?\n(type 1 for US$ or 2 for BRL)\n");
    scanf("%lf", &crcy); // (1 - US$  2- BRL)
    printf("How much is the currency rate today? (in dollars)\n");
    scanf("%lf", &ccv); // Currency rate
    printf("How much do you want to convert?\n");
    scanf("%lf", &val); // Amount of money to convert

    // Processing
    if (crcy == 1) {
        D = val;
        R = val*ccv; // Conversion BRL to US$
    }
    else {
        R = val;
        D = val/ccv; // Conversion US$ to BRL
    }

    // Data output
    printf("----------------------------------------------\n");
    if (crcy == 2) {
        printf("Reais --> Dollars\n\n");
        printf("Reais   : R$  %.2lf\n", R);
        printf("Dollars : US$ %.2lf*\n\n", D);
        printf("*Taxes are not included.\n");
    } else {
        if (crcy == 1) {
            printf("Dollars --> Reais\n\n");
            printf("Dollars : US$ %.2lf\n", D);
            printf("Reais   : R$  %.2lf*\n\n", R);
            printf("*Taxes are not included.\n");
        }
        else {
            printf("ERROR! Invalid values. Please try again.\n");
        }
    }
    printf("----------------------------------------------");
}
