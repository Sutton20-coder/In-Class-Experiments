#include <stdio.h>

// For a non-void function, we have to return the function at the end of its body.



void printPrompt(void coeff);

int getCoeff(void);

int discriminant(int a, int b, int c);
void printRoots(int a, int b, int c);


int main (void) {

    printPrompt('a');
    int a = getCoeff();
    
    printPrompt('b');
    int b = getCoeff();

    printPrompt('c');
    int c = getCoeff();



    return 0;
}



void printPrompt(void coeff){
    printf("Enter the coefficient: %c", coeff);
    return printPrompt;
}



int getCoeff (void){
    int coeff;
    scanf("%d", &coeff);

    return coeff;
}


int discriminant(int a, int b, int c){
    return ((b*b) - (4*a*c));
}


int printRoots(int a , int b, int c){
    int calculation = discriminant(a, b, c);

    if (calculation < 0){
        puts("no real solution.");
    }

    else if (calculation == 0){
        printf("%d", (-b/(2*a)));
    }
    else if (calculation > 0){
        double x3 =  (-b + calculation) / (2 * a);
        double x2 = (-b - calculation) / (2 * a);
        printf("%lf, %lf", x3, x2);
    }
}