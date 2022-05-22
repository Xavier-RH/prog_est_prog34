/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022 
	Hacer un programa que calcule el area de un triangulo usando la formula de Heron, la cual usa las longitudes de sus lados
	por medio de una funcion que reciba como paramentro los 3 lados y regrese el area.
*/

#include <stdio.h>
#include <math.h>

float calcularArea(float a, float b, float c);

int main(){
	float x,y,z,a;
	printf("Introduce el primer lado del triangulo: ");
	scanf("%f",&x);
	printf("Introduce el segundo lado del triangulo: ");
	scanf("%f",&y);
	printf("Introduce el tercer lado del triangulo: ");
	scanf("%f",&z);
	
	a=calcularArea(x,y,z);
	printf("\nEl area es de %.2f",a);
	return 0;
}

float calcularArea(float a, float b, float c){
	float s, area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
