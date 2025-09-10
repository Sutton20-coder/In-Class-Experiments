#include <stdio.h>



/*
&& - logical AND
|| - logical OR
! - logical NOT
Always include <stdbool.h> for boolean support.
*/

int main (void){
    int x = 0;
    scanf("%d", &x);

    if (x > 0 && x < 100 && x % 2 == 0){
        printf("%d\n", x);
    }





    return 0;
}