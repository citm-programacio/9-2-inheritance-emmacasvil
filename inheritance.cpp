// inheritance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;  

class Building {
protected: 
    string name; 
public: 
    
    Building() {}; 
    
    Building(string _name) {
        name = _name; 
    }

    string getName()
    {
        return name; 
    }
};

class Warehouse : public Building {
private: 
    int wood, rocks, wheat; 
public: 
    
    Warehouse() {}; 
    
    Warehouse(string _name, int _wood, int _rocks, int _wheat)
    {
        name = _name; 
        wood = _wood; 
        rocks = _rocks; 
        wheat = _wheat; 
    }

    void printResources() 
    {
        cout << "WAREHOUSE: \nName: " << name << "\nWood: " << wood << "\nRocks: " << rocks << "\nWheat: " << wheat << endl;
    }
};

class House : public Building {
private: 
    int floors, inhabitants, servants; 
public: 
    House(string _name, int _floors, int _inhabitants, int _servants)
    {
        name = _name; 
        floors = _floors; 
        inhabitants = _inhabitants; 
        servants = _servants; 
    }

    void printHouse()
    {
        cout << "\nHOUSE: \nName: " << name << "\nFloors: " << floors << "\nInhabitants: " << inhabitants << "\nServants: " << servants << endl;
    }
};

class Temple : public Building {
private: 
    string god; 
    int priests; 
public: 
    Temple(string _name, string _god, int _priests)
    {
        name = _name; 
        god = _god; 
        priests = _priests; 
    }

    void printTemple()
    {
        cout << "\nTEMPLE: \nName: " << name << "\nGod: " << god << "\nPriests: " << priests << endl;
    }
};

int main()
{
    Warehouse B1("Warehouse", 253, 786, 132); 
    House B2("House", 4, 12, 5); 
    Temple B3("Temple", "Buda", 43); 
    
    B1.printResources(); 
    B2.printHouse(); 
    B3.printTemple(); 

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
