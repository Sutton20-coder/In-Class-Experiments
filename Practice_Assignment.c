#include <stdio.h>

int i;
int j;

double sum(double arr[5][5]);


int main(void){
    double arr[5][5] = {
        (1, 2, 3, 4, 5),
        (6, 7, 8, 9, 10),
        (11, 12, 13, 14, 15),
        (16, 17, 18, 19, 20),
        (21, 22, 23, 24, 25)
    };

    arr[1][2] = 24;
    arr[3][3] = 43;

    double sum(double arr[5][5]);

    printf("%.1lf", sum(arr[5][5]));



    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%.1f", sum(arr[5][5]));
        }
    }


    printf("%.1lf", arr[5][5]);

    return 0;
}



double sum(double arr[5][5]){
    int Sum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            Sum += arr[i][j];
        }
    }
    return Sum;
    arr[5][5] = Sum - 350;
}