#include "ScrumMaster.h"
using namespace std;

ScrumMaster::ScrumMaster(int id, string nCom, int aExp, string p) : Developer(id, nCom, aExp, p) {}

ScrumMaster::~ScrumMaster() {
	for (Proyecto* pr : proyectos) {
		delete pr;
	}
	for (Sprint* spr : sprints) {
		delete spr;
	}
}
void ScrumMaster::addProyectos(Proyecto* p) {
	this->proyectos.push_back(p);
}
void ScrumMaster::addSprints(Sprint* sprs) {
	this->sprints.push_back(sprs);
}

vector<Sprint*> ScrumMaster::getSprints() {
	return this->sprints;
}