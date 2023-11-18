#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

struct comida
{
    int id;
    string producto;
    float precio;
};
struct cine
{
    string pelicula;
    float presio_peli;
};
struct Descuento
{
    string nombreProducto;
    float porcentajeDescuento;
};
struct Cliente
{
    // ticket ComprasPelicula;
    comida ListaComprasComida[10];
    string peli;
    float total;
};
struct factura
{
    comida producto;
    int cantidad;
};
string espaciar(int tamanio, int valor)
{
    int espasio = 0;
    string texto = "";

    espasio = valor - tamanio;

    for (int i = 0; i < espasio; i++)
    {
        texto = texto + " ";
    }
    return texto;
}
void cargaranimation();
void menu_1();
void menu_2();
void pagos();
void agregar_al_carrito(int);
void mostrar_carrito();
void menu_tienda();
// Declarar los productos
comida Cafeteria[10] = {
    {1, "Agua", 2.50},
    {2, "Palomitas", 4.00},
    {3, "Soda", 2.00},
    {4, "Papas", 2.50},
    {5, "Pizza", 2.50},
    {6, "Nachos", 5.00}
};
Cliente Usuario;
int index = 0;
int main(void)
{
    menu_1();
    cout << "GRACIS POR ACCEDER AL SISTEMA DE MAC CINE\n";
    system("pause");
}

void cargarAnimacion() {
    cout << "Cargando ";
    for (int i = 0; i < 10; ++i) {
        cout << ".";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << " Completo!" << endl;
}

void cobro( ){
int pago_realizado;
int total_efectivo;

do
{
    cout<<"ingrese el total con el que pagara"<<endl;
    cin>> total_efectivo ;cout<<"\n";
    if (total_efectivo>=Usuario.total)
    {
        cargarAnimacion;
        cout<<"su cambio es :"<<total_efectivo-Usuario.total<<endl;
        cout<<"gracias vuelva pronto";
        pago_realizado=1;
        
    }
    else
    {
        cout<<"el total ingresado es insuficiente";
        cargarAnimacion;
        cout<<"saldo faltante"<<Usuario.total-total_efectivo;
    }
} while (pago_realizado!=1);


}

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
            cout << "\n*ERROR EL NUMERO IGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (b != 1);
}

void menu_2(void)
{
    int a, c;

    do
    {
        cout << "================================\n";
        cout << "|        MENU PRINSIPAL        |\n";
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
            cout << "\n*ERROR EL NUMERO IGRESADO ES INCORRECTO*\n";
            break;
        }
    } while (c != 1);
}

void pagos(void)
{
    int d;
    do
    {
        cout << "================================\n";
        cout << "|  DESEA AGREGAR AL CARRITO    |\n";
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
            system("pause");
            d=1;
            break;

        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO IGRESADO ES INCORRECTO*\n";
            break;
        }
    } while (d != 1);
}

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
                cout << Cafeteria[i].id << espaciar(1, 20) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 12) << Cafeteria[i].precio << endl;
            }
            else
            {
                cout << Cafeteria[i].id << espaciar(1, 20) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 12) << Cafeteria[i].precio << endl;
            }
        }
        cout << "11                     Regresar                            N\n";
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
            cout << "\n*ERROR EL NUMERO IGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (d != 1);
}

void mostrar_carrito(){
    float o;
    cout << " ================="  << endl;
    for (int i = 0; i < index; i++){
        cout << i + 1 << ". Elemento: " << " " << Usuario.ListaComprasComida[i].producto << endl;  
        cout << i + 1 << ". Precio "<<  " $" << Usuario.ListaComprasComida[i].precio << endl;
        o+= Usuario.ListaComprasComida[i].precio;
    }
    Usuario.total=o;
    cout << " ================="  << endl << endl;
    cout<< "TOTAL = $ "<< Usuario.total << endl;
}

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
            Usuario.ListaComprasComida[index] = Cafeteria[elementoCafeteria];
            index++;
            break;
        case 2:
            x = 1;
            break;
        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO IGRESADO ES INCORRECTO*\n";
            break;
        }

    } while (x != 1);
}










//si necesito ayuda en el proyecto 000199921 el puede ayudar