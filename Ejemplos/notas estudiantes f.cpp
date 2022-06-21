#include<stdio.h>

float est[15][4],defi[15]={0,0,0,0,0,0,0,0,0,0,0,0},prom[4],aux=0,mej=0,peo=5,mejN=0,peoN=5;
	int c=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,ii=0,jj=0;
//---------------------------------
void nest (int i,int j){
		for(int i=0;i<3;i++){
		printf("notas estudiante %d",i+1);
		printf("\n");
		for(int j=0;j<4;j++){			
			int val=1;
			while(val==1){
			printf("Nota %d|",j+1);		
			scanf("%f",&est[i][j]);
				if(est[i][j]<0 || est[i][j]>5.0){				
				printf("las notas van de 0.0 a 5.0, por favor vuelva a digitar la nota \n");
				}else{
				val=2;
				}
			}
		}
		printf("\n");
	}
	
}

//---------------------------------

int main(){
	
	printf("ingrese las notas de sus estudiantes");
	printf("\n");
	/* ----Funcion de las variables, vectores, y matrices-----------------
	   matris est[][]= notas de los estudiantes
	   vector defi[]=definitiva por estudiante
	   prom[]=promedio por nota
	   mej=mejor promedio
	   peo=peor promedio
	   mejN=mejor nota
	   peoN=peor nota
	   c hasta c7=las posiciones de las notas y los promedios
	   aux=auxiliar	   
	*/
	
	//captura de notas
	
	nest(ii,jj);
	//---------------------------------------------------------
	//definitiva de los estudiantes
	printf("---Definitivas de los estudiantes--- \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(j<=1){			
			defi[i]=est[i][j]*0.2+defi[i];
			}else{
			defi[i]=est[i][j]*0.3+defi[i];
			}			
		}
		printf("|definitiva estudiante %d| %.2f \n",i+1,defi[i]);
	}	
	//----------------------------------------------
	//promedio de las Notas
	printf("---Promedio por nota--- \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			prom[i]=prom[i]+est[j][i];
		}
		prom[i]=prom[i]/15;		
		printf("Promedio Nota %d| %.2f \n",i+1,prom[i]);
	}
	//-------------------------------------------
	//mejor y peor promedio, mejor y peor nota, definitivas de 3
	printf("---Mejor y peor promedio -|- Mejor y peor nota -|- cantidad de definitivas de 3.0--- \n");
	for(int i=0;i<3;i++){	
		for(int j=0;j<4;j++){
			//definitivas de 3
			if(defi[i]==3.0){
				c7++;
			}
			//-----------------------------
			//mejor promedio Y peor promedio
			if(defi[i]>defi[j]){
			aux=defi[i];
				if(aux>mej){
				mej=defi[i];
				c=i+1;
				
				}
			}else{
				if(defi[i]<defi[j]){
					aux=defi[i];
					if(aux<peo){
					peo=defi[i];
					c2=i+1;	
					}
				}
			}
		}
		//-----------------------------
		//mejor nota y peor nota
		for(int l=0;l<15;l++){
			for(int j=0;j<4;j++){
				if(est[l][j]>est[i][j]){
					aux=est[l][j];
					if(aux>mejN){
					mejN=est[l][j];
					c3=l+1;
					c4=j+1;
					}
				if(est[i][j]<est[l][j]){
					aux=est[i][j];
					if(aux<peoN){
					peoN=est[i][j];
					c5=i+1;
					c6=j+1;
					}
				}
					
				}
			}
		}
		//-------------------------------------
	}
	printf("Mejor promedio| estudiante %d: %.2f \n",c,mej);
	printf("peor promedio| estudiante %d: %.2f \n",c2,peo);
	printf("Mejor nota| estudiante %d en la nota (%d): %.2f\n",c3,c4,mejN);
	printf("Peor nota| estudiante %d en la nota (%d): %.2f\n",c5,c6,peoN);
	printf("Cantidad de notas de 3.0: %d\n",c7);
	//--------------------------------------------------------------
	return 0;
}

