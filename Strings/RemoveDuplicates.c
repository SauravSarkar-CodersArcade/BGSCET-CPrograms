#include <stdio.h>
#include <string.h>
void removeDuplicates(char str[]){
    int index = 0;
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        int j;
        for (j = 0; j < i; ++j) {
            if(str[i] == str[j]){
                break;
            }
        }
        if(i == j){
            str[index++] = str[i];
        }
    }
    str[index] = '\0'; // Updating the end of the string
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    removeDuplicates(str);
    printf("The non-duplicate string is:\n%s", str);
    return 0;
}
