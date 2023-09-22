#pragma once
#include <string>
#include <vector>
#include <fstream>
using namespace std; 
class Historias_de_Usuario{
	int idHistoria;
	string titulo;
	string prioridad;
	int ETA; //tiempo estimado
	int IDSprintRelacionado;
public:
	Historias_de_Usuario(int, string, string, int);
	~Historias_de_Usuario();


};

