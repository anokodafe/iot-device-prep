#include <stdio.h>
#include <string.h>

int main(){
    
   /* declaring my strings */
   char myString[] = "My name is David";
   char temp[50]; 
   char mystring2[80] = "programming in c";
   char input[80];
   
   /* copying myString into temp safely using strncpy */
   strncpy(temp, myString, sizeof(temp) - 1);
   
   /* printing the length, a character at position 3, and the copied string */
   printf("The length of my string is: %zu\n", strlen(myString));
   printf("%c\n", myString[3]);
   printf("The string is: %s\n", temp);
   
   /* asking the user to enter a string to concatenate */
   printf("Enter string to be concatenated\n");
   scanf("%s", input);
   
   /* resetting mystring2 then using strcat to join the full input */
   strncpy(mystring2,"programming in c", sizeof(mystring2) -1 );
   strcat(mystring2, input);
   printf("The string programming in c concatenated with %s is: %s\n", input, mystring2);
   
   /* resetting mystring2 then using strncat to join only 2 characters from input */
   strncpy(mystring2,"programming in c", sizeof(mystring2) -1 );
   strncat(mystring2, input, 2);
   printf("The string programming in c concatenated with %s is: %s\n", input, mystring2);
   
   /* resetting mystring2 then using strncat safely with sizeof to avoid overflow */
   strncpy(mystring2,"programming in c", sizeof(mystring2) -1 );
   strncat(mystring2, input, sizeof(mystring2) - strlen(mystring2) - 1);
   printf("The string programming in c concatenated with %s is: %s\n", input, mystring2);
   
return 0;
}