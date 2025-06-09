#include<stdio.h>
main() {
    FILE *eFile, *oFile;
    int i;
    
    eFile = fopen("even_file.txt", "w");
    oFile = fopen("odd_file.txt", "w");

    if (eFile == NULL || oFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(eFile, "%d, ", i);
        } else {
            fprintf(oFile, "%d, ", i);
        }
    }

    fclose(eFile);
    fclose(oFile);

    
    printf("Even numbers written to even_file.txt\n");
    printf("Odd numbers written to odd_file.txt\n");
}

