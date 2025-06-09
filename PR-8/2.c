#include<stdio.h>
void cube(int *ptr, int size) {
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            int value = *(ptr + i * size + j);
            printf("%d\t", value * value * value);
        }
        printf("\n");
    }
}
int main() {
    int size, i, j;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];

    printf("\nEnter array elements:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    cube(&a[0][0], size);
}

