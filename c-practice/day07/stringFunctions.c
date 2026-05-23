#include <stdio.h>
#include <stdbool.h>
/* String Function that counts the number of characters in a string*/
int stringLength (const char array[])
{
    int count = 0;
while (array[count] != '\0')
    {
    count ++;
    }
    return count;
}
/* String Function that concatenate two character strings */
void concatenate (const char str1[], const char str2[], char result[])
{
    int count = 0;
    int i = 0;
    while(str1[count] != '\0')
    {
        result[count] = str1[count];
        count ++;
    }
    result [count] = ' ';
    count++;
    
    while (str2[i] != '\0')
    {
        result[count] = str2[i];
        count++;
        i++;
    }
    result[count] = '\0';
    
    }
/* Function that determines if two strings are equal */
bool stringEqual(const char array1[], const char array2[]){
     int count = 0;
    
     while (array1[count] != '\0')
     {
         
         if (array1[count] != array2[count])
             return false;
        count++;
     }
     return true;
                 
}
int main(){
    
    char str1[] = "Hello";
    char str2[] = "World";
    char result[50];
    
/* Testing the Function stringLength */
printf("The length of string1 is %d\n", stringLength(str1));
printf("The length of string2 is %d\n", stringLength(str2));

/* Testing the concatenate Function */
concatenate(str1, str2, result);
printf("The two strings concatenated together is %s\n", result);

/* Testing the Function That determines if Two strings are equal*/
if (stringEqual(str1, str2))
    printf("Strings are equal\n");
else
    printf("Strings are not equal\n");
    
    
return 0;
}
