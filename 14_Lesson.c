#include <stdio.h> 
#include <math.h>
/*#include <unisd.h>*/


/*void printTriangleTopLeft(int n);
void printTriangleBottomLeft(int n);*/

int main (void){
    int i = 1;
    while(i <= 5){
        int j = 1;
        while(j <= 5){
            printf("%d %d\n", i, j);
            j++;
        }
        i++;
    }




    for (int i = 1; i < 5; i++){
        int j = 0;
        while(j < i){
            printf("%d ", j);
            j++;
        }
    }




    /*int n = 0;

    do{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);


    printTriangle();*/


    return 0; 
}





/*void printTriangleTopLeft(int n){
    for (int i = 0; i < n; i++){
        for (int j =0; j < n - i; j++){
            printf("%c", '*');
        }
        puts("");
    } 
}





void printTriangleBottomLeft(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){

        }
    }
}*/