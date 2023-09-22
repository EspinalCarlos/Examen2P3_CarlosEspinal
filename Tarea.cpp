#include "Tarea.h"
#include <vector>
#include <fstream>
using namespace std;

Tarea::Tarea(int id, string description, string estado) {
	this->id = id; 
	this->descripcion = description;
	this->estado = estado;
}
Tarea::~Tarea() { }

void Tarea::setIDRelacionadaHistoria(int id) {
	this->id = id;
}
int Tarea::getID() {
	return this->id;
}
string Tarea::getEstado() {
	return this->estado;
}
