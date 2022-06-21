#include<stdio.h>
int main(){	
	float aux=0,promed,vec[]={5,4,15,108,-3,-2,-23,66,73,100,18,6,9,14,-3};
	int i;

	for(i=0;i<15;i++){
		printf("dato %d: \t",i+1);
		printf("%.2f \n",vec[i]);
		aux=aux+vec[i];
	}
	promed=aux/i;	
	printf("la suma de los datos es: %.2f \n",aux); 	
	printf("el promedio es: %.2f",promed);
}
