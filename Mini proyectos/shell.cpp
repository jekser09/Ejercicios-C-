#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
#include <cstdlib>
using namespace std; 
int main(){
	printf("Ernesto S.O [Version 1.0]\n");
	printf("Autores: Johand Esteban Castro Rodriguez - Anna Maria Sanchez Rojas\n");
	while(true){
		printf("Ernesto S.O>");
		string comando;
		cin>>comando;		
		if(comando=="listap"){
			system("TASKLIST");
		}else if(comando=="vso"){
			system("SYSTEMINFO");
		}else if(comando=="clw"){
			system("CLS");
		}else if(comando=="info"){
			printf("\nlistap: \tmuestra todos los procesos en ejecucion.\n");
			printf("vso: \t\tmuestra la informacion del S.O.\n");
			printf("clw: \t\tlimpia la ventana.\n");
			printf("datebios: \tFecha de la bios.\n");
			printf("ip: \t\tmuestra la informacion de conexion del dispositivo.\n");
			printf("stopProcess: \ttermina un proceso.\n");
			printf("salir: \t\tsale del programa.\n");
		}else if(comando=="datebios"){
			printf("En desarrollo");			
		}else if(comando=="ip"){
			system("ipconfig");
		}else if(comando=="stopProcess"){
			string file;
			printf("Nombre del proceso: ");
			cin>>file;			
			file="taskkill /t /f /im "+file;		
			system(file.c_str());
		}else if(comando=="salir"){
			break;
		}else{
			printf("Este comando no existe\n");
		}
	}
	return 0;
}
