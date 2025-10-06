#include <stdio.h>


int splitDigits(int a, int *tens_ptr, int *ones_ptr);






int main (void){
    int a = 15;
    puts("Enter a number");
    scanf("%d", &a);

    int tens = 0;
    int ones = 0;
    if (splitDigits(a, &tens, &ones) == 0){
        printf("Tens is %d, ones is %d\n", tens, ones);
    }


    return 0;
}


int splitDigits(int a, int *tens_ptr, int *ones_ptr){
    if (a < 10 || a > 99){
        puts("Not a two digit number.");
        return 0;
    }
    *tens_ptr = a / 10;

    *ones_ptr = a % 10;

    return 0; // Success.
}