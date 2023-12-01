#include<iostream>
#include<fstream>
#include<string>
#include<chrono>
#include<thread>
using namespace std;

int main (void)
{
    string  linea;
    string texto;
    ifstream archivo("codig_descuento.txt");
    cout<<"ingrese algun codigo\n";cin>>texto;
    if (archivo.is_open())
    {
        while (getline(archivo,linea))
        {
            
                cout<<linea<<"\n";
                if ( texto == linea )
                {
                    cout<<"Codigo Correcto";
                }
                else
                {
                    cout<<"Codigo incorrecto";
                }
        }
         archivo.close();
    }
    else 
    {
        cout<<"no se puede abrir";
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