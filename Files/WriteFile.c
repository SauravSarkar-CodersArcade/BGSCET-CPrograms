#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen
            ("C:\\Users\\Saurav\\CLionProjects\\BGS-SEM5-ISE\\Files\\demo.txt",
             "a");
    if(fptr == NULL){
        printf("Error loading file.\n");
        return -1;
    } else{
        printf("Successfully loaded file.\n");
    }
    fprintf(fptr, "We are in ISE-Dept.\n");
    fclose(fptr);
    return 0;
}
