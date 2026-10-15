#include <stdio.h>

int main() {
    float a, b, c, d, e, f, hasil;
    if (scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) == 6) {
        hasil = (a - b) * (c / d) - (e + f);
        printf("%.3f\n", hasil);
    }
    return 0;
}