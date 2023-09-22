#pragma once
#include "Developer.h"
#include "Historias_de_Usuario.h"
#include <string>
#include <vector>
class SeniorDev:public Developer{
	vector<Historias_de_Usuario*> historias;
public:
	SeniorDev(int id, string nCom, int aExp, string p); 
	~SeniorDev();
	void setHistorias(vector<Historias_de_Usuario*>&);
};

