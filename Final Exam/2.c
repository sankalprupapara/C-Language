#include<stdio.h>
main(){
    int n,i,maxi;
   	printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    maxi=arr[0];
	 for(i=1;i<n;i++) {
        if (arr[i]>maxi) {
            maxi=arr[i];
        }
    }
	 printf("The largest element in the array is: %d\n",maxi);
}

