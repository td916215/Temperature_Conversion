#include <stdio.h>
#include <stdlib.h>

int main()
{
    // prompt user for celsius
    printf("Please enter degrees in Celsius: ");

    // accept user input and store in celsius variable
    float celsius;
    scanf("%f", &celsius);

    // perform temperature conversion
    float fahrenheit;
    fahrenheit = celsius * 9 / 5 + 32;

    printf("%.2f\n", fahrenheit);
    return 0;
}
