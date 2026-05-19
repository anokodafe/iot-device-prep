/* Author: Anoko David */
/* Purpose: writing three functions in a single program */
/* Year: 2026 */

#include <stdlib.h>
#include <stdio.h>

/* Function to find the greatest common divisor of two non integer integers */
int gcd (int a, int b)
{
    int temp;
    while (b != 0)
    {
    temp = b;
    b = a % b;
    a = temp; 
    }
    return a;
}

/* Function to calculate the absolute value of a number */

float av (float a)
{
    if (a < 0)
        return -a;
        
        else
        return a;
}

/* Function to calculate the square root of a number */

float my_sqrt(float S)
{
    float guess = 2;
    float newguess;

    newguess = (guess + S / guess) / 2;

    while (guess - newguess > 0.0001)
    {
        guess = newguess;
        newguess = (guess + S / guess) / 2;
    }

    return newguess;
}



int main()              
{
    printf("%d\n", gcd(40, 20));
    printf("%.2f\n", av(-50));
    printf("%.2f\n", my_sqrt(40));
    return 0;
    
}