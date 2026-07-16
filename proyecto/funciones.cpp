#include<iostream>
#include<cstdlib>
#include<string>
#include"funciones.h"

persona p[670];
libro l[670];

void menu() {
	std::cout<<"================================================\n";
	std::cout<<"     Biblioteca!\n";
	std::cout<<"================================================\n";
	std::cout<<" 1 - Registrar ingreso de un nuevo libro\n";
	std::cout<<" 2 - Mostrar libros registrados\n";
	std::cout<<" 3 - Buscar libro\n\n";

	std::cout<<" 4 - Registrar usuario\n";
	std::cout<<" 5 - Mostrar usuarios registrados\n";
	std::cout<<" 6 - Buscar usuarios\n\n";

	std::cout<<" 7 - Prestar libro\n";

	std::cout<<" 0 - Salir\n";
	std::cout<<"================================================\n";
};



bool registrarlibro(int a) {

	std::string tempautor; /*Aqui guardare temporalmente le nombre del libro hasta la confirmacion*/
	std::string tempnombrelibro; /*Aqui guardare temporalmente le nombre del autor hasta la confirmacion*/
	int aniotemp; /*Aqui guardare temporalmente el anio*/
	char confirmacion; /*Aqui guardare la confirmacion de la accion de registrar el libro*/

	std::cin.ignore();

	std::cout<<"================================================\n";
	std::cout<<" Registrando...\n";
	std::cout<<"================================================\n";
	std::cout<<" Nombre del libro: ";
	std::getline(std::cin, tempnombrelibro);
	std::cout<<" Nombre del autor: ";
	std::getline(std::cin, tempautor);
	std::cout<<" Año de publicacion: ";
	std::cin>>aniotemp;
	std::cout<<"================================================\n";
	std::cout<<" Confirmar accion [S/N]: ";
	std::cin>>confirmacion;

	if(confirmacion=='S' || confirmacion=='s') {
		l[a].autor = tempautor;
		l[a].nombrelibro = tempnombrelibro;
		l[a].anio = aniotemp;
		l[a].id = a;
		l[a].prestado = 'N';

		return true;
	}
	return false;
}



void listalibros(int a) {
	std::cout<<"================================================\n";
	for (int i=0; i<a; i++) {
		std::cout<<"Libro ["<<i+1<<"]\n\n";

		std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
		std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
		std::cout<<" ID: "<<l[i].id<<std::endl;
		std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
		std::cout<<" Prestado?: "<<l[i].prestado<<std::endl;
		std::cout<<"================================================\n";
	}
	system("pause");
}



void buscarlibro(int a) {

	int operacion=67;
	do {
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
		std::cout<<" Operacion: ";
		std::cin>>operacion;

		switch(operacion) {

			case 1: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempnombrelibro; /*Aqui guardare temporalmente le nombre de mi libro*/
				std::cin.ignore();
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Nombre del Libro\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el nombre del libro:\n";
				std::getline(std::cin, tempnombrelibro);
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].nombrelibro==tempnombrelibro) {
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

				if(confirmacion==1) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado el libro\n\n";

					system("pause");
				}

				break;
			}

			case 2: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempautor; /*Aqui guardare temporalmente le nombre de mi autor*/
				std::cin.ignore();
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Autor del Libro\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el Autor:\n";
				std::getline(std::cin, tempautor);
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].autor==tempautor) {
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

				if(confirmacion==1) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado el libro\n\n";

					system("pause");
				}

				break;
			}

			case 3: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				int tempid; /*Aqui guardare temporalmente la id del libro*/

				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por ID\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el ID del libro: ";
				std::cin>>tempid;
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].id==tempid) {
						std::cout<<"Libro ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion==1) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<" No se a encontrado el libro\n\n";

					system("pause");
				}

				break;
			}

			case 4: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/

				std::cout<<"================================================\n";
				std::cout<<" Mostrando Libros Disponibles\n";
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].prestado=='N') {
						std::cout<<"Libro ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del Libro:"<<l[i].nombrelibro<<std::endl;
						std::cout<<" Nombre del Autor:"<<l[i].autor<<std::endl;
						std::cout<<" ID: "<<l[i].id<<std::endl;
						std::cout<<" Año de publicacion: "<<l[i].anio<<std::endl;
						std::cout<<" Prestado?: "<<l[i].prestado<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<" Todos los libros estan prestados\n\n";

					system("pause");
				}

				break;
			}

			case 5: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/

				std::cout<<"================================================\n";
				std::cout<<" Mostrando Libros No Disponibles\n";
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].prestado=='S') {
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

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"Todos los libros estan disponibles\n\n";

					system("pause");
				}

				break;
			}

			case 0: {
				break;
			}
		}
	} while(operacion!=0);
}










