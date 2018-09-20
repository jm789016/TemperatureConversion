#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Prompt user for Celsius.
    printf("Please enter degrees in Celsius: ");

    //Accept user input and store in Celsius variable.
    float celsius;
    scanf("%f", &celsius);

    //Perform temp conversion.
    float fahrenheit;

    fahrenheit = ( (celsius * 9) / 5 ) + 32;
    //Djsplay results to console.
    printf("%.2f F\n", fahrenheit);
    return 0;
}
