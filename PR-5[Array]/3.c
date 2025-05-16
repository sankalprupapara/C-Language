#include<stdio.h>
main(){
	int i,j,r,c;
	
	printf("ENTER NO. OF ROWS :- ");
	scanf("%d",&r);
	printf("ENTER NO. OF COLS :- ");
	scanf("%d",&c);
	
	int a[r][c];
	
	
	printf("\n A matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] :-",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n Transpose matrix\n");	
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ",a[j][i]);
				 
			}
			printf("\n");
			
	}	
		
		
}
