#ifndef FUNCIONES_H
#define FUNCIONES_H

struct persona{
	std::string nombre;
	std::string email;
	std::string dni;
	std::string codigo;
	char sexo;
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

#endif