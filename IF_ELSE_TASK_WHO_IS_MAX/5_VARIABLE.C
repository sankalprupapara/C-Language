#include<stdio.h>
main(){

	int a,b,c,d,e;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
	printf("Enter value of E = ");
	scanf("%d",&e);
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					printf("A IS BIG");
				}else{
					printf("E IS BIG");
				}
			}else{
				if(d>e){
					printf("D IS BIG");
				}else{
					printf("E IS BIG");
				}
			}
		}else{
			if(c>d){
				if(c>e){
					printf("C IS BIG");
				}else{
					printf("D IS BIG");
				}
			}else{
				if(d>e){
					printf("D IS BIG");
				}else{
					printf("E IS BIG");
				}
			}
		}
	}else{
		if(b>c){
			if(b>d){
				if(b>e){
					printf("B IS BIG");
				}else{
					printf("E IS BIG");
				}
			}else{
				if(d>e){
					printf("D IS BIG");
				}else{
					printf("E IS BIG");
			}
		}
	}else{
		if(c>d){
			if(c>e){
				printf("C IS BIG");
			}else{
				printf("E IS BIG");
			}

		}else{
			if(d>e){
				printf("D IS BIG");
			}else{
				printf("E IS BIG");
			}
		}
    }
}
}
