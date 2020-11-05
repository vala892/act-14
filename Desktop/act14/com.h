#ifndef COM_H
#define COM_H

#include "com.h"

class com
{
    computadora arreglo[20];
    size_t cont;
public:
    com();
    void agregarcomputadora(const computadora &p);
    void mostrar();
};

#endif 
