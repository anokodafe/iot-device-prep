#include <stdio.h>
#include <string.h>
 
int main(){

char userSentence[100];
int i = 0;
int count = 0;

printf("This program takes your sentence and counts how many words are in it.\n");
printf("\n---------------------------------------------------------------------------\n");
printf("Input your sentence:\n");

fgets(userSentence, sizeof(userSentence), stdin);
while (userSentence[i] != '\0')
{
    if (userSentence[i] == ' ')
    {
        count++;
    }
    i++;
}
printf("Word count: %d\n", count + 1);

return 0;
 }