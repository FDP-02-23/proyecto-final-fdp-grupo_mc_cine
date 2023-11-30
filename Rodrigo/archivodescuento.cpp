#include<iostream>
#include<fstream>
#include<string>
#include<chrono>
#include<thread>
using namespace std;

int main (void)
{
bool w=false;
int n=0;
string  linea[n];
string nombre = "codig_descuento.txt";
ifstream archivo;
string texto;

archivo.open(nombre.c_str());

cout<<"ingrese algun codigo";cin>>texto;

   while (getline(archivo,linea[n]))
   {
        cout<<linea[n]<<"\n";
        if ( texto == linea[n] )
        {
            cout<<"Codigo Correcto";
        }
        else
        {
        w=false;
        n++;
        }
    }
        archivo.close();
        if (w==true)
        {
        
        //aqui resta a total en el estruct
        }
        else
        {
        cout<<"Codigo incorrecto";
        }

return 0;
}
void animacionCarga()
{
    const char caracteresAnimacion[] = {'|', '/', '-', '\\'};
    const int numCaracteres = sizeof(caracteresAnimacion) / sizeof(caracteresAnimacion[0]);
    
    int indice = 0;
    
    for (int i = 0; i < 20; ++i) {
        cout << "Cargando " << caracteresAnimacion[indice] << "\r";
        this_thread::sleep_for(std::chrono::milliseconds(100));
        cout.flush();  // Limpiar el búfer de salida
        
        // Actualizar el índice para el siguiente carácter de animación
        indice = (indice + 1) % numCaracteres;
    }

    cout << "Carga completa!" << endl;
}
