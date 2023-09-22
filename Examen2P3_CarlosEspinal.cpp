#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



void mainmenu() {
    cout << "---- Main Menu ----\n" << "1. Leer archivos\n" << "2. Guardar archivos\n" << "3. Asignaciones\n" << "4. Salir\n" << "Ingrese una opcion: ";
}
void menu2() {
    cout << "---- Submenu Asignaciones ----\n" << "1. Asignar Proyecto a ScrumMaster";
}

int main(){
    int opcionmm;
    do {
        mainmenu();
        cin >> opcionmm;
        switch (opcionmm) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;

        }

    } while (opcionmm != 4);
}
