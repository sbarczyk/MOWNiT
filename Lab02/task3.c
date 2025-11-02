#include <stdio.h>

int main() {
    float x = 1e-32;

    printf("Liczba zmiennoprzecinkowa, cecha (exponent) i mantysa (fraction):\n");

    while (x > 0) {
        printf("x = %e\t", x);
        gsl_ieee_printf_float(&x);
        printf("\n");
        x /= 2.0;
    }

    return 0;
}