#include <iostream>
#include "../include/Estudiante.h"
#include "../include/Fecha.h"


    void Fecha::setNombre(std::string nombre) { _nombre = nombre;}

    void Fecha::setApellido(std::string apellido){ _apellido = apellido;}

    void Fecha::setFechaNac (int d, int m, int a){ _fechaNac.setDia(d);
                                            _fechaNac.setMes(m);
                                            _fechaNac.setAnio(a);
                                            }
    void Fecha::setLegajo(int legajo) { _legajo = legajo ;}


    std::string Fecha::getNombre(){return _nombre;}
    std::string Fecha::getApellido(){ return _apellido;}
    int Fecha::getLegajo() {return _legajo;}
    Fecha Fecha::getFecha() {return _fechaNac}
