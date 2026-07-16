#ifndef FUNCIONES_H
#define FUNCIONES_H

#include<string>

struct persona{
	std::string nombre;
	std::string email;
	std::string dni;
	std::string codigo;
	int telefono;
};

struct libro{
	std::string autor;
	std::string nombrelibro;
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