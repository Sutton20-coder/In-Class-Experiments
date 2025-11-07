#include <stdio.h>







int main (void){
    // A pointer to a file structure.

    FILE *file = fopen("test.txt", "r");

    if (file == NULL){
        puts("The file cannot be opened!\n");
        return 1;
    }

int i;
while(!feof(file)){
    fscanf(file,"%d", &i);
    //Todo ignore /n
    printf("%d ", i);
}

fclose(file);




    return 0;
}