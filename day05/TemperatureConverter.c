#include <stdio.h>
#include <stdlib.h>

/* Function that converts Celsius to Fahrenheit */
float celciusToFahrenheit (float c) {
    float result = (c * 1.80) + 32.00;
    return result;
}

/* Function that converts Fahrenheit to Celsius */
float fahrenheitToCelcius (float f){
    float result = (f -32.00) * (5.00/9.00);
    return result;
}

int main() {
    int pickConversion;       /* Stores the user's menu choice */
    float number = 0.00;      /* Stores the temperature input */

    /* Keep the program running until the user chooses to quit */
    while (1) {

        /* Display the conversion menu */
        printf("Pick conversion mode below ->\n"); 
        printf("Enter 1 to Convert Celcius to Fahrenheit\n"); 
        printf("Enter 2 to Convert Fahrenheit to Celcius \n");
        printf("Enter 0 to Quit\n");
        scanf("%d", &pickConversion);

        /* Exit the program if user enters 0 */
        if (pickConversion == 0) {
            printf("Goodbye!\n");
            break;
        }

        /* Convert Celsius to Fahrenheit */
        else if (pickConversion == 1) {
            printf("Input your Temperature in Celcius:\n");
            scanf("%f", &number);
            float convertedNumber = celciusToFahrenheit(number);
            printf("%.2f Fahrenheit\n", convertedNumber); 
        }

        /* Convert Fahrenheit to Celsius */
        else if (pickConversion == 2) {
            printf("Input your Temperature in Fahrenheit:\n");
            scanf("%f", &number);
            float convertedNumber = fahrenheitToCelcius(number);
            printf("%.2f Celcius\n", convertedNumber);
        }

        /* Handle invalid input */
        else printf("error\n");
    }

    return 0;
}