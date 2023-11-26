#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Aqui se almacenan cada uno de los productos a vender en la cafeteria.
struct comida
{
    int id;
    string producto;
    float precio;
};
//esta estructura es la base de las compras aqui se almacenan las comparas echas como maximo 10.
struct Cliente
{
    // ticket ComprasPelicula;
    comida ListaComprasComida[10];
    string peli;
    float total;
};
string espaciar(int);
void cargaranimation();
void menu_1();
void menu_2();
void pagos();
void agregar_al_carrito(int);
void mostrar_carrito();
void menu_tienda();
void salas_cine();
void contrasenia();
// Declarar los productos
comida Cafeteria[10] = {
    {1, "Agua", 2.50},
    {2, "Palomitas", 4.00},
    {3, "Soda", 2.00},
    {4, "Papas", 2.50},
    {5, "Pizza", 2.50},
    {6, "Nachos", 5.00}
};
//Contador que sirve para cambiar el usuario y que no quede lo productos de el anterior usuario que compro algo.
int USING1 = 0;
//Contador que se suma cada ves que el usuario adquiere un producto con un maximo de 10 productos para adquirir mas deja de contar 
int index = 0;
//aqui declaro cuanto es el maximo de usuarios para esta prueva.
Cliente Usuario[20];

int main(void)
{
    menu_1();
    cout << "GRACIAS POR ACCEDER AL SISTEMA DE MAC CINE\n";
    system("pause");
}
//Esta Funsion sirve para espaciar ya hacer tablas que se vean mas simetricas.
string espaciar(int tamanio, int valor)
{
    int espacio = 0;
    string texto = "";

    espacio = valor - tamanio;

    for (int i = 0; i < espacio; i++)
    {
        texto = texto + " ";
    }
    return texto;
}
//esta es la opcion dos de el menu uno. 
void Menu_admin()
{
    contrasenia();
    
    int a, b;
    do
    {
        cout << "================================\n";
        cout << "|       MENU DE INGRESO        |\n";
        cout << "================================\n";
        cout << "| 1. Modificar Tienda          |\n";
        cout << "| 2. Cambiar pelicuals         |\n";
        cout << "| 3. Salir                     |\n";
        cout << "================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            break;

        case 2:
            system("cls");
            break;

        case 3:
            system("cls");
            b = 1;
            break;

        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (b != 1);

}
//Esta funcion es simplemente estetica se ve bastante bien.
void cargarAnimacion() {
    const char caracteresAnimacion[] = {'|', '/', '-', '\\'};
    const int numCaracteres = sizeof(caracteresAnimacion) / sizeof(caracteresAnimacion[0]);
    
    int indice = 0;
    
    for (int i = 0; i < 20; ++i) {
        cout << "Cargando " << caracteresAnimacion[indice] << "\r";
        this_thread::sleep_for(chrono::milliseconds(100));
        cout.flush();  // Limpiar el búfer de salida
        
        // Actualizar el índice para el siguiente carácter de animación
        indice = (indice + 1) % numCaracteres;
    }

    cout << "\nCarga completa!" << endl;
}
//Esta esta sirve para simular un cobro y en senia el cambio a dar el cambio.
void cobro(void){
int pago_realizado;
float total_efectivo;
do
{
    cout<<"ingrese el total con el que pagara"<<endl;
    cin>> total_efectivo ;cout<<"\n";
    if (total_efectivo>=Usuario[USING1].total)
    {
        cargarAnimacion;
        cout<<"su cambio es :"<<total_efectivo-Usuario[USING1].total<<endl;
        cout<<"\ngracias vuelva pronto";
        pago_realizado=1;
        
    }
    else
    {
        cout<<"el total INGRESADO es insuficiente";
        cargarAnimacion;
        cout<<"\nsaldo faltante"<<Usuario[USING1].total-total_efectivo;
    }
} while (pago_realizado!=1);


}
//F esta funcion es el menu de inicio con lo que se muestra al iniciar el sistema.
void menu_1(void)
{
    int a, b;
    do
    {
        cout << "================================\n";
        cout << "|       MENU DE INGRESO        |\n";
        cout << "================================\n";
        cout << "| 1. Admin                     |\n";
        cout << "| 2. Cliente                   |\n";
        cout << "| 3. Salir                     |\n";
        cout << "================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            Menu_admin();
            break;

        case 2:
            system("cls");
            menu_2();
            break;

        case 3:
            system("cls");
            b = 1;
            break;

        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (b != 1);
}
//F esta funcion menu2 es u sub menu del menu 1 opcion dos este conecta con las acciones que pued etomar el cliente.
void menu_2(void)
{
    int a, c;

    do
    {
        cout << "================================\n";
        cout << "|        MENU PRINCIPAL        |\n";
        cout << "================================\n";
        cout << "| 1. Ver Tienda                |\n";
        cout << "| 2. Ver Cartelera             |\n";
        cout << "| 3. Pagar                     |\n";
        cout << "| 4. Regresa                   |\n";
        cout << "================================\n";
        cin >> a;

        switch (a)
        {
        case 1:
            system("cls");
            menu_tienda();
            break;

        case 2:
            system("cls");

            break;
        case 3:
            system("cls");
            pagos();
            break;

        case 4:
            system("cls");
            c = 1;
            break;

        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }
    } while (c != 1);
}
//F esta funcion llama a distintas funciones para simular un pago 1.llama la funcion mostrar carrito. 2.Cobros. 3.Cargar animation. este es la simulacion completa de cobro.
void pagos(void)
{
    int d;
    do
    {
        cout << "================================\n";
        cout << "|      COMO DE SEA PAGAR       |\n";
        cout << "================================\n";
        cout << "|   1.EFECTIVO    2.TARJETA    |\n";
        cout << "================================\n";
        cin >> d;
        switch (d)
        {
        case 1:
            system("cls");
            cout << "================================\n";
            cout << "|    PAGANDO CON EFECTIVO       |\n";
            cout << "================================\n";
            cout << "|        SU CARRITO ES          |\n";
            cout << "================================\n";

            mostrar_carrito();
            cobro();
            cargarAnimacion();
            USING1++;
            index=0;
            system("pause");
            d=1;
            break;

        case 2:
            system("cls");
            
            cout << "================================\n";
            cout << "|      PAGANDO CON TARJETA      |\n";
            cout << "================================\n";
            cout << "|        SU CARRITO ES          |\n";
            cout << "================================\n";
            
            mostrar_carrito();
            cobro();
            cargarAnimacion();
            USING1++;
            index=0;
            d=1;
            system("pause");
            break;
        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }
    } while (d != 1);
}
//F este es el switch que permite adquirir productos: Defincion esta funcion toma los producto de la structura comida y las guarda en carrito[] una caracteristica de el struct cliente y se almacena.
void menu_tienda(void)
{
    int c, d;
    do
    {
        // ID=20 NOMBRE=24
        int x = 0;
        cout << "==========================================================\n";
        cout << "|                         CAFETERIA                      |\n";
        cout << "==========================================================\n";
        cout << "ID                    Nombre                        precio\n";
        for (int i = 0; i < 10; i++)
        {
            if (i < 10)
            {
                cout << Cafeteria[i].id << espaciar(1, 22) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 32) << Cafeteria[i].precio << endl;
            }
            else
            {
                cout << Cafeteria[i].id << espaciar(2, 22) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 32) << Cafeteria[i].precio << endl;
            }
        }
        cout << "11                     Regresar                            \n";
        cout << "===========================================================\n";
        cin >> c;
        switch (c)
        {
        case 1:
            agregar_al_carrito(0);
            break;
        case 2:
            agregar_al_carrito(1);
            break;
        case 3:
            agregar_al_carrito(2);
            break;
        case 4:
            agregar_al_carrito(3);
            break;
        case 5:
            agregar_al_carrito(4);
            break;
        case 6:
            agregar_al_carrito(5);
            break;
        case 7:
            agregar_al_carrito(6);
            break;
        case 8:
            agregar_al_carrito(7);
            break;
        case 9:
            agregar_al_carrito(8);
            break;
        case 10:
            agregar_al_carrito(9);
            break;    
        case 11:
            system("cls");
            d = 1;
            break;
        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (d != 1);
}
//Mostrar carrito mustra todos los productos adquiridos tambien de esta funcion se puede sacar el tiket de compra.
void mostrar_carrito()
{
    float o;
    cout << " ================="  << endl;
    for (int i = 0; i < index; i++){
        cout << i + 1 << ". Elemento: " << " " << Usuario[USING1].ListaComprasComida[i].producto << endl;  
        cout << i + 1 << ". Precio "<<  " $" << Usuario[USING1].ListaComprasComida[i].precio << endl;
        o+= Usuario[USING1].ListaComprasComida[i].precio;
    }
    Usuario[USING1].total=o;
    cout << " ================="  << endl << endl;
    cout<< "TOTAL = $ "<< Usuario[USING1].total << endl;
}
//F es ta funcion agrega a l carriro cuando es seleccionado en menu de tienda.
void agregar_al_carrito(int elementoCafeteria){

    int x = 0;
    system("cls");
    do
    {
        cout << "================================\n";
        cout << "|  DESEA AGREGAR AL CARRITO    |\n";
        cout << "================================\n";
        cout << "|    1. SI           2.NO      |\n";
        cout << "================================\n";
        cin >> x;
        switch (x)
        {
        case 1:
            Usuario[USING1].ListaComprasComida[index] = Cafeteria[elementoCafeteria];
            index++;
            break;
        case 2:
            x = 1;
            break;
        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (x != 1);
}
//F esto Muestra las salas de cine 
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
//F esto hace que las contrasenia
void contrasenia()
{
    int c = 0;
    string b,a,d;
    //Datos para que puedan ingresar al administrador
    string admin = "admin", passwo = "Oreo0404";

    do
    {
        system("cls");
        cout << "=============================================\n";
        cout << "|      INGRESE USUARIO Y PASSWORD           |\n";
        cout << "=============================================\n";
        cout << "| !USUARIO!                                 |\n";
        cout << "|  ";cin>>d;cout<<"                                         \n";
        cout << "| !CONTRASENIA!                             |\n";
        cout << "|  ";cin>>a;cout<<"                                         \n";
        cout << "=============================================\n";
        if (d == admin)
        {
            if (a == passwo )
            {
            b = "Password correcta\n";
            cout << b;
            system("pause");
            c = 1;
            }
            else if ( a!= passwo)
            {

            b = "Password incorrecta\n";
            cout << b;
            system("pause");
            }
        }
        else if ( d!= admin)
        {

            b = "Usuario incorrecto \n";
            cout << b;
            system("pause");
        }
    } while (c != 1);
}