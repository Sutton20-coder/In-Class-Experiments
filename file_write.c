#include <stdio.h>







int main (void){
    // A pointer to a file structure.

    FILE *file = fopen("test.txt", "w");

    if (file == NULL){
        puts("The file cannot be opened!\n");
        return 1;
    }

for (int i = 1; i <= 100; i++){
    fprintf(file, "%4d ", i);   // Writing into a file.
    if (i %10 == 0){
        fprintf(file, "%c", '\n');
    }
}

fclose(file);




    return 0;
}