#include<iostream>
#include<cstdlib>
#include<string>
#include"funciones.h"
using namespace std;

persona p[670];
libro l[670];

void menu() {
	cout<<"================================================\n";
	cout<<"     Biblioteca!\n";
	cout<<"================================================\n";
	cout<<" 1 - Registrar ingreso de un nuevo libro\n";
	cout<<" 2 - Mostrar libros registrados\n";
	cout<<" 3 - Buscar libro\n\n";

	cout<<" 4 - Registrar usuario\n";
	cout<<" 5 - Mostrar usuarios registrados\n";
	cout<<" 6 - Buscar usuarios\n\n";

	cout<<" 7 - Prestar libro\n";

	cout<<" 0 - Salir\n";
	cout<<"================================================\n";
};



bool registrarlibro(int a) {

	string tempautor; /*Aqui guardare temporalmente le nombre del libro hasta la confirmacion*/
	string tempnombrelibro; /*Aqui guardare temporalmente le nombre del autor hasta la confirmacion*/
	int aniotemp; /*Aqui guardare temporalmente el anio*/
	char confirmacion; /*Aqui guardare la confirmacion de la accion de registrar el libro*/

	cin.ignore();

	cout<<"================================================\n";
	cout<<" Registrando...\n";
	cout<<"================================================\n";
	cout<<" Nombre del libro: ";
	getline(cin, tempnombrelibro);
	cout<<" Nombre del autor: ";
	getline(cin, tempautor);
	cout<<" Año de publicacion: ";
	cin>>aniotemp;
	cout<<"================================================\n";
	cout<<" Confirmar accion [S/N]: ";
	cin>>confirmacion;

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
	cout<<"================================================\n";
	for (int i=0; i<a; i++) {
		cout<<"Libro ["<<i+1<<"]\n\n";

		cout<<" Nombre del Libro:"<<l[i].nombrelibro<<endl;
		cout<<" Nombre del Autor:"<<l[i].autor<<endl;
		cout<<" ID: "<<l[i].id<<endl;
		cout<<" Año de publicacion: "<<l[i].anio<<endl;
		cout<<" Prestado?: "<<l[i].prestado<<endl;
		cout<<"================================================\n";
	}
	system("pause");
}



