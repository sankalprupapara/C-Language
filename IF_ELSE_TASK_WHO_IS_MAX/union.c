#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    } 
    else
    {
        if(b>c)
        {
            if((b>d))
            {
                printf("b is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    }
	}
