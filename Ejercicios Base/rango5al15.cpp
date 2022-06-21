#include <stdio.h>
#include <iostream>

int main(){
	int rango=5,sum=0;
	printf("rango: 5 al 15 \n");	
	while (rango<=15){
		sum=sum+rango;
		rango=rango+1;
	}
	 printf("la suma de estos numeros es: %d \t",sum);
	 return 0;
}
