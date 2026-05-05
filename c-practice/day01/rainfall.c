// Author: Anoko David Dafe
// This program uses 2 dimensional array to find rainfall amounts from the past 5 years 
// Year:2026
 
#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main(void){
    
float rainfall[YEARS][MONTHS] = {
    
    {2.5, 21.4, 31.4, 36.7, 24.8, 11.7, 13.6, 18.8, 14.6, 22.2, 19.3, 22.0},
    {3.5, 22.4, 41.4, 66.7, 23.8, 11.7, 14.6, 28.8, 54.6, 12.2, 14.5, 33.3},
    {4.5, 23.4, 51.4, 38.7, 22.8, 11.7, 15.6, 48.8, 44.6, 32.2, 34.4, 10.2},
    {5.5, 24.4, 61.4, 96.7, 12.8, 11.7, 16.6, 68.8, 24.6, 12.2, 42.3, 17.8},
    {6.5, 25.4, 71.4, 36.7, 20.8, 11.7, 17.6, 78.8, 34.6, 18.2, 16.2, 28.7}
};
    int y, m;
    float total = 0;
    float grand_total = 0;
    
    
    
    // calculating the total rainfall for each year 
   
    printf("YEAR\t RAINFALL(inches)\n");
    for (y = 0; y < YEARS; y++){
        total = 0;
    
      for(m = 0; m < MONTHS; m++)  {
          total += rainfall[y][m];
      }
      printf("%d\t %.2f\n\n", y + 2021 , total);
      grand_total += total;
    }
    
    // calculating the yearly average
    
    float yearly_average = grand_total / YEARS;
    printf ("The yearly average is %.2f inches\n\n", yearly_average);
    
    // calculating the monthly average
    
    float monthly_total;
    float monthly_avg;
    
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan\t Feb\t Mar\t Apr\t May\t Jun\t Jul\t Aug\t Sep\t Oct\t Nov\t Dec\t\n");

    
    for(m = 0; m < MONTHS; m++){
        monthly_total = 0;
        
        for(y = 0; y < YEARS; y++){
            
            monthly_total += rainfall[y][m];
        }  
        monthly_avg = monthly_total / YEARS;
        printf("%.2f\t", monthly_avg);
    }
        printf("\n");
    
    return 0;
    
}