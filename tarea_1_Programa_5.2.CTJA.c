#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141592

int main(){
	
	printf("\t Perimetro y Area de una Circunferencia.\n");
	
	printf("------------------------------\n");
	
	float r, area, perimetro;
	
	printf("Introducir el volor del radio de la circunferencia:");
	scanf("%f", &r);
	
// Formula para el Area.

	area = (pow(r,2));
	
//Formula para el perimetro.

	perimetro = 2 * PI	* r;
	
	printf("Valor del Area de la Circunferencia: %.2f\n", area);
	printf("Vlor del Perimetro de la Circunferencia: %.2f", perimetro);
	
		
}