bool registrarpersona(int a) {

	char confirmacion; /*Aqui guardare la confirmacion de la accion de registrar el libro*/

	std::string tempnombre; /*Aqui guardare temporalmente el nombre de la persona*/
	std::string tempemail; /*Aqui guardare temporalmente el email de la persona*/
	std::string tempdni; /*Aqui guardare temporalmente el dani*/
	std::string tempcodigo; /*Aqui guardare temporalmente le codigo de la persona*/
	int temptelefono; /*Aqui guardare temporalmente le numeor de telefono de la poersona*/

	std::cin.ignore();

	std::cout<<"================================================\n";
	std::cout<<" Registrando...\n";
	std::cout<<"================================================\n";
	std::cout<<" Nombre del usuario: ";
	std::getline(std::cin, tempnombre);
	std::cout<<" Correo institucional: ";
	std::cin>>tempemail;
	std::cout<<" DNI del usuario: ";
	std::cin>>tempdni;
	std::cout<<" Codigo del usuario: ";
	std::cin>>tempcodigo;
	std::cout<<" Telefono del usuario: ";
	std::cin>>temptelefono;
	std::cout<<"================================================\n";
	std::cout<<" Confirmar accion [S/N]: ";
	std::cin>>confirmacion;

	if(confirmacion=='S' || confirmacion=='s') {
		p[a].nombre = tempnombre;
		p[a].email = tempemail;
		p[a].dni = tempdni;
		p[a].codigo = tempcodigo;
		p[a].telefono = temptelefono;
		return true;
	}
	return false;
}



void listapersonas(int a) {
	std::cout<<"================================================\n";
	for (int i=0; i<a; i++) {
		std::cout<<" Usuario ["<<i+1<<"]\n\n";

		std::cout<<" Nombre del usuario: "<<p[i].nombre<<std::endl;
		std::cout<<" Email institucional: "<<p[i].email<<std::endl;
		std::cout<<" DNI: "<<p[i].dni<<std::endl;
		std::cout<<" Codigo universitario: "<<p[i].codigo<<std::endl;
		std::cout<<" Telefono: "<<p[i].telefono<<std::endl;
		std::cout<<"================================================\n";
	}
	system("pause");
}



