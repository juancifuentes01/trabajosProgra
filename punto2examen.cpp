#include <iostream>
#include <string>

using namespace std;

struct Estudiante1 
{
    string nombre;
    int edad;
    string documento;
    int semestre;
};

int main()
{
    struct Estudiante1 estudiante1;
    cout << "Ingrese el nombre del estudiante "<<endl;
    cin >> estudiante1.nombre;

    cout << "\n";
    cout << "Ingrese la edad del estudiante "<<endl;
    cin >> estudiante1.edad;

    cout << "\n";
    cout << "Ingrese el documento de identidad "<<endl;;
    cin >> estudiante1.documento;

    cout << "\n";
    cout << "Ingrese el semestre que cursa "<<endl;
    cin >> estudiante1.semestre;

    cout << "\n";
    cout << "nombre del estudiante: " << estudiante1.nombre << endl;
    cout << "edad del estudiante: " << estudiante1.edad << endl;
    cout << "documento de identidad: " << estudiante1.documento << endl;
    cout << "semestre del estudiante es: " << estudiante1.semestre << endl;
}