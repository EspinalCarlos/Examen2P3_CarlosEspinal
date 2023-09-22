#pragma once
#include <vector>
#include <fstream>
using namespace std;
class Tarea{
	int id;
	string descripcion;
	string estado;
	int idhistoriarelacionada;

public:
	Tarea(int, string, string);
	~Tarea();
	void setIDRelacionadaHistoria(int);
	int getID();
	string getEstado();

};

