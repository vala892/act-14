#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class computadora
{
    string nombre;
    string sistema_op;
    float memoria;
    int ram;
public:
    computadora();
    computadora(const string &nombre, const string &sistema_op, float mamoria, int ram);
    void setNombre(const string &v);
    string getNombre();
    void setsistema_op(const string &v);
    string getsistema_op();
    void setmemoria(float v);
    float getmemoria();
    void setram(int v);
    int getram();

    friend ostream& operator<<(ostream &out, const computadora &p)
    {
        out << left ;
        out << setw(10) << p.nombre;
        out << setw(10) << p.sistema_op ;
        out << setw(8) <<  p.memoria ;
        out << setw(6) << p.ram;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, computadora &p)
    {

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "que sistema op tiene: ";
        getline(cin, p.sistema_op);

        cout << "almacenamiento: ";
        cin >> p.memoria;

        cout << "dame la ram: ";
        cin >> p.ram;


        return in;
    }

    bool operator==(const computadora& p)
    {
        return nombre == p.nombre;
    }
    bool operator==(const computadora& p) const
    {
        return nombre == p.nombre;
    }
};

#endif 
