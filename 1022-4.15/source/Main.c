#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 5000.0;
    int years = 15;
    double rate;
    int year;

    for (rate = 0.10; rate <= 0.1201; rate += 0.005) {
        printf("Interest Rate: %.1f%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (year = 1; year <= years; year++) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}