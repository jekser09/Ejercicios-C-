#include <stdio.h>

int main(){
	float N=0;
	int nota3=0,aprobados=0,reprobados=0,i;	
	
	    printf("digite la cantidad de notas a ingresar: \n");
	
	float Notas[scanf("%f",&N)];
	for(i=0;i<N;i++)
	{	
		printf("escriba la nota del estudiante %d: \n",i);
				scanf("%f",&Notas[i]);
		
	
     if(Notas[i] >= 3.0){
        	int aprobados=aprobados+1;
        }else{
        	if(Notas[i] == 3.0){
        		nota3=nota3+1;
			}else{
				int reprobados=reprobados+1;
			}
		}
    
	}
		for(int c=1;i<N;c++){
			printf("valor de Notas %d \n",i);
		
	}
   
	printf("aprobados: %f \n",aprobados);
	printf("nota 3: %f \n",aprobados);
	printf("reprobados: %f \n",aprobados);
}
