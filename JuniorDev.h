#pragma once
#include "Developer.h"
#include "Tarea.h"
#include <vector>
#include <string>
class JuniorDev:public Developer{
	vector<Tarea*> tareasasignadas;
public:
	JuniorDev(int id, string nCom, int aExp, string p);
	~JuniorDev();
	void setTareas(vector<Tarea*>&);

};

