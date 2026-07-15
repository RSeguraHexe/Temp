#include<iostream>;
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
	std::cout<<" 6 - Buscar usuarios por codigo de estudiante\n";
	std::cout<<"================================================\n";
};

void registrarlibro(int a){
	
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
		
		z=z+1;
	}