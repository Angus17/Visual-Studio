#include <iostream>
#include <cstdlib>
#include <clocale>

void funcion(void);

using namespace std;
int main(void)
{
    setlocale(LC_CTYPE, "spanish");
    cout<<"Se imprimirá en pantalla lo que esté en la funcion: ";

    funcion();//"Hola mundo"


}

void funcion(void)
{
    cout<<"Hola mundo";
}