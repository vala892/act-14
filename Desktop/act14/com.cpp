#include "com.h"

com::com()
{
    cont = 0;
}

void com::agregarcomputadora(const computadora &p)
{
    if (cont < 5) {
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}

void com::mostrar()
{
    for (size_t i = 0; i < cont; i++) {
        computadora &p = arreglo[i];
        cout << "Nombre: " << p.getNombre() << endl;
        cout << "sistema op " << p.getsistema_op() << endl;
        cout << "memoria: " << p.getmemoria() << endl;
        cout << "ram: " << p.getram() << endl;
        cout << endl;
    }
}