void buscarlibro(int a) {

	int operacion=67;
	do {
		system("cls");

		cout<<"================================================\n";
		cout<<" Buscar Libro por...\n";
		cout<<"================================================\n";
		cout<<" 1 - Nombre del Libro\n";
		cout<<" 2 - Autor del Libro\n";
		cout<<" 3 - ID del Libro\n";
		cout<<" 4 - Libros Disponibles\n";
		cout<<" 5 - Libros Prestados\n\n";

		cout<<" 0 - Volver al Menu Principal\n";
		cout<<"================================================\n";
		cout<<" Operacion: ";
		cin>>operacion;

		switch(operacion) {

			case 1: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				string tempnombrelibro; /*Aqui guardare temporalmente le nombre de mi libro*/
				cin.ignore();
				cout<<"================================================\n";
				cout<<" Buscar Libro por Nombre del Libro\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el nombre del libro:\n";
				getline(cin, tempnombrelibro);
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].nombrelibro==tempnombrelibro) {
						cout<<"Libro ["<<i+1<<"]\n\n";

						cout<<" Nombre del Libro:"<<l[i].nombrelibro<<endl;
						cout<<" Nombre del Autor:"<<l[i].autor<<endl;
						cout<<" ID: "<<l[i].id<<endl;
						cout<<" Año de publicacion: "<<l[i].anio<<endl;
						cout<<" Prestado?: "<<l[i].prestado;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion==1) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado el libro\n\n";

					system("pause");
				}

				break;
			}

			case 2: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				string tempautor; /*Aqui guardare temporalmente le nombre de mi autor*/
				cin.ignore();
				cout<<"================================================\n";
				cout<<" Buscar Libro por Autor del Libro\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el Autor:\n";
				getline(cin, tempautor);
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].autor==tempautor) {
						cout<<"Libro ["<<i+1<<"]\n\n";

						cout<<" Nombre del Libro:"<<l[i].nombrelibro<<endl;
						cout<<" Nombre del Autor:"<<l[i].autor<<endl;
						cout<<" ID: "<<l[i].id<<endl;
						cout<<" Año de publicacion: "<<l[i].anio<<endl;
						cout<<" Prestado?: "<<l[i].prestado;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion==1) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado el libro\n\n";

					system("pause");
				}

				break;
			}

			case 3: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				int tempid; /*Aqui guardare temporalmente la id del libro*/

				cout<<"================================================\n";
				cout<<" Buscar Libro por ID\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el ID del libro: ";
				cin>>tempid;
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].id==tempid) {
						cout<<"Libro ["<<i+1<<"]\n\n";

						cout<<" Nombre del Libro:"<<l[i].nombrelibro<<endl;
						cout<<" Nombre del Autor:"<<l[i].autor<<endl;
						cout<<" ID: "<<l[i].id<<endl;
						cout<<" Año de publicacion: "<<l[i].anio<<endl;
						cout<<" Prestado?: "<<l[i].prestado<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion==1) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<" No se a encontrado el libro\n\n";

					system("pause");
				}

				break;
			}

			case 4: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/

				cout<<"================================================\n";
				cout<<" Mostrando Libros Disponibles\n";
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].prestado=='N') {
						cout<<"Libro ["<<i+1<<"]\n\n";

						cout<<" Nombre del Libro:"<<l[i].nombrelibro<<endl;
						cout<<" Nombre del Autor:"<<l[i].autor<<endl;
						cout<<" ID: "<<l[i].id<<endl;
						cout<<" Año de publicacion: "<<l[i].anio<<endl;
						cout<<" Prestado?: "<<l[i].prestado<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<" Todos los libros estan prestados\n\n";

					system("pause");
				}

				break;
			}

			case 5: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/

				cout<<"================================================\n";
				cout<<" Mostrando Libros No Disponibles\n";
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(l[i].prestado=='S') {
						cout<<"Libro ["<<i+1<<"]\n\n";

						cout<<" Nombre del Libro:"<<l[i].nombrelibro<<endl;
						cout<<" Nombre del Autor:"<<l[i].autor<<endl;
						cout<<" ID: "<<l[i].id<<endl;
						cout<<" Año de publicacion: "<<l[i].anio<<endl;
						cout<<" Prestado?: "<<l[i].prestado;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"Todos los libros estan disponibles\n\n";

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

	string tempnombre; /*Aqui guardare temporalmente el nombre de la persona*/
	string tempemail; /*Aqui guardare temporalmente el email de la persona*/
	string tempdni; /*Aqui guardare temporalmente el dani*/
	string tempcodigo; /*Aqui guardare temporalmente le codigo de la persona*/
	int temptelefono; /*Aqui guardare temporalmente le numeor de telefono de la poersona*/

	cin.ignore();

	cout<<"================================================\n";
	cout<<" Registrando...\n";
	cout<<"================================================\n";
	cout<<" Nombre del usuario: ";
	getline(cin, tempnombre);
	cout<<" Correo institucional: ";
	cin>>tempemail;
	cout<<" DNI del usuario: ";
	cin>>tempdni;
	cout<<" Codigo del usuario: ";
	cin>>tempcodigo;
	cout<<" Telefono del usuario: ";
	cin>>temptelefono;
	cout<<"================================================\n";
	cout<<" Confirmar accion [S/N]: ";
	cin>>confirmacion;

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
	cout<<"================================================\n";
	for (int i=0; i<a; i++) {
		cout<<" Usuario ["<<i+1<<"]\n\n";

		cout<<" Nombre del usuario: "<<p[i].nombre<<endl;
		cout<<" Email institucional: "<<p[i].email<<endl;
		cout<<" DNI: "<<p[i].dni<<endl;
		cout<<" Codigo universitario: "<<p[i].codigo<<endl;
		cout<<" Telefono: "<<p[i].telefono<<endl;
		cout<<"================================================\n";
	}
	system("pause");
}



