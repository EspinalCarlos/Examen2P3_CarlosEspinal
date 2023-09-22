#pragma once
#include <string>
#include <vector>
#include <fstream>
#include "Developer.h"
using namespace std;
class Proyecto{
	int IDProyecto;
	string NombreProyecto;
	string FechaInicio;
	string FechaFin;
	string Estado;
	vector<Developer*> Equipo;

public:
	Proyecto();
	Proyecto(int, string, string, string, string);
	~Proyecto();
	void setEquipo(vector<Developer*>&);
	int getID();
	string getNombre();
	string getFehcaInicio();
	string getFechaFin();
	string getEstado();
};

