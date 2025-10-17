#include <stdio.h>





int addOne(int n);

int addOneStatic(int n);

int main(void){
    int i = 0;
    while(i < 10){
        printf("Addone returns %d\n", addOne(i));
        i++;
    }
    puts("-------------------");
    i = 0;
    while(i < 10){
        printf("AddOneStatic returns %d\n", addOneStatic(i));
        i++;
    }






    return 0;
}






int addOne(int n){
    int result = 1;
    result += n;
    return result;
}



int addOneStatic(int n){
    static int result = 1;
    result += n;
    return result;
}