void buscarpersona(int a) {

	int operacion=67;
	do {
		system("cls");

		cout<<"================================================\n";
		cout<<" Buscar usario por...\n";
		cout<<"================================================\n";
		cout<<" 1 - Nombre del usuario\n";
		cout<<" 2 - Email institucional\n";
		cout<<" 3 - DNI\n";
		cout<<" 4 - Codigo universitario\n";
		cout<<" 5 - Telefono\n\n";

		cout<<" 0 - Volver al Menu Principal\n";
		cout<<"================================================\n";
		cout<<" Operacion: ";
		cin>>operacion;

		switch(operacion) {

			case 1: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el usuario*/
				string tempnombre; /*Aqui guardare temporalmente le nombre del usuario*/
				cin.ignore();
				cout<<"================================================\n";
				cout<<" Buscar Libro por Nombre del Usuario\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el nombre del Usuario:\n";
				getline(cin, tempnombre);
				cout<<"================================================\n";

				for (int i=0; i<a; i++) {
					if(p[i].nombre==tempnombre) {
						cout<<" Usuario ["<<i+1<<"]\n\n";

						cout<<" Nombre del usuario: "<<p[i].nombre<<endl;
						cout<<" Email institucional: "<<p[i].email<<endl;
						cout<<" DNI: "<<p[i].dni<<endl;
						cout<<" Codigo universitario: "<<p[i].codigo<<endl;
						cout<<" Telefono: "<<p[i].telefono<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado el usuario\n\n";

					system("pause");
				}

				break;
			}

			case 2: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				string tempemail; /*Aqui guardare temporalmente el email*/
				cin.ignore();
				cout<<"================================================\n";
				cout<<" Buscar Usuario por su Email Institucional...\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el Email:\n";
				cin>>tempemail;
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].email==tempemail) {
						cout<<" Usuario ["<<i+1<<"]\n\n";

						cout<<" Nombre del usuario: "<<p[i].nombre<<endl;
						cout<<" Email institucional: "<<p[i].email<<endl;
						cout<<" DNI: "<<p[i].dni<<endl;
						cout<<" Codigo universitario: "<<p[i].codigo<<endl;
						cout<<" Telefono: "<<p[i].telefono<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado el usuarioi\n\n";

					system("pause");
				}

				break;
			}

			case 3: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				string tempdni; /*Aqui guardare temporalmente el dni del usuario*/
				cin.ignore();
				cout<<"================================================\n";
				cout<<" Buscar Libro por DNI...\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el DNI del Usuario:";
				cin>>tempdni;
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].dni==tempdni) {
						cout<<" Usuario ["<<i+1<<"]\n\n";

						cout<<" Nombre del usuario: "<<p[i].nombre<<endl;
						cout<<" Email institucional: "<<p[i].email<<endl;
						cout<<" DNI: "<<p[i].dni<<endl;
						cout<<" Codigo universitario: "<<p[i].codigo<<endl;
						cout<<" Telefono: "<<p[i].telefono<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado al Usuario\n\n";

					system("pause");
				}

				break;
			}

			case 4: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				string tempcodigo; /*Aqui guardare temporalmente el codigo del usuario*/
				cin.ignore();
				cout<<"================================================\n";
				cout<<" Buscar Libro por Codigo...\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el Codigo del Usuario:";
				cin>>tempcodigo;
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].codigo==tempcodigo) {
						cout<<" Usuario ["<<i+1<<"]\n\n";

						cout<<" Nombre del usuario: "<<p[i].nombre<<endl;
						cout<<" Email institucional: "<<p[i].email<<endl;
						cout<<" DNI: "<<p[i].dni<<endl;
						cout<<" Codigo universitario: "<<p[i].codigo<<endl;
						cout<<" Telefono: "<<p[i].telefono<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado al usuario\n\n";

					system("pause");
				}

				break;
			}

			case 5: {
				system("cls");

				int confirmacion=0; /*usare esto para confirmar que se ha encontrado el libro*/
				int temptelefono; /*Aqui guardare temporalmente el telefono del usuario*/
				cout<<"================================================\n";
				cout<<" Buscar Libro por Telefono...\n";
				cout<<"================================================\n";
				cout<<" Por favor ingrese el Telefono del Usuario:";
				cin>>temptelefono;
				cout<<"================================================\n";

				for(int i=0; i<a; i++) {
					if(p[i].telefono==temptelefono) {
						cout<<" Usuario ["<<i+1<<"]\n\n";

						cout<<" Nombre del usuario: "<<p[i].nombre<<endl;
						cout<<" Email institucional: "<<p[i].email<<endl;
						cout<<" DNI: "<<p[i].dni<<endl;
						cout<<" Codigo universitario: "<<p[i].codigo<<endl;
						cout<<" Telefono: "<<p[i].telefono<<endl;
						cout<<"================================================\n";

						confirmacion=confirmacion+1;
					}
				}

				if(confirmacion!=0) {

					system("pause");

				} else if(confirmacion==0) {

					cout<<"No se a encontrado al usuario\n\n";

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

	cout<<"================================================\n";
	cout<<" Prestamo de libros!\n";
	cout<<"================================================\n";
	cout<<" Por favor ingrese el ID del libro a prestar:";
	cin>>tempid;
	cout<<"================================================\n";

	for(int i=0; i<a; i++) {
		if(l[i].id==tempid) {
			existencia=1;
			indicelibro=i;
			break;
		}
	}
	if(existencia==1) {

		string tempcodigo;
		int existencia=0;

		cout<<" Ingrese le codigo universitario del prestamista: ";
		cin>>tempcodigo;
		cout<<"================================================\n";

		for(int j=0; j<b; j++) {
			if(p[j].codigo==tempcodigo) {

				indicepersona=j;
				existencia=1;

				break;
			}
		}
		if(existencia==1) {

			cout<<"Confirmar operacion [S/N]: ";
			cin>>operacion;

			if(operacion=='s' || operacion=='S') {

				l[indicelibro].prestado='S';

				cout<<" Accion realizada!\n\n";

				system("pause");

			} else {

				cout<<"Operacion cancelada...";
				system("pause");

			}
		} else {
			cout<<"Ingrese un codigo existente...\n\n";

			system("pause");
		}
	} else {
		cout<<"Por favor ingrese una ID valida...\n\n";
		system("pause");
	}
}
