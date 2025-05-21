#include <stdio.h>
#include <string.h>

main() {
    char str[1000];
    int freq[1000] = {0};  
    int i;
    printf("Enter your string: "); 
    scanf("%s",&str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0 && ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))) {
            printf("%c :- %d\n", i, freq[i]);
        }
    }
}

