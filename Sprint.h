#pragma once
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Sprint{
	int IDSprint;
	string NombreSprint;
	string FechaInicio;
	string FechaFinal;
	string Estado;
	int IDRelacionado;

public:
	Sprint(int, string, string, string, string);
	~Sprint();
	void setIDRelacionado(int);
	int getID();
	string getNombre();
	string getFechaInicio();
	string getFechaFin();
	string getEstado();


};

