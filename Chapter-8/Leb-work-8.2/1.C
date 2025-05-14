#include<stdio.h>
main(){
	int row,col,sum=0,i,j;
	float avg;
	
    printf("Enter no. of Rows :- ");
    scanf("%d",&row);
    printf("Enter no. of Cols :- ");
    scanf("%d",&col);
    int a[i][j];
    for(i=0;i<row;i++){
    	for (j=0;j<col;j++){
    		printf("a[%d][%d] :- ",i,j);
    		scanf("%d",&a[i][j]);
    		
    		sum=sum+a[i][j];
		}
	}
	avg = (float)sum/(i*j);
	
	printf("AVG :- %.2f",avg);
}
