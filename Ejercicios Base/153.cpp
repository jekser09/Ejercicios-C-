#include<stdio.h>
int main(){
	int CLAVE=15,vec[3][4]={{16,14,89,10},
							{25,113,45,23},
							{18,15,115,34}};
							
	
	for(int i=0; i<3;i++){
		printf("intento N:%d",i+1);
		for(int j=0;j<4;j++){
			if(vec[i][j]==CLAVE){
				printf("clave encontrada: %d\n",vec[i][j]);
				break;
			}else{
				printf("-buscando por favor espere-\n");
			}
		}
	}
	return 0;
}
