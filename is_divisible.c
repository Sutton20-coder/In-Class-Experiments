#include<stdio.h>
#include<stdbool.h>


bool is_divisible__both(int first, int second);

bool is_divisible_either(int first, int second);

bool is_divisible_neither(int first, int second);

bool is_correct_input(int first, int second);

int main (void){
    
    int x = 0;
    
    scanf("%d", &x);

    int y = 0;

    scanf("%d", &y);
    if (is_correct_input(x, y)){
        printf("%d\n", is_divisible__both(x, y));
    }
    else{
        puts("Incorrect input");
    }
    printf("%d\n", is_divisible__both(12, 6));
    printf("%d\n", is_divisible__both(12, 4));
    printf("%d\n", is_divisible__both(15, 5));



    return 0;
}



bool is_divisible__both(int first, int second){
    // One way to do it.
    /*if (first % second == 0 && first % (second - 3 == 0)){
        return true;

    }
    else {
        return false;
    }*/

    // Other way.
    return first % second == 0 && first % (second - 3) == 0;
}


bool is_correct_input(int first, int second){
    //return second != 0 && second != 3;
    // One way to do it.
    return !(second == 0 || second == 3);
}