#include <stdio.h>


void printPyramidDigits(int n);

int main (void){



    int n = 0;
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);


    printPyramidDigits(n);
}




void printPyramidDigits(int n){
    for (int i = 0; i < n; i++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j >= i; j++){
                printf("%c", '*');
            }
            for (int j = 0; j <= i; j++){
                printf("%c", '*');
            }
        }
    }
}