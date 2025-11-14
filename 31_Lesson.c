#include <stdio.h>
#include <stdbool.h>





enum Options {
    OVERWRITE = 1, APPEND = 2, CANCEL = 3
};

int main(int argc, char *argv[]) {
    // Check the number of arguments
    if (argc != 3) {
        printf("Usage: %s infile outfile\n", argv[0]);
        return 1; // Error
    }

    // Open the input file
    FILE *in_file = fopen(argv[1], "r");
    if (in_file == NULL) {
        printf("Error: file %s could not be opened\n", argv[1]);
        return 1;
    }
    
    bool to_overwrite = false;
    bool to_append = false;
    bool to_cancel = false;
    // Open the output file for writing
    FILE *out_file = NULL;
    FILE *tmp_file = fopen(argv[2], "r");
    if (tmp_file != NULL) {
        printf("'%s' already exists. Do you want to overwrite (1)? \n", argv[2]);
        printf("1. Overwrite\n");
        printf("2. Append\n");
        printf("3. Cancel\n");
        int input;
        scanf("%d", &input);
        if (input == OVERWRITE) {
            to_overwrite = true;
        }
        else if (input == APPEND){
            to_append = true;
        }
        else {
            to_cancel = true;
        }
        fclose(tmp_file);
    }

    if (to_overwrite){
        out_file = fopen(argv[2], "w");
    }

    if (to_append){
        out_file = fopen(argv[2], "a");
    }

    if (!to_cancel){
        if (out_file == NULL){
            printf("Error: file %s could not be opened\n", argv[2]);
            return 1;
        }
    }

        
        // Read the characters from input and write into output
        char c = 0;
        while ((c = fgetc(in_file)) != EOF) { // Read a character from in_file
            fputc(c, out_file); // Write a character c into a file out_file
        }
    

    fclose(in_file);
    if (out_file != NULL) {
        fclose(out_file);

    }
    return 0;

}



