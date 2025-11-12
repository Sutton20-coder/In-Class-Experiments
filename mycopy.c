#include <stdio.h>




int main (int argc, char *argv[]){
    if(argc != 3){
        printf("Usage: %s infile outfile\n", argv[0]);
        return 1;
    }


    FILE *in_file = fopen(argv[1], "r");

    if (in_file == NULL){
        printf("Error: file %s could not be opened\n", argv[1]);
        return 1;
    }


    FILE *out_file = fopen(argv[2], "w");
    if(out_file == NULL){
        printf("Error: file %s could not be opened\n", argv[2]);
        return 1;
    }


    char c = 0;
    while((c = fgetc(in_file)) != EOF){
        fputc(c, out_file); 
    }



    fclose(in_file);
    fclose(out_file);







    return 0;
}