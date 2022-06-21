#include<stdio.h>
int main(){

  int Datos[4][4],i,j;
  
  for( i=0;i<4;i++){
  	for( j=0;j<4;j++){
  		if(i==j){
  			Datos[i][j]=1;
		  }else{
		  	Datos[i][j]=0;
		  }  		
		  printf("%d",Datos[i][j]);	 	 
	  }
  	 printf("\n ");
  }
  /*for( i=0;i<4;i++){
  	for( j=0;j<3;j++){
  		printf("%d",Datos[j][i]);  		
	  }
  	printf("\n");
  }*/

return 0;
}
