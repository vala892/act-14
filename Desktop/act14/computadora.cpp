#include "computadora.h"

computadora::computadora()
{

}

computadora::computadora(const string &nombre, const string &sistema_op, float memoria, int ram)
{
    this->nombre = nombre;
    this->sistema_op = sistema_op;
    this->memoria = memoria;
    this->ram = ram;
}

void computadora::setNombre(const string &v)
{
    nombre = v;
}

string computadora::getNombre()
{
    return nombre;
}

void computadora::setsistema_op(const string &v)
{
    sistema_op = v;
}

string computadora::getsistema_op()
{
    return sistema_op;
}

void computadora::setmemoria(float v)
{
    memoria = v;
}

float computadora::getmemoria()
{
    return memoria;
}

void computadora::setram(int v)
{
    ram = v;
}

int computadora::getram()
{
    return ram;
} 
