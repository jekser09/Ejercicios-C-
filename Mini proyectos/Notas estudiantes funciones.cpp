#include <stdio.h>
void defEst(float ne[][4],int f);
float promNotas(float ne[][4],int f);
void MP_PP(float Definitiva2[], int f);
void MN_PN(float ne[][4], int f);
float Def3(float Definitiva2[],int f);
int main(){
	float nest[3][4];
	int i;
	printf("Digite las notas de los estudiantes \n");
	for(i=0;i<3;i++){
		printf("notas estudiante %d",i+1);
		printf("\n");
		for(int j=0;j<4;j++){			
			int val=1;
			while(val==1){
				printf("Nota %d|",j+1);		
				scanf("%f",&nest[i][j]);
				if(nest[i][j]<0 || nest[i][j]>5.0){				
					printf("las notas van de 0.0 a 5.0, por favor vuelva a digitar la nota \n");
				}
				else{
					val=2;				
				}
			}		
		}						
	}
	printf("---Definitivas de los estudiantes--- \n");	
	defEst(nest,i);
	printf("--Promedio de Notas--\n");
	promNotas(nest,i);
	printf("--Mejor y Peor Nota--\n");
	MN_PN(nest,i);
	return 0;
}
void defEst(float ne[][4],int f){
	float Definitiva[4]={0,0,0,0};
	int i;
	for(i=0;i<f;i++){	
		for(int j=0;j<4;j++){
			//definitiva estudiantes
			if(j<=1){			
				Definitiva[i]=ne[i][j]*0.2+Definitiva[i];				
			}
			else{
				Definitiva[i]=ne[i][j]*0.3+Definitiva[i];				
			}
			//______________________________			
		}
		printf("definitiva estudiante %d: %.2f \n",i+1,Definitiva[i]);
	}
	printf("--mejor y peor promedio--\n");
	MP_PP(Definitiva,i);
	printf("Cantidad de definitivas de 3|%.0f\n",Def3(Definitiva,i));
}
float Def3(float Definitiva2[],int f){
	int c=0;
	//Definitivas de 3
	for(int i=0;i<f;i++){
	/*NO SE POR QUE ESTE IF NO FUNCIONA
	FUNCIONA CON TODOS LOS OPERADORES LOGICOS EXCEPTO CON "=="
	Y TAMBIEN SOLO FUNCIONA CON NUMEROS DISTINTOS A 3.0*/
		if(Definitiva2[i]==3.0){
			c++;
		}
	}
	//_______________________
	return c;
}
float promNotas(float ne[][4],int f){
	float Prom[4]={0,0,0,0};
	for(int i=0;i<4;i++){
		for(int j=0;j<f;j++){			
			Prom[i]=Prom[i]+ne[j][i];				
		}		
		Prom[i]=Prom[i]/f;		
		printf("Promedio Nota %d| %.2f\n",i+1,Prom[i]);
	}
}
void MP_PP(float Definitiva2[], int f){
		float Mejor_Promedio=0,Peor_Promedio=5;
		int c=0,c2=0,i,j;	
		for(i=0;i<3;i++){	
			for(j=0;j<4;j++){
					//mejor promedio Y peor promedio
			if(Definitiva2[i]>Mejor_Promedio){
				Mejor_Promedio=Definitiva2[i];
				c=i+1;				
			}
			
			if(Definitiva2[i]<Peor_Promedio){
				Peor_Promedio=Definitiva2[i];
				c2=i+1;	
			}
			
			//__________________________________
			
		}		
	}
	printf("Mejor promedio es del estudiante %d| %.2f \n",c,Mejor_Promedio);
	printf("Mejor promedio es del estudiante %d| %.2f \n",c2,Peor_Promedio);
}
void MN_PN(float ne[][4], int f){
	float Mejor_Nota=0,Peor_Nota=5;
	int c=0,c2=0,c3=0,c4=0;
	for(int i=0;i<f;i++){
		for(int j=0;j<4;j++){
			
			if(ne[i][j]>=Mejor_Nota){
				Mejor_Nota=ne[i][j];
				c=i+1;
				c2=j+1;
			}
			if(ne[i][j]<=Peor_Nota){
				Peor_Nota=ne[i][j];
				c3=i+1;
				c4=j+1;
			}
		}
	}
	printf("Mejor nota| estudiante %d en la nota (%d): %.2f\n",c,c2,Mejor_Nota);
	printf("Peor nota| estudiante %d en la nota (%d): %.2f\n",c3,c4,Peor_Nota);
}


