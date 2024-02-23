#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // printf("Value of X1: %f", a);

    float d = sqrt(b * b - 4 * a * c);

    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);

    printf("Value of X1: %f", x1);
    printf("\nValue of X2: %f", x2);

    return 0;
}