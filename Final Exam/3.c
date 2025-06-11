#include<stdio.h>
void revString(char str[]);
main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str); 

    revString(str);

    printf("Reversed string: %s\n", str);

}
void revString(char str[]) {
    int i=0,j=0;
    char temp;
    while (str[j] !='\0') {
        j++;
    }
    j--;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
