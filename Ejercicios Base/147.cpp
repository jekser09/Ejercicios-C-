#include<stdio.h>
int main(){
 int vec[5];
 printf("digite los 5 numeros que desea guardar \n");
 for (int i=0;i<5;i++){
  printf("---%d--- \n",i+1);
  scanf("%d",&vec[i]);
 }
 printf("------------------------- \n");
 for(int i=0;i<5;i++){
  printf("*valor guardado: [%d]\n",vec[i]); 
 } 
 return 0;
}
