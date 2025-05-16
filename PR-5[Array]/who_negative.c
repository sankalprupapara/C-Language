#include<stdio.h>
main(){
	int i,n;
	
	printf("ENTER NO :- ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	   	for(i=0;i<n;i++){
			if(a[i]<0){
			printf("This element is negative :- %d\n",a[i] );
		}
	}
}

