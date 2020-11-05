#include <iostream>
#include "arreglo.h"
#include "computadora.h"
#include "com.h"
using namespace std;

int main()
{
    Arreglo<computadora> computadoras;

    computadora p01("pc_master", "windows", 2000, 32);
    computadora p02("pc_diseño", "ios", 1000, 16);
    computadora p03("pc_chafa", "windows", 500, 3);

    computadoras << p01 << p02 << p03 << p02 << p02;
    computadora p04("pc_diseño", "ios", 1000, 16);

    Arreglo<computadora*> ptrs = computadoras.buscar_todos(p04);

    if (ptrs.size() > 0) {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else {
        cout << "No existen coincidencias" << endl;
    }

    return 0;
} 
