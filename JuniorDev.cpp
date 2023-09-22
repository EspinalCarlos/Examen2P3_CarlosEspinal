#include "JuniorDev.h"
#include <string>
#include <vector>
using namespace std;

JuniorDev::JuniorDev(int id, string nCom, int aExp, string p) :Developer(id,nCom,aExp,p){}

JuniorDev::~JuniorDev() {
	for (Tarea* tarea : tareasasignadas) {
		delete tarea;
	}
}

void JuniorDev::setTareas(vector<Tarea*>& a) {
	this->tareasasignadas = a;
}
