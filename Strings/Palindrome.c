#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]){
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    while (start < end){
        if(tolower(str[start]) != tolower(str[end])){
            return 0; // false
        }
        start++;
        end--;
    }
    return 1; // true
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    if(isPalindrome(str)){
        printf("Palindrome.\n");
    }else{
        printf("Not Palindrome.\n");
    }
    return 0;
}
