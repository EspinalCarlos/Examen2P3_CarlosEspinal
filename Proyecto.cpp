#include "Proyecto.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

Proyecto::Proyecto(){}
Proyecto::Proyecto(int id, string nom, string fin, string ffin, string state) {
	this->IDProyecto = id;
	this->NombreProyecto = nom;
	this->FechaInicio = fin;
	this->FechaFin = ffin;
	this->Estado = state;
}

Proyecto::~Proyecto() {
	for (Developer* dev : Equipo) {
		delete dev;
	}
}

void Proyecto::setEquipo(vector<Developer*>& devs) {
	this->Equipo = devs;
}
int Proyecto::getID() {
	return this->IDProyecto;
}
string Proyecto::getNombre() {
	return this->NombreProyecto;
}
string Proyecto::getFechaInicio() {
	return this->FechaInicio;
}
string Proyecto::getFechaFin() {
	return this->FechaFin;
}
string Proyecto::getEstado() {
	return this->Estado;
}
vector<Developer*> Proyecto::getEquipo() {
	return this->Equipo;
}
