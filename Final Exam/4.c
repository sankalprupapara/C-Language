#include<stdio.h>
main(){
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int *ptr=arr; 

    printf("Squares of the elements:\n");
    for (i=0;i<n;i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    printf("\n");
}

