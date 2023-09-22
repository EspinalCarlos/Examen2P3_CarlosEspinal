#include "Developer.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

Developer::Developer(int id, string nombreCompleto, int anosExperiencia, string Puesto) {
	this->id = id;
	this->nombreCompleto = nombreCompleto;
	this->anosExperiencia = anosExperiencia;
	this->Puesto = Puesto;
}

Developer::~Developer(){}

int Developer::getId() {
	return this->id;
}
string Developer::getNombre() {
	return this->nombreCompleto;
}
int Developer::getAnos() {
	return this->anosExperiencia;
}
string Developer::getPuesto() {
	return this->Puesto;
}
void Developer::setId(int id) {
	this->id = id;
}
void Developer::setNombre(string nombreCompleto) {
	this->nombreCompleto = nombreCompleto;
}
void Developer::setAnos(int anosExperiencia) {
	this->anosExperiencia = anosExperiencia;
}
void Developer::setPuesto(string Puesto) {
	this->Puesto = Puesto;
}