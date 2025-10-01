#include <stdio.h>



int main (void){

    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j <= n; j++){
            printf("%d", j);
        } 
        puts("");
    } 



    for (int i = 0; i < n; i++){
        for (int j = n - i; j >= 1; j--){
            printf("%d", j);
        }
        puts("");
    }


    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n-i; j++){
            printf("%d", j);
        }
        puts("");
    }


    return 0;
}