void buscarpersona(int a) {

	int operacion=67;
	do {
		system("cls");

		std::cout<<"================================================\n";
		std::cout<<" Buscar usario por...\n";
		std::cout<<"================================================\n";
		std::cout<<" 1 - Nombre del usuario\n";
		std::cout<<" 2 - Email institucional\n";
		std::cout<<" 3 - DNI\n";
		std::cout<<" 4 - Codigo universitario\n";
		std::cout<<" 5 - Telefono\n\n";

		std::cout<<" 0 - Volver al Menu Principal\n";
		std::cout<<"================================================\n";
		std::cout<<" Operacion: ";
		std::cin>>operacion;

		switch(operacion) {

			case 1: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el usuario*/
				std::string tempnombre; /*Aqui guardare temporalmente le nombre del usuario*/
				std::cin.ignore();
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Nombre del Usuario\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el nombre del Usuario:\n";
				std::getline(std::cin, tempnombre);
				std::cout<<"================================================\n";

				for (int i=0; i<a; i++) {
					if(p[i].nombre==tempnombre) {
						std::cout<<" Usuario ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del usuario: "<<p[i].nombre<<std::endl;
						std::cout<<" Email institucional: "<<p[i].email<<std::endl;
						std::cout<<" DNI: "<<p[i].dni<<std::endl;
						std::cout<<" Codigo universitario: "<<p[i].codigo<<std::endl;
						std::cout<<" Telefono: "<<p[i].telefono<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado el usuario\n\n";

					system("pause");
				}

				break;
			}

			case 2: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempemail; /*Aqui guardare temporalmente el email*/
				std::cin.ignore();
				std::cout<<"================================================\n";
				std::cout<<" Buscar Usuario por su Email Institucional...\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el Email:\n";
				std::cin>>tempemail;
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].email==tempemail) {
						std::cout<<" Usuario ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del usuario: "<<p[i].nombre<<std::endl;
						std::cout<<" Email institucional: "<<p[i].email<<std::endl;
						std::cout<<" DNI: "<<p[i].dni<<std::endl;
						std::cout<<" Codigo universitario: "<<p[i].codigo<<std::endl;
						std::cout<<" Telefono: "<<p[i].telefono<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado el usuarioi\n\n";

					system("pause");
				}

				break;
			}

			case 3: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempdni; /*Aqui guardare temporalmente el dni del usuario*/
				std::cin.ignore();
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por DNI...\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el DNI del Usuario:";
				std::cin>>tempdni;
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].dni==tempdni) {
						std::cout<<" Usuario ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del usuario: "<<p[i].nombre<<std::endl;
						std::cout<<" Email institucional: "<<p[i].email<<std::endl;
						std::cout<<" DNI: "<<p[i].dni<<std::endl;
						std::cout<<" Codigo universitario: "<<p[i].codigo<<std::endl;
						std::cout<<" Telefono: "<<p[i].telefono<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado al Usuario\n\n";

					system("pause");
				}

				break;
			}

			case 4: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				std::string tempcodigo; /*Aqui guardare temporalmente el codigo del usuario*/
				std::cin.ignore();
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Codigo...\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el Codigo del Usuario:";
				std::cin>>tempcodigo;
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].codigo==tempcodigo) {
						std::cout<<" Usuario ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del usuario: "<<p[i].nombre<<std::endl;
						std::cout<<" Email institucional: "<<p[i].email<<std::endl;
						std::cout<<" DNI: "<<p[i].dni<<std::endl;
						std::cout<<" Codigo universitario: "<<p[i].codigo<<std::endl;
						std::cout<<" Telefono: "<<p[i].telefono<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado al usuario\n\n";

					system("pause");
				}

				break;
			}

			case 5: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				int temptelefono; /*Aqui guardare temporalmente el telefono del usuario*/
				std::cout<<"================================================\n";
				std::cout<<" Buscar Libro por Telefono...\n";
				std::cout<<"================================================\n";
				std::cout<<" Por favor ingrese el Telefono del Usuario:";
				std::cin>>temptelefono;
				std::cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].telefono==temptelefono) {
						std::cout<<" Usuario ["<<i+1<<"]\n\n";

						std::cout<<" Nombre del usuario: "<<p[i].nombre<<std::endl;
						std::cout<<" Email institucional: "<<p[i].email<<std::endl;
						std::cout<<" DNI: "<<p[i].dni<<std::endl;
						std::cout<<" Codigo universitario: "<<p[i].codigo<<std::endl;
						std::cout<<" Telefono: "<<p[i].telefono<<std::endl;
						std::cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					std::cout<<"No se a encontrado al usuario\n\n";

					system("pause");
				}

				break;
			}

			case 0: {
				break;
			}
		}
	} while(operacion!=0);
}


void prestarlibro(int a, int b) {

	int tempid; /*Aqui guardare la ID del libro a prestar, temporalmente*/
	int existencia=0; /*Aqui verificare la existencia*/
	int indicelibro; /*Aqui guardare le indice de la persona*/
	int indicepersona; /*Aqui guardare el indice de la persona*/
	char operacion;

	std::cout<<"================================================\n";
	std::cout<<" Prestamo de libros!\n";
	std::cout<<"================================================\n";
	std::cout<<" Por favor ingrese el ID del libro a prestar:";
	std::cin>>tempid;
	std::cout<<"================================================\n";

	for(int i=0; i<a; i++) {
		if(l[i].id==tempid) {
			existencia=1;
			indicelibro=i;
			break;
		}
	}
	if(existencia==1) {

		std::string tempcodigo;
		int existencia=0;

		std::cout<<" Ingrese le codigo universitario del prestamista: ";
		std::cin>>tempcodigo;
		std::cout<<"================================================\n";

		for(int j=0; j<b; j++) {
			if(p[j].codigo==tempcodigo) {

				indicepersona=j;
				existencia=1;

				break;
			}
		}
		if(existencia==1) {

			std::cout<<"Confirmar operacion [S/N]: ";
			std::cin>>operacion;

			if(operacion=='s' || operacion=='S') {

				l[indicelibro].prestado='S';

				std::cout<<" Accion realizada!\n\n";

				system("pause");

			} else {

				std::cout<<"Operacion cancelada...";
				system("pause");

			}
		} else {
			std::cout<<"Ingrese un codigo existente...\n\n";

			system("pause");
		}
	} else {
		std::cout<<"Por favor ingrese una ID valida...\n\n";
		system("pause");
	}
}