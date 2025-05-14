#include<stdio.h>
main(){
	int row,col,sum=0,i,j;
	float avg;
	printf("***MATRIX-A***\n");
    printf("Enter no. of Rows :- ");
    scanf("%d",&row);
    printf("Enter no. of Cols :- ");
    scanf("%d",&col);
    
	int a[row][col],b[row][col];
    
	for(i=0;i<row;i++){
    	for (j=0;j<col;j++){
    		printf("a[%d][%d] :- ",i,j);
    		scanf("%d",&a[i][j]);
    	}
    }
    	printf("***MATRIX-B***\n");
    	for(i=0;i<row;i++){
    	for (j=0;j<col;j++){
    		printf("b[%d][%d] :- ",i,j);
    		scanf("%d",&b[i][j]);
	   }
 	for(i=0;i<row;i++){
    	for (j=0;j<col;j++){
    		sum=a[i][j]+b[i][j];
    		printf("array C :- %d ",sum);
    	}
    		
  }
  
}

}
