#ifndef FUNCIONES_H
#define FUNCIONES_H

#include<string>
using namespace std;

struct persona{
	string nombre;
	string email;
	string dni;
	string codigo;
	int telefono;
};

struct libro{
	string autor;
	string nombrelibro;
	int id;
	int anio;
	char prestado;
};

void menu();
bool registrarlibro(int);
void listalibros(int);
void buscarlibro(int);

bool registrarpersona(int);
void listapersonas(int);
void buscarpersona(int);

void prestarlibro(int a, int b);
#endif
