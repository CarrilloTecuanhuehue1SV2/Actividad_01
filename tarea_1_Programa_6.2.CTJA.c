#include <stdio.h>
#include<conio.h>

int main(){

	printf("Division.\n");
	
	float a;
	float b;

	printf("Introducir Numerador: ");
	scanf("%f", &a);
	printf("Introducir Denominador:");
	scanf("%f", &b);
	
//Si la variable b no puede ser id´entica a cero, si lo es, debe de indicar error y no realizar la operacion.

if (b==0){
	
	printf("ERROR\n");
	printf("Denominador igual a cero");
	
}

else{
	printf("El resultado de la division es: %.2f", a/b);
	
}

}



