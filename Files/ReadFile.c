#include <stdio.h>
int main() {
    FILE *fptr;
    char buffer[100];
    fptr = fopen
            ("C:\\Users\\Saurav\\CLionProjects\\BGS-SEM5-ISE\\Files\\bgs.txt",
             "r");
    if(fptr == NULL){
        printf("Error loading file.\n");
        return -1;
    } else{
        printf("Successfully loaded file.\n");
    }
    // fgets() fscanf()
    while (fgets(buffer, sizeof(buffer), fptr) != NULL){
        printf("%s", buffer);
    }
    fclose(fptr); // Mandatory
    return 0;
}
