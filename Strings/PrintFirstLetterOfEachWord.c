#include <stdio.h>
#include <string.h>
#include <ctype.h> // alphabets 1abc def
void printFirstLetterOfEachWord(char str[]){
    int i = 0;
    if(isalpha(str[i])){ // Check if first character is an alphabet or not
        printf("%c ", str[i]);
    }
    while (str[i] != '\0'){
        if(str[i] == ' ' && isalpha(str[i+1])){
            printf("%c ", str[i+1]);
        }
        i++;
    }
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    printf("The first letters of each word are:\n");
    printFirstLetterOfEachWord(str);
    return 0;
}
