#include <iostream>
// numero azar
#include <stdlib.h>
// tiempo del cpu
#include <time.h>
using namespace std;


string espaciar(int tamanio, int valor)
{
    int espacio=0;
    string texto="";

    espacio = valor-tamanio;
    for (int i=0; i<espacio;i++)
    {
        texto= texto + " ";
    }
    return texto;
}

void salas_cine()
{
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    // generamos numeros en un rando del 8 al 1

    

    cout << "__________________________________________________________________________________\n";
    cout<<"| SALA      PELICULA                                ESTADO                       |\n";
    cout << "__________________________________________________________________________________\n";

    for (int i = 1; i < 5; i++)
        {
            string lleno;
            int j = rand() % 7 + 0;
            int disponibles = rand() % 25;
            if (disponibles<25)
            {
                lleno="Disponible";
            }
            else if(disponibles=25)
            {
                lleno="No disponible";
            }
            if (disponibles<10)
            {
            cout<<"| "<<i<<espaciar(4,13)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disponibles:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"| "<<i<<espaciar(4,13)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disponibles:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
        cout << "__________________________________________________________________________________\n";
        }


}