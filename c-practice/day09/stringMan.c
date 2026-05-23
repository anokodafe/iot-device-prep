#include <stdio.h>
#include <string.h>

int main(){
    
    char userString[50];
    
    printf("Enter your string:\n");
    scanf("%s", userString);
    
    int length = strlen(userString);
   
    int i = length - 1;

    while(i >= 0){
    
        printf("%c", userString[i]);
        i--;
}
    return 0;
    }
    
