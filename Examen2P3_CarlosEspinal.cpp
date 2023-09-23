#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Proyecto.h"
#include "Tarea.h"
#include "Sprint.h"
#include "Historias_de_Usuario.h"
#include "Developer.h"
#include "SeniorDev.h"
#include "JuniorDev.h"
#include "ScrumMaster.h"
using namespace std;

void lecturaProyecto(vector<Proyecto*>& pro) {
    int contfirstline = 0;
    vector<string> tokens;
    string st;
    int id;
    string nombre;
    string FInicio;
    string FFinal;
    string Estado;
    ifstream aproj("proyecto.txt");
    while (getline(aproj, st)) { 
        stringstream ss(st);
        string tok;
        while (getline(ss,tok, ',')) {
            if (tok == "ID_de_Proyecto") {
                contfirstline++;
            }
            if (contfirstline == 0) {
                tokens.push_back(tok);
            }
        }
        if (contfirstline == 0) {
            id = stoi(tokens.at(0));
            nombre = tokens.at(1);
            FInicio = tokens.at(2);
            FFinal = tokens.at(3);
            Estado = tokens.at(4);
            pro.push_back(new Proyecto(id, nombre, FInicio, FFinal, Estado));
        }
        contfirstline = 0;
        tokens.clear();
    }
    aproj.close();
}
void lecturaHistoria(vector<Historias_de_Usuario*>& his) {
    int contfirstline = 0;
    vector<string> tokens;
    string st;
    int id;
    string titulo;
    string prioridad;
    string ETA;
    ifstream ahistory("historias_usuario.txt");
    
    while (getline(ahistory,st)){
        stringstream ss(st);
        string tok;
        while (getline(ss,tok, ',')) {
            if (tok == "ID_de_Historia") {
                contfirstline++;
            }
            if (contfirstline == 0) {
                tokens.push_back(tok);
            }
        }
        if (contfirstline == 0) {
            id = stoi(tokens.at(0));
            titulo = tokens.at(1);
            prioridad = tokens.at(2);
            ETA = tokens.at(3);
            his.push_back(new Historias_de_Usuario(id, titulo, prioridad, ETA));
        }
        contfirstline = 0;
        tokens.clear();
    }
    ahistory.close();
}
void lecturaSprint(vector<Sprint*>& sprs) {
    int contfirstline = 0;
    vector<string> tokens;
    string st;
    int id;
    string nombre;
    string FInicio;
    string FFinal;
    string estado;
    ifstream asprints("sprint.txt");
    while (getline(asprints,st)) {
        stringstream ss(st);
        string tok;
        while (getline(ss, tok, ',')) {
            if (tok == "ID_de_Sprint") {
                contfirstline++; 
            }
            if (contfirstline == 0) {
                tokens.push_back(tok);
            }
        }
        if (contfirstline == 0) {
            id = stoi(tokens.at(0));
            nombre = tokens.at(1);
            FInicio = tokens.at(2);
            FFinal = tokens.at(3);
            estado = tokens.at(4);
            sprs.push_back(new Sprint(id, nombre, FInicio, FFinal, estado));
        }
        contfirstline = 0;
        tokens.clear();
    }
    asprints.close();

}
void lecturaTareas(vector<Tarea*>& tars) {
    int contfirstline = 0;
    vector<string> tokens;
    string st;
    int id;
    string descripcion;
    string estado;
    ifstream atareas("tarea.txt");
    while(getline(atareas,st)){
        stringstream ss(st);
        string tok;
        while (getline(ss, tok, ',')) {
            if (tok == "ID_de_Tarea") {
                contfirstline++;
            }
            if (contfirstline == 0) {
                tokens.push_back(tok);
            }
        }
        if (contfirstline == 0) {
            id = stoi(tokens.at(0));
            descripcion = tokens.at(1);
            estado = tokens.at(2);
            tars.push_back(new Tarea(id, descripcion, estado));
        }
        contfirstline = 0;
        tokens.clear();

    }
    atareas.close();
}
void lecturaDevs(vector<Developer*>& devs) {
    int contfirstline = 0;
    vector<string> tokens;
    string st;
    int id;
    string nombre;
    int anos;
    string puesto;
    ifstream adevs("developers.txt");
    while (getline(adevs, st)) {
        stringstream ss(st);
        string tok;
        while (getline(ss,tok,',')) {
            if (tok == "id") {
                contfirstline++;
            }
            if(contfirstline == 0){
                tokens.push_back(tok);
            }
            
        }
        if (contfirstline == 0) {
            id = stoi(tokens.at(0));
            nombre = tokens.at(1);
            anos = stoi(tokens.at(2));
            puesto = tokens.at(3);
            if (puesto == "ScrumMaster"){
                devs.push_back(new ScrumMaster(id,nombre,anos,puesto));
            }
            else if (puesto == "SeniorDev") {
                devs.push_back(new SeniorDev(id, nombre, anos, puesto));
            }
            else if (puesto == "JuniorDev") {
                devs.push_back(new JuniorDev(id, nombre, anos, puesto));
            }
        }
        contfirstline = 0; 
        tokens.clear(); 
        
    }

    adevs.close();
}
void escritura(vector<Developer*>dm,vector<Sprint*>sm) {
    ofstream output("developers_modificados.txt");
    if (!dm.empty()) {
        if (output.is_open()) {
            output << "id,nombreCompleto,anosExperiencia,Puesto";
            output << endl;
            for (Developer* dev : dm) {
                output << dev->getId() << ',' << dev->getNombre() << ',' << dev->getAnos() << ',' << dev->getPuesto() << endl;
            }
        }

        output.close();
    }

    ofstream output2("sprints_modificados.txt");
    if (!sm.empty()) {
        if (output2.is_open()) {
            output2 << "ID_de_Sprint,Nombre_del_Sprint,Fecha_de_Inicio,Fecha_de_Finalizacion,Estado_del_Sprint" << endl;
            for (Sprint* spr : sm) {
                output2 << spr->getID() << ',' << spr->getNombre() << ',' << spr->getFechaInicio() << ',' << spr->getFechaFin() << ',' << spr->getEstado();
            }
        }
        output2.close();
    }

}


