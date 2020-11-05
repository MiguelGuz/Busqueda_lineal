#include "computadora.h"

computadora::computadora()
{

}

computadora::computadora(const string &marca,
              const string &estado,
              float calificacion,
              int precio)
{
    this->marca = marca;
    this->estado = estado;
    this->calificacion = calificacion;
    this->precio = precio;
}

void computadora::setMarca(const string &v)
{
    marca = v;
}

string computadora::getMarca()
{
    return marca;
}

void computadora::setEstado(const string &v)
{
    estado = v;
}

string computadora::getEstado()
{
    return estado;
}

void computadora::setCalificacion(float v)
{
    calificacion = v;
}

float computadora::getCalificacion()
{
    return calificacion;
}

void computadora::setPrecio(int v)
{
    precio = v;
}

int computadora::getPrecio()
{
    return precio;
}