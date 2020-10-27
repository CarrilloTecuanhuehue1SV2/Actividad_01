#include <stdio.h>

#include <math.h>

int main(){
	
	printf("Raices de una ecuancion cuadratica\n");
	
	printf("------------------------------\n");
	
	float a;
	float b;
	float c;
	float x1;
	float x2;
	
	
	printf("Introducir el valor de 'a'");
	scanf("%f", &a);
	printf("Introducir el valor de 'b'");
	scanf("%f", &b);
	printf("Introducir el valor de 'c'");
	scanf("%f", &c);
	
//formula de la chicharronera.
	
	x1=((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	printf(" X1 es: %f\n", x1);
	printf(" X2 es: %f\n", x2);
	
	if((-4*a*c)<0){
		printf("ERROR\n");
		printf("Discriminante negativo");
	}
	
		
}
	
	


	
	
	

