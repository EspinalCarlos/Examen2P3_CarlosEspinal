#pragma once
#include <string>
#include <vector>
#include <fstream>
using namespace std; 
class Historias_de_Usuario{
	int idHistoria;
	string titulo;
	string prioridad;
	string ETA; //tiempo estimado
	int IDSprintRelacionado;
public:
	Historias_de_Usuario(int, string, string, string);
	~Historias_de_Usuario();
	void setIDRelacionado(int);
	int getID();
	string getTitulo();
	string getPrioridad();
	int getETA();
	int getIDRelaSprint();


};

