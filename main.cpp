#include <iostream>
#include "include/Fecha.h"
#include "include/Estudiante.h"

using namespace std;

int main()
{

    Estudiante aux;

    aux.setFechaNac(06,01,2000);
    cout<<endl;
    cout<<aux.getEdad();
    cout<<endl;

    return 0;
}
