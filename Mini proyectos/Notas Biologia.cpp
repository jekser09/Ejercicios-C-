#include <stdio.h>
//menor promedio
void Promedio(float Bi[][3],int N, int M);
void MenorPromedio(float prom[5],int p);
int main (){
	float N_Biologia[5][3];
	int i=0,j=0;
	for(i=0;i<5;i++){
		printf("digite las notas del estudiantre %d\n",i+1);
		for(j=0;j<3;j++){
			int v=0;
			while(v==0){
				scanf("%f",&N_Biologia[i][j]);
			if(N_Biologia[i][j]<0 || N_Biologia[i][j]>5.0 ){
				printf("La nota minima es 0 y la maxima es 5 \n");				
				v=0;
			}else{				
				v=1;			
			}
						
		}
	}
}
Promedio(N_Biologia,i,j);
}
void Promedio(float Bi[][3], int N, int M){
	float promedio[5]={0,0,0,0,0};
	for(int f=0;f<N;f++){
		for(int c=0;c<M;c++){
			promedio[f]=promedio[f]+Bi[f][c];
		}
		promedio[f]=promedio[f]/N;
		printf("Estudiante %d promedio: %.2f\n",f+1,promedio[f]);
	}
	
	MenorPromedio(promedio,N);
}
void MenorPromedio(float prom[5],int p){
	float aux=5.0;
	for(int f=0;f<p;f++){
		if(prom[f]<aux){
			aux=prom[f];
		}
	}
	printf("el menor promedio es: %.2f\n",aux);
}
