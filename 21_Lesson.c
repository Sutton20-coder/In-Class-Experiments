#include <stdio.h>





#define SIZE 10

void printArray(int *a, int size);


int main (void){

    int c[4];
    c[0] = -45;
    c[1] = 6;
    c[2] = 0;
    c[3] = 73;
    c[4] = 1543;


    int sum = c[0] + c[2];
    printf("%d\n", c[0] + c[2]);





    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[SIZE] = {167, 256, -233, -34, 4435, 6, 7, 8};

    printf("%p\n", a);


    printArray(a, SIZE); 


    printArray(b, SIZE);





    return 0;
}





void printArray(int *a, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    puts("");
}