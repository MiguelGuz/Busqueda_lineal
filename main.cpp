#include <iostream>
#include "computadora.h"
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<computadora> computadoras;

    computadora c04("alienware", "nueva", 100, 2500);
    computadora c02("raze", "nueva", 90, 2500);
    computadora c03("lenovo", "usada", 80, 600);
    computadora c05("hp,","de fabrica",80,1000);

    computadoras << c04 << c02 << c03 << c02 << c05;
    computadora c01("dell","nueva",75,750);

    Arreglo<computadora*> ptrs = computadoras.buscar_todos(c01);

if (ptrs.size()>0)
{
    for(size_t i=0;i<ptrs.size();i++)
    {
        computadora *c = ptrs[i];
        cout<<"*c"<<endl;
        }
    }else{
        cout<<"no hay una coincidencia"<<endl;
    }
    
    return 0;
}