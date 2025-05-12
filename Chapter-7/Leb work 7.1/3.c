#include<stdio.h>
main(){
	int i,j;
	                                            //  5                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
	for(i=5;i>=1;i--){                          //  4 4
		for(j=5;j>=i;j--){                      //  3 3 3
			printf(" %d",i);                    //  2 2 2 2
		}                                      //   1 1 1 1 1
		printf("\n");
	}
}  
