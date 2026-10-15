#include <stdio.h>

int main (){
    float r,t;
    float phi = 3.142857;
    
    scanf("%f %f", &r, &t);

    float Volume = phi * r * r * t;
    float Luas = 2 * phi * r * (r + t);
    float Keliling = 2 * phi * r;

    printf("Volume: %.2f\n", Volume);
    printf("Luas: %.2f\n", Luas);
    printf("Keliling: %.2f\n", Keliling);

    return 0;
}