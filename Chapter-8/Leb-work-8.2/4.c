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

	printf("\n boundery line  matrix\n");	
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i == 0 || i == r-1 || j == 0 || j == c-1){
					printf("%d ",a[i][j]);
				}
		}
			
			printf("\n");
		}	
}
