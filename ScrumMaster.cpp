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
void ScrumMaster::setProyectos(vector<Proyecto*>& prs) {
	this->proyectos = prs;
}
void ScrumMaster::setSprints(vector<Sprint*>& sprs) {
	this->sprints = sprs;
}

vector<Sprint*> ScrumMaster::getSprints() {
	return this->sprints;
}