#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// This program allows you to convert temperatures from F to C and vice versa.

void convertCtoF()
{
    int celsius;
    printf("Temperature in C: ");
    scanf("%d", &celsius);
    printf("\n");
    int fahrenheit = (celsius * ((double)9/5)) + 32; // Need to type cast the division expression.
    printf("Temperature in F: %d\n", fahrenheit);
}

void convertFtoC()
{
    int fahrenheit;
    printf("Temperature in F: ");
    scanf("%d", &fahrenheit);
    printf("\n");
    printf("%d\n", fahrenheit);
    printf("Temperature in C: %f\n", truncf((fahrenheit - 32) * ((double)5/9)));
}

int main()
{
    int selectedTemp;
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("What temperature scale do you want to convert (Enter 1 or 2): ");
    scanf("%d", &selectedTemp);
    printf("\n\n");

    if (selectedTemp == 1)
    {
        convertCtoF();
    }
    else {
        convertFtoC();
    }
    return 0;
}
