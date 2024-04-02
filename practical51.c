#include <stdio.h>
#include <math.h>
int main() {
    float b, p, H;
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of p: ");
    scanf("%f", &p);
    H = sqrt(b * b + p);
    printf("The value of H is: %.2f\n", H);
    return 0;
}
