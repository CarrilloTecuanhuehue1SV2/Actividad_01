#include <stdio.h>

int main(){
	
	printf("\t Numeros pares e impares.\n");
	
	printf("------------------------------\n");
	
int value, a;

	printf("Introducir un numero:");
	scanf("%d",&value);
	
a = value%2;

if(a==0){
	printf("El %d es un numero par:", value);
	}
if(a!=0){
	printf("El %d es un numero impar", value);
}

}
