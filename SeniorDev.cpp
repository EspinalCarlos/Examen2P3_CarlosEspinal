#include "SeniorDev.h"
using namespace std;

SeniorDev::SeniorDev(int id, string nCom, int aExp, string p):Developer(id,nCom,aExp,p) {

}
SeniorDev::~SeniorDev() {
	for (Historias_de_Usuario* h : historias) {
		delete h;
	}
}
void SeniorDev::setHistorias(vector<Historias_de_Usuario*>& e) {
	this->historias = e;
}
