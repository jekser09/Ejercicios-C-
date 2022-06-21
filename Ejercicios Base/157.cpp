#include<stdio.h>
int main(){
	int i;
	int COMPUTADORAS[9]={3545,7852,444,330,178,89,36,45,10};
	int ALGORITMOS[9]={687,12,444,986,112,36,89,14,74};
	int PERDEDORES[9];
	for (i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(COMPUTADORAS[i]==ALGORITMOS[j]){
				PERDEDORES[i]=COMPUTADORAS[i];
				printf("el estudiante. %d perdio 2 materias\n",PERDEDORES[i]);
			}
		}
	}
return 0;
}
