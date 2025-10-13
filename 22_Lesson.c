#include <stdio.h>



#define SIZE 10



// Return the index of the first zero element in the array.
// Return -1 if there are no zeros.

int firstZero(int *arr, int size);

int lastZero(int *arr, int size);

int nthZero(int *arr, int size, int n);


int main(void){
    int my_array[SIZE] = {8, 0, 3, 0, 45, -4};

    int index;

    if((index = firstZero(my_array, SIZE)) < 0){
        puts("There are no zeros.");
    }
    else{
        printf("The first zero is at index %d\n", index);
    }


    if((index = lastZero(my_array, SIZE)) < 0){
        puts("There are no zeros.");
    }
    else{
        printf("The last zero is at index %d\n", index);
    }

    /*int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    if((index = nthZero(my_array, SIZE)) < 0){
        puts("There are less than %d zeros\n", n);
    }
    else{
        printf("The %d zero is at index %d\n", n, index);
    } */


    return 0;
}






int firstZero(int *arr, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            return i;
        }

    }
    return -1;
}

int lastZero(int *arr, int size){
    for(int i = size - 1; i >= 0; i--){
        if (arr[i] == 0){
            return i;
        }
    }
    return -1;
}

/*int nthZero(int *arr, int size, int n){
    int count_zeros = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] == 0){
            count_zeros++;
        }
        if(count_zeros == n){
            return i;
        }
    }
    return -1;
}
    */