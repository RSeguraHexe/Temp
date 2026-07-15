#include<iostream>;
#include<cstdlib>
#include<string>
#include"funciones.h"

persona p[670];
libro l[670];

void menu(){
	std::cout<<"================================================\n";
	std::cout<<" Eliga una opcion!\n";
	std::cout<<"================================================\n";
	std::cout<<" 1 - Registrar ingreso de un nuevo libro\n";
	std::cout<<" 2 - Mostrar libros registrados\n";
	std::cout<<" 3 - Buscar libro\n\n";
	
	std::cout<<" 4 - Registrar usuario\n";
	std::cout<<" 5 - Mostrar usuarios registrados\n";
	std::cout<<" 6 - Buscar usuarios por codigo de estudiante\n\n";
	
	std::cout<<" 0 - Salir\n";
	std::cout<<"================================================\n";
};



bool registrarlibro(int a){
	
	std::string tempautor; /*Aqui guardare temporalmente le nombre del libro hasta la confirmacion*/
	std::string tempnombrelibro; /*Aqui guardare temporalmente le nombre del autor hasta la confirmacion*/
	int aniotemp; /*Aqui guardare temporalmente el anio*/
	char confirmacion; /*Aqui guardare la confirmacion de la accion de registrar el libro*/
	
	std::cin.ignore();
	
	std::cout<<"================================================\n";
	std::cout<<" Registrando...\n";
	std::cout<<"================================================\n";
	std::cout<<" Nombre del libro: "; std::getline(std::cin, tempnombrelibro);
	std::cout<<" Nombre del autor: "; std::getline(std::cin, tempautor);
	std::cout<<" Año de publicacion: "; std::cin>>aniotemp;
	std::cout<<"================================================\n";
	std::cout<<" Confirmar accion [S/N]: "; std::cin>>confirmacion;
	
	if(confirmacion=='S' || confirmacion=='s'){
		l[a].autor = tempautor;
		l[a].nombrelibro = tempnombrelibro;
		l[a].anio = aniotemp;
		l[a].id = a;
		l[a].prestado = 'N';
		
		return true;
	}
	return false;
}



void listalibros(int a){
	std::cout<<"================================================\n";
	for (int i=0;i<a;i++){
		std::cout<<"Libro ["<<i+1<<"]\n\n";
			
		std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
		std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
		std::cout<<" ID: "<<l[i].id<<std::endl;
		std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
		std::cout<<" Prestado?: "<<l[i].prestado;
		std::cout<<"================================================\n";
	}
	system("pause");
}



void buscarlibro(int a){
	
	int operacion=67;
	do{
		system("cls");
		
		std::cout<<"================================================\n";
		std::cout<<" Buscar Libro por...\n";
		std::cout<<"================================================\n";
		std::cout<<" 1 - Nombre del Libro\n";
		std::cout<<" 2 - Autor del Libro\n";
		std::cout<<" 3 - ID del Libro\n";
		std::cout<<" 4 - Libros Disponibles\n";
		std::cout<<" 5 - Libros Prestados\n\n";
		
		std::cout<<" 0 - Volver al Menu Principal\n";
		std::cout<<"================================================\n";
		std::cout<<" Operacion: "; std::cin>>operacion;
		
		switch(operacion){
			
			case 1:{
				system("cls");
				
				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempnombrelibro; /*Aqui guardare temporalmente le nombre de mi libro*/
				
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Nombre del Libro\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el nombre del libro:\n"; std::getline(std::cin, tempnombrelibro);
				std::cout<<"================================================\n";
				
				for(int i=0; i<a; i++){
					if(l[i].nombrelibro==tempnombrelibro){
						std::cout<<"Libro ["<<i+1<<"]\n\n";
			
						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado;
						std::cout<<"================================================\n";
						
						confirmacion=confirmacion+1;
					}
				}
				
				if(confirmacion==1){
					
					system("pause");
					
				}else if(confirmacion==0){
					
					std::cout<<"No se a encontrado el libro\n\n";
					
					system("pause");
				}
				
				break;
			}
			
			case 2:{
				system("cls");
				
				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempautor; /*Aqui guardare temporalmente le nombre de mi autor*/
				
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Autor del Libro\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el Autor:\n"; std::getline(std::cin, tempautor);
				std::cout<<"================================================\n";
				
				for(int i=0; i<a; i++){
					if(l[i].autor==tempautor){
						std::cout<<"Libro ["<<i+1<<"]\n\n";
			
						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado;
						std::cout<<"================================================\n";
						
						confirmacion=confirmacion+1;
					}
				}
				
				if(confirmacion==1){
					
					system("pause");
					
				}else if(confirmacion==0){
					
					std::cout<<"No se a encontrado el libro\n\n";
					
					system("pause");
				}
				
				break;
			}
			
			case 3:{
				system("cls");
				
				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				int tempid; /*Aqui guardare temporalmente la id del libro*/
				
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por ID\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el ID del libro:"; std::cin>>tempid;
				std::cout<<"================================================\n";
				
				for(int i=0; i<a; i++){
					if(l[i].id==tempid){
						std::cout<<"Libro ["<<i+1<<"]\n\n";
			
						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado;
						std::cout<<"================================================\n";
						
						confirmacion=confirmacion+1;
					}
				}
				
				if(confirmacion==1){
					
					system("pause");
					
				}else if(confirmacion==0){
					
					std::cout<<"No se a encontrado el libro\n\n";
					
					system("pause");
				}
				
				break;
			}
			
			case 4:{
				system("cls");
				
				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				
				std::cout<<"================================================\n";
				std::cout<<" Mostrando Libros Disponibles\n";
				std::cout<<"================================================\n";
				
				for(int i=0; i<a; i++){
					if(l[i].prestado=='N'){
						std::cout<<"Libro ["<<i+1<<"]\n\n";
			
						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado;
						std::cout<<"================================================\n";
						
						confirmacion=confirmacion+1;
					}
				}
				
				if(confirmacion!=0){
					
					system("pause");
					
				}else if(confirmacion==0){
					
					std::cout<<"Todos los libros estan prestados\n\n";
					
					system("pause");
				}
				
				break;
			}
			
			case 5:{
				system("cls");
				
				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				
				std::cout<<"================================================\n";
				std::cout<<" Mostrando Libros No Disponibles\n";
				std::cout<<"================================================\n";
				
				for(int i=0; i<a; i++){
					if(l[i].prestado=='S'){
						std::cout<<"Libro ["<<i+1<<"]\n\n";
			
						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado;
						std::cout<<"================================================\n";
						
						confirmacion=confirmacion+1;
					}
				}
				
				if(confirmacion!=0){
					
					system("pause");
					
				}else if(confirmacion==0){
					
					std::cout<<"Todos los libros estan disponibles\n\n";
					
					system("pause");
				}
				
				break;
			}
			
			case 0:{
				break;
			}
		}
	}while(operacion!=0);
}