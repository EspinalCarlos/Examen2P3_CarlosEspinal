#include "Sprint.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

Sprint::Sprint(int id, string nombre, string fin, string ffin, string estado) {
	this->IDSprint = id;
	this->NombreSprint = nombre;
	this->FechaInicio = fin;
	this->FechaFinal = ffin;
	this->Estado = estado;
}
Sprint::~Sprint() {}
void Sprint::setIDRelacionado(int id) {
	this->IDRelacionado = id;
}
int Sprint::getID() {
	return this->IDSprint;
}
string Sprint::getNombre() {
	return this->NombreSprint;
}
string Sprint::getFechaFin() {
	return this->FechaFinal;
}
string Sprint::getFechaInicio() {
	return this->FechaInicio;
}
string Sprint::getEstado() {
	return this->Estado;
}

