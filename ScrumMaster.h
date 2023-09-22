#pragma once
#include <string>
#include "Proyecto.h"
#include "Sprint.h"
#include "Developer.h"
#include <vector>
#include <fstream>
using namespace std;
class ScrumMaster{
	vector<Proyecto*> proyectos;
	vector<Sprint*> sprints;
public:
	ScrumMaster(int id, string nCom, int aExp, string p);
	~ScrumMaster();

};

