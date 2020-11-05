#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class computadora 
{
    string marca;
    string estado;
    float calificacion;
    int precio;
public:
    computadora();
    computadora(const string &marca,
              const string &estado,
              float calificacion,
              int precio);
    void setMarca(const string &v);
    string getMarca();
    void setEstado(const string &v);
    string getEstado();
    void setCalificacion(float v);
    float getCalificacion();
    void setPrecio(int v);
    int getPrecio();

    friend ostream& operator<<(ostream &out, const computadora &c)
    {
        out << left ;
        out << setw(10) << c.marca;
        out << setw(10) << c.estado;
        out << setw(8) <<  c.calificacion;
        out << setw(6) << c.precio;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, computadora &c)
    {

        cout << "Marca: ";
        getline(cin, c.marca);

        cout << "Estado del dispositivo: ";
        getline(cin, c.estado);

        cout << "Calificacion de usuarios: ";
        cin >> c.calificacion;

        cout << "Precio: ";
        cin >> c.precio;


        return in;
    }

    bool operator==(const computadora& c)
    {
        return estado == c.estado;
    }
    bool operator==(const computadora& c) const
    {
        return estado == c.estado;
    }
};

#endif