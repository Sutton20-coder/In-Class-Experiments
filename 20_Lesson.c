#include <stdio.h>


#define SIZE 100


int main (void){

    int a [SIZE];
    a [0] = 111;
    a [9] = 999;

    printf("First: %d; Last: %d\n", a [0], a [9]);


    for(int i = 0; i < 10; i++){
        a[i] = i * i;
    }

  /*  a [0] = 10; 
    a [1] = 20; 
    a [2] = 30; 
    a [3] = 40; 
    a [4] = 50; 
    a [5] = 60; 
    a [6] = 70; 
    a [7] = 80; 
    a [8] = 90; 
    a [9] = 100; */


    for (int i = 0; i < SIZE; i++){
        a[i] = (i + i) * 10;
    }

    int temp = 10;

    for (int i = 0; i < SIZE; i++){
        a[i] = temp;
        temp += 10;

    for (int i = 0; i < SIZE; i++){
        printf("%d ", a[i]);
    }
    puts("");


    return 0;
}
}