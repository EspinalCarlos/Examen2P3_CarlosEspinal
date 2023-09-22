#pragma once
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Developer{
protected:
	int id;
	string nombreCompleto;
	int anosExperiencia;
	string Puesto;

public:
	Developer(int, string, int, string);
	~Developer();
	int getId();
	string getNombre();
	int getAnos();
	string getPuesto();
	void setId(int);
	void setNombre(string);
	void setAnos(int);
	void setPuesto(string);

};

