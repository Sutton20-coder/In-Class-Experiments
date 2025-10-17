#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

bool isUpper(char c);

bool isLower(char c);

bool isAlpha(char c); // True if the character is a letter upper or lower
bool isDigit(char c); // True if c is a digit [0,9]
bool isAlNum(char c); // True if the character is a letter or a digit

int main(void){

    char ch = 'V';

    //Create a boolean variable.

    const bool isStudentHappyInCOP2271AfterWeek10 = true; 


    ///////////////////////////////////////

    char str[SIZE] = "Hello"; // {H, e, l, l, o, '\0'}

    // Scan the string.

    //scanf("%s", str); // Scans until the first whitespace.

    fgets(str, SIZE - 1, stdin);

    // Print the string.

    puts("Printing with printf");

    printf("%s\n\n", str); 

    puts("Printing with a loop");

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n\n");

    // Print only lowercase letters.
    
    puts("Printing with lowercase letters");

    for(int i = 0; str[i] != '\0'; i++){
        if(isLower(str[i])){
            printf("%c\n", str[i]);
        }
    }
    return 0;
}


bool isUpper(char c){
    if(c >= 'A' && c <= 'Z'){
        return true;
    }
    else{
        return false;
    }
}

bool isLower(char c){
    if(c >= 'a' && c <= 'z'){
        return true;
    }
    else{
        return false;
    }
}