#include <iostream>
#include <locale.h>
#include "include/Fecha.h"
#include "include/Estudiante.h"
#include "include/Examen.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");


listar();

cout<< endl;
cout<< endl;
cout<< endl;
leerRegistroX(1);
cout<< endl;
leerRegistroX(2);
cout<< endl;
leerRegistroX(3);
cout<< endl;
leerRegistroX(4);

    return 0;
}
