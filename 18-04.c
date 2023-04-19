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
    printf("------------------------------------------\n");
    printf("MONEY CONVERTER\n");
    printf("What currency would you like to convert to?\n(type 1 for DOLLARS or 2 for REAIS)\n");
    scanf("%lf", &crcy);
    printf("How much is the currency rate today?\n");
    scanf("%lf", &ccv);
    printf("How much do you want to convert?\n");
    scanf("%lf", &val);

    // Processing
    if (crcy == 1) {
        R = val;
        D = val*ccv;
    }
    else {
        D = val;
        R = val*ccv;
    }

    // Data output
    printf("------------------------------------------\n");
    if (crcy == 1) {
        printf("Reais --> Dollars\n");
        printf("Reais   : R$  %.2lf\n", R);
        printf("Dollars : US$ %.2lf\n", D);
    } else if (crcy == 2) {
        printf("Dollars --> Reais\n");
        printf("Dollars : US$ %.2lf\n", D);
        printf("Reais   : R$  %.2lf\n", R);
    }
    printf("------------------------------------------");
}