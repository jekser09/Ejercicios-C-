#include <stdio.h>
float resultado;
float sumar(float x, float y){
	resultado=x+y;
	return resultado;
}
int main(){
	float value1,value2;
	printf("ingresar primer valor");
	scanf("%f",&value1);
	printf("ingresar segundo valor");
	scanf("%f",&value2);
	resultado=sumar(value1,value2);
	printf("la suma es: %f",resultado);
}


