#include<stdio.h>
main(){
	//DEVLOP A PROGRAM FOR CONVERT DEGREE CELSIUS TO FHARENHEIT.
	float c;
	const float a=1.8;
	const int b=32;
	float f;
	printf("ENTER TEMPERTURE IN DEGHREE CELSIUS = ");
    scanf("%fl",&c);
    f= (a*c)+b;
    printf ("%fl",f);
}
