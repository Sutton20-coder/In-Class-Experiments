#include <stdio.h>



int main (void){
// scan an uppercase character

    char input;

    do{
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    printf("%c\n", input);


    // scan a positive integer

    int Input;

    do{
        printf("Enter a positive integer: ");
        scanf(" %d", &Input);
    } while (Input < 0);
    printf("%d\n", Input);


    
    for (int i = 15; i <= 45; i += 5){
        printf("%d\n", i);
    }


    for (int i = 100; i >=2; i -= 2){
        printf("%d\n", i);
    }

    // prints "Hi!" from 100 to 0, even numbers only
    for (int k = 0; k < 100; k++){
        puts("Hi!");
    }





    int option; 
    do{
        printf("Enter 1 or 2: ");
        scanf(" %d", &option); 
    } while(option != 2 || option != 1);
    printf("%d\n", option);




    return 0;
}