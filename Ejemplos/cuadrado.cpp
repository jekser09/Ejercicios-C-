#include<stdio.h>
void funcion_cuadrado(int valor){
	int res=(valor*valor);
	printf("el cuadrado de %d es : %d",valor,res);
}
int main(){
	int numero;
	printf("ingrese un numero:");
	scanf("%d",&numero);
	funcion_cuadrado(numero);
	return 0;
}
