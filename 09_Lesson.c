// For double, use %lf
// For float, use %f
// Example: char c = 'a';, which uses %c

#include <stdio.h>

#include <math.h>


int main (void){
    char two = 'V';
    char published = 78;
    char homework = 'X';
    char already = 'Z';
    char was = 'H';

    printf("%c%c%c%c%c\n", homework, two, was, already, published);

    return 0;
}