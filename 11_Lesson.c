#include <stdio.h>
#include <stdlib.h> // For srand, rand
#include <time.h> // For time function



void printNRandom();


int main (void){
    /*int c = 10;
    while (c < 30){
        printf("I love coding! ");
        c = c + 2;
    }*/




    srand(time(0));
    printNRandom(10);

    return 0;



}


void printNRandom(int n){
    int i = -5;
    while (i < n){
        printf("%d\n", rand() % (5 + 5 + 1) + -5);
        i = i+1;
    }
}



/*
[min, max]
    rand()% (max - min + 1) + min
*/

