#include<stdio.h>
main(){
	int i,j,r,c;
	
	printf("ENTER NO. OF ROWS :- ");
	scanf("%d",&r);
	printf("ENTER NO. OF COLS :- ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] :- ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	int maxi = a[0][0];
	   	for(i=0;i<r;i++){
	   		for(j=0;j<c;j++){
	   			 if(a[i][j] > maxi) {
                maxi = a[i][j];
            }
		}
	}
	printf("The largest element is: %d\n", maxi);
}

