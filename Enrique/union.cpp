#include <iostream>
// numero azar
#include <stdlib.h>
// tiempo del cpu
#include <time.h>
using namespace std;
string espacio(int tamanio, int valor)
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
void lunes(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Lunes " << espacio (2, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Lunes " << espacio (2, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
void Martes(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Martes " << espacio (3, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Martes " << espacio (3, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
void Miercoles(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Miercoles " << espacio (6, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Miercoles " << espacio (6, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
void Jueves(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Jueves " << espacio (3, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Jueves " << espacio (3, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
void Viernes(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Viernes " << espacio (4, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Viernes " << espacio (4, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
void Sabado(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Sabado " << espacio (3, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Sabado " << espacio (3, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
void Domingo(){
    // colocamos los nombres de las peliculas en un arreglo
    string peliculas[8] = {"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
                           "the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
                           "Supercool - Greg Mottola"};
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    for (int i = 0; i < 4; i++)
    {
        string lleno;
        int j = rand() % 7 + 0;
        int disponibles = rand() % 25;
        if (disponibles<25)
        {
            lleno="Dis";
        }
        else if(disponibles=25)
        {
            lleno="Nodis";
        }
        if (disponibles<10)
            {
            cout<<"     | "<<" Domingo " << espacio (4, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Domingo " << espacio (4, 6)<< arrayL[i]<< espacio(1, 6)<< arrayLp[0]<<espacio (1, 11)<<i+1<<espacio(4,10)<<peliculas[j]<<espacio(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
        cout << "     _________________________________________________________________________________________________________________\n";
    }
    cout<<endl<<endl;
}
int main(void)
{
    int a;
    cout << "================================\n";
    cout << "|         Elige Un dia         |\n";
    cout << "================================\n";
    cout << "| 1. Lunes                     |\n";
    cout << "| 2. Martes                    |\n";
    cout << "| 3. Miercoles                 |\n";
    cout << "| 4. Jueves                    |\n";
    cout << "| 5. Viernes                   |\n";
    cout << "| 6. Sabado                    |\n";
    cout << "| 7. Domingo                   |\n";
    cout << "================================\n";
    cin >> a;
    system("cls");
    switch (a)
        {
        case 1:
            system("cls");
            lunes();
            break;

        case 2:
            system("cls");
            Martes();
            break;

        case 3:
            system("cls");
            Miercoles();
            break;

        case 4:
            system("cls");
            Jueves();
            break;

        case 5:
            system("cls");
            Viernes();
            break;
        case 6:
            system("cls");
            Sabado();
            break;
        case 7:
            system("cls");
            Domingo();
            break;
        }
}