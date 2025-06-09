#include<stdio.h>
main() {
    char str[50];  
    char *ptr;      
    int length = 0;

    printf("Enter your words: ");
    fgets(str, sizeof(str), stdin);  
    ptr = str;

    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }
    printf("The length of a string is: %d\n", length);
}

