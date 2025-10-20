#include <stdio.h>
#include <stdbool.h>
#include "ctype.h"
#include <stdlib.h>

#define SIZE 100

#define STR_SIZE 1024

bool isUpper(char c);

bool isLower(char c);

bool isAlpha(char c); // True if the character is a letter upper or lower
bool isDigit(char c); // True if c is a digit [0,9]
bool isAlNum(char c); // True if the character is a letter or a digit

char toLower(char c);

char toUpper(char c);

int my_strlen(const char* str);

int main(void){

    char ch = 'V';

    //Create a boolean variable.

    const bool isStudentHappyInCOP2271AfterWeek10 = true; 


    ///////////////////////////////////////

    char str[SIZE] = "Hello"; // {H, e, l, l, o, '\0'}

    // Scan the string.

    //scanf("%s", str); // Scans until the first whitespace.

    fgets(str, SIZE - 1, stdin);

    /*char *str = get_string("Enter the string: "); TRY TO FIX */

    // Print the string.

    puts("Printing with printf");

    printf("%s\n\n", str); 
    printf("String size: %d\n", my_strlen(str));

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



    puts("Printing in reverse case");

    for (int i = 0; str[i] != '\0'; i++){
        if (isLower(str[i])){
            printf("%c", toUpper(str[i]));
        }
        else{
            printf("%c", toLower(str[i]));
        }
    }
    printf("\n\n");

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


bool isAlpha(char c){
    return isUpper(c) || isLower(c);
}

bool isDigit(char c){
    return (c >= '0' && c <= '9');
}

bool isAlNum(char c){
    return isAlpha(c) || isDigit(c);
}

char toLower(char c){
    if (isUpper(c)){
        return c + 32; // Returns uppercase ascii code.
    }
    else{
        return c;
    }
}

char toUpper(char c){
    if(isLower(c)){
        return c - 32;
    }
    else{
        return c;
    }
}

int my_strlen(const char* str){
    int i = 0;
    while(str[i] != '\0' && i < STR_SIZE){
        i++;
    }
    return i;
}

/*char* get_string(const char* prompt){
    printf("%s", prompt);
    char *str = (char*) malloc(sizeof(char) * STR_SIZE);

    char input;
    int i = 0;
    while (i < STR_SIZE - 1 && (input = getchar()) != '\n'){
        str[i] = input;
        i++;
    }
    // Add null character at the end.
    str[i] = '\0';
    return str;
} TRY TO FIX */