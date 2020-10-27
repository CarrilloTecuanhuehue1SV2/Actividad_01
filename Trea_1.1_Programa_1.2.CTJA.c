#include <stdio.h>

int main(){

	printf("El numero Mayor y el menro.\n");
	
	printf("------------------------------\n");
	
	float a;
	float b;
	
	printf("Introduce un numero: ");
	scanf("%f",&a);
	
	printf("Introduce un numero: ");
	scanf("%f",&b);
	
	if(a>b){
	printf("%.2f es el nuemro mayor.\n", a);
	printf("%.2f es el nuemro menor.\n", b);
	}
	
	printf("------------------------------\n");

	if(a<b){
	printf("%.2f es el numero menor.\n", a);
	printf("%.2f es el numero mayor.\n", b);
	}
}
