#include<stdio.h>
int main(){
	int N,par=0,impar=0;
	printf("¿cuantos datos desea ingresar?\n");
	int vec[scanf("%d",&N)];
	printf("escriba los datos\n");
	for(int i=0;i<N;i++){
		printf("---%d---\n",i+1);
		scanf("%d",&vec[i]);
		if(vec[i]%2==0){
			par=par+vec[i];
		}else{
			impar=impar+vec[i];
		}		
	}
	printf("la suma de los pares es: %d\n",par);
	printf("la suma de los impares es: %d\n",impar);
}