template<typename T>
void freeMemory(vector<T>& v) {
    for (T t : v) {
        delete t;
    }
}

void mainmenu() {
    cout << "---- Main Menu ----\n" << "1. Leer archivos\n" << "2. Guardar archivos\n" << "3. Asignaciones\n" << "4. Salir\n" << "Ingrese una opcion: ";
}
void menu2() {
    cout << "---- Submenu Asignaciones ----\n" << "1. Asignar Proyecto a ScrumMaster\n"<< "2. Listar y Asignar Sprint a Proyecto y a Scrum Master\n" << "3. Listar y Asignar Historia a Sprint, Proyecto y Senior Dev\n" << "4. Listar y Asignar Tarea a Historia de Usuario, Sprint y Junior Dev\n" << "5. Regresar al Menu Principal";
}

int main(){
    vector<Proyecto*> proyectos;
    vector<Proyecto*> proyectosmod;
    vector<Sprint*> sprintsmod;
    vector<Developer*> devmod;
    vector<Historias_de_Usuario*> historias;
    vector<Tarea*> tareas;
    vector<Sprint*> sprints;
    vector<Developer*> devs;
    int opcionmm;
    do {
        int id1;
        int id2;
        int opcionasign;
        mainmenu();
        cin >> opcionmm;
        switch (opcionmm) {
            case 1:
                cout << "entra";
                lecturaDevs(devs);
                lecturaHistoria(historias);
                lecturaProyecto(proyectos);
                lecturaSprint(sprints);
                lecturaTareas(tareas);
                cout << "\n\n ---- Se ha completado la lectura ----\n\n";
                break;
            case 2:
                escritura(devmod, sprintsmod);

                break;
            case 3:
                menu2();
                cout << endl << "Ingrese una opcion: ";
                cin >> opcionasign;
                cout << endl;
                switch (opcionasign) {
                    case 1:
                        cout << "--- Asignar Proyecto a Scrum Master ---\n\n";
                        cout << "----- Lista de Proyectos -----\n";
                        for (Proyecto* p : proyectos) {
                            cout << "ID: " << p->getID() << " Nombre: " << p->getNombre() << endl;
                        }
                        cout << "\nFavor ingrese el ID del proyecto que desea asignar: ";
                        cin >> id1;
                        cout << endl;
                        cout << endl << "----- Lista de ScrumMasters -----\n";
                        for (Developer* d : devs) {
                            if (d->getPuesto() == "ScrumMaster"){
                                cout << "ID: " << d->getId() << " Nombre: " << d->getNombre() << endl;
                            }
                        }
                        cout << endl << "Favor ingresar el ID del ScrumMaster al que desea asignar: ";
                        cin >> id2;

                        ((ScrumMaster*)devs.at(id2))->addProyectos(proyectos.at(id1));
                        cout << proyectos.at(id1) << " asignado al ScrumMaster " << devs.at(id2)->getNombre() << " exitosamente!";
                        devmod.push_back(devs.at(id2));

                        break;
                    case 2:
                        cout << "--- Asignar Sprint a un Proyecto y ScrumMaster ---\n\n";
                        cout << "----- Lista Sprints -----\n";
                        for (Sprint* spr : sprints) {
                            cout << "ID: " << spr->getID() << " Nombre: " << spr->getNombre() << endl;
                        }
                        cout << "\nIngrese el ID del sprint que desea asignar: ";
                        cin >> id1;
                        cout << "\n\n";
                        cout << "----- Lista de Proyectos -----\n";
                        for (Proyecto* p : proyectos) { 
                            cout << "ID: " << p->getID() << " Nombre: " << p->getNombre() << endl; 
                        }
                        cout << "\nFavor ingrese el ID del proyecto al que desea asignar: "; 
                        cin >> id2;

                        for (Developer* d : proyectos.at(id2)->getEquipo()) {
                            ((ScrumMaster*)d)->addSprints(sprints.at(id1));
                            devmod.push_back(d);
                        }
                        sprints.at(id1)->IDRelacionado = proyectos.at(id2)->getID();
                        sprintsmod.push_back(sprints.at(id1));


                        break;
                    case 3:

                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                }
                break;
            case 4:
                break;

        }

    } while (opcionmm != 4);
}
