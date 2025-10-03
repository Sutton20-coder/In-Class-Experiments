#include <stdio.h>



int main (void){
    int luck = 10;



    printf("Luck is %d\n", luck);
    luck += 5;


    printf("The address of luck is %p\n", &luck);



    // Create a pointer variable (variable that stores an address).

    // Specify <data type> pointer_name;

    int *luckPtr;

    // Null pointer.

    luckPtr = NULL;

    // assign the address of the variable.

    luckPtr = &luck;

    printf("Dereference luckPtr %d\n", *luckPtr);  

    // Create a pointer pointing to it

    double score = 15.3;

    double *score_ptr = &score;

    // Modify the score through the pointer.

    *score_ptr = 20.9;

    printf("%lf", *score_ptr);

    // * is what dereferences the variable.
    // Just use &score_ptr to get address as an example.



    double *pF;

    double number1 = 15.3;

    pF = &number1;

    printf("%lf", *pF);

    printf("%p", &number1);

    printf("%p", pF);

    double number2 = 12.4;

    *pF = number2;

    printf("%lf", *pF);

    *pF *= 2;

    

    return 0;
}