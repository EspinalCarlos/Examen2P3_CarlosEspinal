#include "Historias_de_Usuario.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

Historias_de_Usuario::Historias_de_Usuario(int id, string title, string priority, string eta) {
	this->idHistoria = id;
	this->titulo = title;
	this->prioridad = priority;
	this->ETA = eta;
}
Historias_de_Usuario::~Historias_de_Usuario(){}

void Historias_de_Usuario::setIDRelacionado(int id) {
	this->IDSprintRelacionado = id;
}