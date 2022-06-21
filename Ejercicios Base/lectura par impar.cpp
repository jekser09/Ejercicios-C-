#include<stdio.h>
#include<iostream>

int main(){
	int num,cl,cont=0,impar=0,par=0;
	printf("escriba 15 numeros por favor \n");
	while (cont<15){
		cont=cont+1;
		printf("(%d) \n",cont);
		scanf("%d",&num);
		cl=num%2;		
		if(cl==0){
			par=par+1;
			
		}else{
			if(cl==1){			
			impar=impar+1;
		 }
		}
	}
	printf("la cantidad de numeros pares es : %d \n \t",par);
	printf("la cantidad de numeros impares es : %d \t",impar);
	return 0;
}
