#include<iostream>
#include<string>
using namespace std;
struct alumno{
	string nombre;
	string apellido;
	int telefono;
	int DNI;
	string gmail;
	string sexo;
	int edad;
};
struct libro{
	string autor;
	int anio;
	string calidad;
	int ID;
	string nombre;
};
int cantidadl=0;
libro B[100];//va a representar la estructura libro
void registrar_libro(){
	string r;
	do{
		cout<<"====REGISTRE EL NUEVO LIBRO===="<<endl;
		cout<<"ingrese el Id del libro:";
		cin>>B[cantidadl].ID;
		cout<<"ingrese el nombre del libro:";
		cin>>B[cantidadl].nombre;
		cout<<"ingrese el autor del libro:";
		cin>>B[cantidadl].autor;
		cout<<"ingrese el anio del libro:";
		cin>>B[cantidadl].anio;
		cout<<"ingrese la calida del libro:";
		cin>>B[cantidadl].calidad;
		cout<<"desea hacer otro registro (si es asi presione cualquira letra /si no presione n)"<<endl;
		cin>>r;
		cantidadl++;
		
	}while(r!="N"&&r!="n");{
	cout<<"volvemos al menu"<<endl;}
}
alumno A[100];
int cantidad=0;
void agregar() {
	string j;
	do{
	
    cout << "--- REGISTRARSE ---"<<endl;
    cout << "Nombre: ";
    cin>>A[cantidad].nombre;
    cout << "Apellido: ";
    cin>>A[cantidad].apellido;
    cout << "Sexo (M/F): ";
    cin >> A[cantidad].sexo;
    cout << "Edad: ";
    cin >> A[cantidad].edad;
    cout << "Email: ";
    cin >> A[cantidad].gmail;
     cout << "DNI: ";
    cin >> A[cantidad].DNI;
     cout << "TELEFONO: ";
    cin >> A[cantidad].telefono;
    cantidad++;
    cout << "Nuevo contacto AÑA";
    cout<<"deseas agregar un nuevo contacto(si  es si presione cualquiera tecla/n)"<<endl;
    cin>>j;
}while(j!="N"&&j!="n");{
cout<<"volvemos al menu"<<endl;}
}
void lista_alumnos(){
	string li;
	do{
		cout<<"====LISTA DE ALUMNOS===="<<endl;
		for(int i=0;i<cantidad;i++){
			cout<<"alumno"<<i+1<<":"<<A[i].nombre<<" "<<A[i].apellido<<endl;
			cout<<"correo del alumno"<<i+1<<":"<<A[i].gmail<<endl;
		}
		cout<<"¿Desea hacer otro registro (si es asi presione cualquira letra /si no presione n)?"<<endl;
		cin>>li;
	}while(li!="N"&&li!="n");{
	cout<<"volvemos al menu"<<endl;}
}
void lista_libros(){
	string pi;
	do{
		cout<<"====LISTA DE libros===="<<endl;
		for(int j=0;j<cantidadl;j++){
			cout<<"libro"<<j+1<<":"<<B[j].nombre<<" "<<B[j].autor<<endl;
			cout<<"anio de creacion"<<j+1<<":"<<B[j].anio<<endl;
		}
		cout<<"¿Desea hacer otro registro (si es asi presione cualquira letra /si no presione n)?"<<endl;
		cin>>pi;
	}while(pi!="N"&&pi!="n");{
	cout<<"volvemos al menu"<<endl;}
}
void buscar_alumno(){
	string bl;
	int buscar;
	do{
		cout<<"ingrese el DNI del alumno que busca: "<<endl;
		cin>>buscar;
		for(int u=0;u<cantidad;u++){
			if (A[u].DNI==buscar){
				cout<<"el alumno es: "<<A[u].nombre<<" "<<A[u].apellido<<endl;
				cout<<"su correo es :"<<A[u].gmail<<endl;
				cout<<"su telefono es :"<<A[u].telefono;
			}
		}
		cout<<"¿Desea hacer otra consulta (si es asi presione cualquira letra /si no presione n)?"<<endl;
		cin>>bl;
	}while(bl!="N"&&bl!="n");{
	cout<<"volvemos al menu"<<endl;}
}
void BIBLIOTECA(){
	int op;
	do{
	
	cout <<"_________________________________"<<endl;
	cout <<"| ===ACCESO A LA BIBLIOTECA===  |"<<endl;
	cout <<"|    1. Registrar Alumno        |"<<endl;
    cout <<"|    2. Registrar Nuevo Libro   |"<<endl;
    cout <<"|    3. Ver Alumnos             |"<<endl;
    cout <<"|    4. Ver Libros              |"<<endl;
    cout <<"|    5. Buscar                  |"<<endl;
    cout <<"|    6. volver al menu          |"<<endl;
    cout <<"|_______________________________|"<<endl;
    cout<<"opcion:"<<endl;
    cin>>op;
    if (op==1){
    	agregar();
	}
	else if (op==2){
		registrar_libro();
	}
	else if (op==3){
		lista_alumnos();
	}
		else if (op==4){
		lista_libros();
	}
		else if (op==5){
		buscar_alumno();
	}
}while(op!=6);{
cout<<"volvemos al menu"<<endl;}
}

int main(){
	string opcion;
	do{
	cout << "*______________________________________"<<endl;
    cout << "|     SISTEMA DE BIBLIOTECA v1.0       |"<<endl;
    cout << "|--------------------------------------|"<<endl;
    cout << "|  A. ACCESO A LA BIBLIOTECA           |"<<endl;
    cout << "|     1. Registrar Alumno              |"<<endl;
    cout << "|     2. Registrar Nuevo Libro         |"<<endl;
    cout << "|     3. Ver Alumnos                   |"<<endl;
    cout << "|     4. Ver Libros                    |"<<endl;
    cout << "|     5. buscar                        |"<<endl;
    cout << "|                                      |"<<endl;
    cout << "|  B. PRESTAMOS                        |"<<endl;
    cout << "|     5. Realizar Prestamo             |"<<endl;
    cout << "|     6. Ver Prestamos                 |"<<endl;
    cout << "|     7. Devolver Libro                |"<<endl;
    cout << "|                                      |"<<endl;
    cout << "|  C. GESTION                          |"<<endl;
    cout << "|     8. Cambiar Disponibilidad        |"<<endl;
    cout << "|     9. Buscar Libro                  |"<<endl;
    cout << "|    10. Ver Compensaciones            |"<<endl;
    cout << "|                                      |"<<endl;
    cout << "|  s. Salir                            |"<<endl;
    cout << "|______________________________________|"<<endl;
    cout << "Opcion: ";
    cin>>opcion;
    if (opcion=="A"||opcion=="a"){
    BIBLIOTECA();
	}
	}while(opcion!="s"&&opcion!="S");{
		cout<<"salimos de la biblioteca .";
	}
	return 0;
}
