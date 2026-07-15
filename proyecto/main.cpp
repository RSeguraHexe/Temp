#include<iostream>
#include<string>
#include<cstdlib>
#include"funciones.h"

int main(){
	
	int z=0; /*Aqui guardare el numero de operacion para los libros*/
	int x=0; /*Aqui guardare el numero de operacion para las personas*/
	int op=67; /*Aqui guardare la operacion elegida por el usuario*/
	
	while(op!=0){
		
		system("cls");
		
		menu();
		
		std::cout<<" Opcion: "; std::cin>>op;
		
		switch(op){
			
			case 1:{
				registrarlibro(z);
				break;
			}
		}
	}
	
	return 0; 
}