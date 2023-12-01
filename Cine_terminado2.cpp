#include <iostream>
#include <chrono>
#include <fstream>
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

string peliculas[8] = {
"El Faro - Robert Eggers", "Akira - Katsuhiro Ôtomo", "Cuentos de Terramar - Goro Miyazaki",
"the hateful eight - Quentin tarantino", "GodFellas - Martin Scorsese", "Island of dogs - Wes anderson", "El infierno - Luis Estrada",
"Supercool - Greg Mottola"
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
void mod_tienda();
void agregar();
void cambio(int);
void cambio_tienda();
void Cartelera ();
void Lunes();
void Martes();
void Miercoles();
void Jueves();
void Viernes();
void Sabado();
void Domingo();
void cam_pelis();
void Tiket_E();
void Tiket_T();
void pedir_y_imprimir(int a[],string b[],float c[],int d);

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
        cout << "| 2. Cambiar peliculas         |\n";
        cout << "| 3. Salir                     |\n";
        cout << "================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            mod_tienda();
            break;

        case 2:
            system("cls");
            cam_pelis();
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

    } while (b != 1 );

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
            Cartelera();
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
            Tiket_E();
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
            Tiket_T();
            USING1++;
            index=0;
            system("pause");
            d=1;
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
                cout << x + 1 << espaciar(1, 22) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 32) << Cafeteria[i].precio << endl;
            }
            else
            {
                cout << x + 1 << espaciar(1, 22) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 32) << Cafeteria[i].precio << endl;
            }
            x++;
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
//F esto hace que las contrasenia
void contrasenia()
{
    int c = 0, attemps = 0,attemps1 = 0, limits = 3;
    string b,a,d;
    //Datos para que puedan ingresar al administrador
    string admin = "admin", passwo = "Oreo0404";

    do
    {   
        if(attemps == limits)
        {
            cout<< " Intentos maximos alcanzados ";
            c = 1; 
            break;            
        }
        system("cls");
        cout << "=============================================\n";
        cout << "|      INGRESE USUARIO Y PASSWORD           |\n";
        cout << "=============================================\n";
        cout << "| !USUARIO!                                 |\n";
        cout << "|  ";cin>>d;cout<<"                                         \n";    
        if ( d!= admin)
        {

            b = "Usuario incorrecto \n";
            cout << b;
            attemps++;
            cout<<"intentos: "<<attemps<<"\n";
            system("pause");
            system("cls");
        }

        cout << "| !CONTRASENIA!                             |\n";
        cout << "|  ";cin>>a;cout<<"                                         \n";
        cout << "=============================================\n";
        if ( a!= passwo)
        {
            b = "Password incorrecta\n";
            cout << b;
            attemps1++;
            cout<<"intentos: "<<attemps1<<"\n";
            system("pause");
            system("cls");
        }

        if (a == passwo  && d == admin)
            {
            b = "Password correcta y Admin correctos \n";
            cout << b;
            system("pause");
            system("cls");
            c = 1;
        }
        else if(attemps == limits || attemps1 == limits)
        {
            cout<< " Intentos maximos alcanzados ";  
            system("pause");
            system("cls"); 
            exit(0);           
        }
        
    } while (c != 1);
}

void mod_tienda(){
int a, b;
do
{   
        system("cls");
        cout << "================================\n";
        cout << "|       MENU DE INGRESO        |\n";
        cout << "================================\n";
        cout << "| 1. Cambiar productos         |\n";
        cout << "| 2. Agregar productos         |\n";
        cout << "| 3. Salir                     |\n";
        cout << "================================\n";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            cambio_tienda();
            break;

        case 2:
            system("cls");
            agregar();
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
    } while (b != 1 );
}

void agregar(){
int d , limite = 6;
string salida, res = "n", res1 = "N";
do
{
if (limite == 10)
{
    cout<<"Se ha alcanzado el valor maximo de productos \n";
    system("pause");
    d = 1;
}
else {
    do{   
    for (int i = 6; i <10; i++){
    limite++;
    system("cls");
    cout<<endl<<"\n Agregue su comida a desear: "; cin>>Cafeteria[i].producto;
    cout<<" \n Ingrese el precio de su producto: "; cin>>Cafeteria[i].precio;
    cout<<"\n Quiere continuar agregando productos y/n ? "; cin>> salida;
    if (salida  == res ||  salida == res1 ){
        cout<<"\n Vuelva pronto regresa al menu anterior \n";
        system("pause");
        d = 1;
        break;
    }
    } 
    if( limite == 9 ){
    cout<<"Se han ingresado los 10 items ";
    system("pause");
    d = 1;
    break;
    }
    d = 1;
    }while (d != 1);
    }
    limite += limite;
} while (d != 1);
    
    }

 void cambio_tienda(void)
{
    int c, d;
    do
    {
        // ID=20 NOMBRE=24
        system("cls");
        int x = 0;
        cout << "==========================================================\n";
        cout << "|              Elije el producto a cambiar               |\n";
        cout << "==========================================================\n";
        cout << "ID                    Nombre                        precio\n";
        for (int i = 0; i < 10; i++)
        {
            if (i < 10)
            {
                cout << x << espaciar(1, 22) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 32) << Cafeteria[i].precio << endl;
            }
            else
            {
                cout << x << espaciar(1, 22) << Cafeteria[i].producto << espaciar(Cafeteria[i].producto.size(), 32) << Cafeteria[i].precio << endl;
            }
            x++;
        }
        cout << "11                     Regresar                            \n";
        cout << "===========================================================\n";
        cout << "Ingresa el producto a cambiar del 0 al 9 \n";
        cin >> c;
        switch (c)
        {
        case 0:
            system("cls");cambio(c);
            break;
        case 1:
            system("cls");cambio(c);
            break;
        case 2:
            system("cls");cambio(c);
            break;
        case 3:
            system("cls");cambio(c);
            break;
        case 4:
            system("cls");cambio(c);
            break;
        case 5:
            system("cls");cambio(c);
            break;
        case 6:
            system("cls");cambio(c);
            break;
        case 7:
            system("cls");cambio(c);
            break;
        case 8:
            system("cls");cambio(c);
            break;
        case 9:
            system("cls");cambio(c);
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

void cambio(int c){
    system("cls");
    cout<<"Elegiste: " <<Cafeteria[c].producto << " con el precio de  " << Cafeteria[c].precio << endl;
    cout<<endl<<"\n Agregue su comida a desear: "; cin>>Cafeteria[c].producto;
    cout<<" \n Ingrese el precio de su producto: "; cin>>Cafeteria[c].precio;
    
}
   
void lunes(){
    int a[4];
    int c=0;
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Lunes " << espaciar (2, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[0]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Lunes " << espaciar (2, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[0]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
       a[i]=j;
    }
    cout<<endl<<endl;
    pedir_y_imprimir(a,arrayL,arrayLp,c);
}
void Martes(){
    int T[4];
    int c=0;
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Martes " << espaciar (3, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[0]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Martes " << espaciar (3, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[0]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
        T[i]=j;
        cout << "     _________________________________________________________________________________________________________________\n";
        
    }
    cout<<endl<<endl;
    pedir_y_imprimir(T,arrayL,arrayLp,c);
}
void Miercoles(){
    int a[4];
    int c=1;
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Miercoles " << espaciar (6, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[1]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Miercoles " << espaciar (6, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[1]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
        a[i]=j;
    }
    cout<<endl<<endl;
    pedir_y_imprimir(a,arrayL,arrayLp,c);
}
void Jueves(){
    int a[4];
    int c=0;
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Jueves " << espaciar (3, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[0]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Jueves " << espaciar (3, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[0]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
        a[i]=j;
    }
    cout<<endl<<endl;
    pedir_y_imprimir(a,arrayL,arrayLp,c);
}
void Viernes(){
    int a[4];
    int c=3;
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Viernes " << espaciar (4, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[3]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Viernes " << espaciar (4, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[3]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }

        cout << "     _________________________________________________________________________________________________________________\n";
        a[i]=j;
    }
    cout<<endl<<endl;
    pedir_y_imprimir(a,arrayL,arrayLp,c);
}
void Sabado(){
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    int a[4];
    int c=3;
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Sabado " << espaciar (3, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[3]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Sabado " << espaciar (3, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[3]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
        cout << "     _________________________________________________________________________________________________________________\n";
        int a[i];a[i]=j;
    }
    cout<<endl<<endl;
    pedir_y_imprimir(a,arrayL,arrayLp,c);
}
void Domingo(){
    // inicializamos la semilla para generar numeros del tiempo real de la pc
    srand(time(NULL));
    int a[4];
    int c=3;
    cout<<"     _________________________________________________________________________________________________________________\n";
    cout<<"     |   Dia           Horarios          Precios     salas               peliculas                       estado      |\n";
    cout<<"     -----------------------------------------------------------------------------------------------------------------\n";
    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{3.50, 2.50, 1.25,4.50};
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
            cout<<"     | "<<" Domingo " << espaciar (4, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[3]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),39)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
            else if (disponibles>10)
            {
            cout<<"     | "<<" Domingo " << espaciar (4, 6)<< arrayL[i]<< espaciar(1, 6)<< arrayLp[3]<<espaciar (1, 11)<<i+1<<espaciar(4,10)<<peliculas[j]<<espaciar(peliculas[j].size(),38)<<" disp:"<<disponibles<<"/25 ("<<lleno<<")|\n";
            }
        cout << "     _________________________________________________________________________________________________________________\n";
       a[i]=j ;
    }
    cout<<endl<<endl;
    pedir_y_imprimir(a,arrayL,arrayLp,c);
}
void pedir_y_imprimir(int a[],string b[],float c[],int d)
{   
   int  w= 0;
    do
    {
    ofstream archivo;
    int personas,peli,compro;
    float pago,total;
        cout<<"eliga la sala de la pelicula, Si esta lleno elija otra\n";
        cout<<"11-Salir\n";
        cin>>peli;
        if (peli == 11)
        {
            system("cls");
            w= 1;
            break;
        }
        
        peli = peli - 1;
        cout<<"por favor ingrese la cantidad de personas\n ";
        cin>>personas;
        cout<<"usted a seleccionado la sala# "<<peli<<" y ";
        if (personas<0)
        {
        cout<<"ingrese una cantidad valida\n";
        }
        else if (personas>0)
        {
        cout<<personas<<" personas\n";
        }
        int z;
    do
    {
        cout << "================================\n";
        cout << "|      COMO DESEA PAGAR       |\n";
        cout << "================================\n";
        cout << "|   1.EFECTIVO    2.TARJETA    |\n";
        cout << "================================\n";
        cin >> z;
        switch (z)
        {
        case 1:
            system("cls");
            cout << "================================\n";
            cout << "|    PAGANDO CON EFECTIVO       |\n";
            cout << "================================\n";
            cout << "|        SU CARRITO ES          |\n";
            cout << "================================\n\n";
            cout << "================================\n";
            cout << "sala: "<<peli<<"\n\n";
            cout << "pelicula: "<<peliculas[a[peli]]<<"\n\n";
            total=c[d]*personas;
            cout << "canidad de personas "<<personas<<"\n";
            cout << "Precio total: "<<total<<"\n";
            cout << "================================\n";
            mostrar_carrito();
            cobro();
            system("pause");
            do
            {
            system("cls");
            cout<<"ingrese el valor a pagar de las peliculas su total "<<total<<"  :";cin>>pago;
            if(pago >= total)
            {
            cout<<"su cambio es"<<pago-total;
            compro=1;
            }
            else
            {
            cout<<"el monto puesto es insuficiente";
            }
            }while(compro!=1);
            cargarAnimacion();
            archivo.open("tiquet.txt",ios::out);
            if (archivo.fail())
            {
                cout<<"no se pudo abir el archivo";
                exit(1);
            }
            archivo<< "=========================================\n";
            archivo<< "sala:"<<peli<<"\n";
            archivo<< "pelicula:"<<peliculas[a[peli]]<<"\n";
            total=c[d]*personas;
            archivo<< "Precio "<<total<<"\n";
            archivo<< "cantidad de personas "<<personas<<"\n";
            archivo<< "=========================================\n";
            archivo<< "========================================="<< endl<< endl;
            archivo<< "TOTAL Efectivo = $ "<< total << endl;
            archivo<< "========================================="<< endl;
            archivo<< "         GRACIAS POR SU COMPRA           "<< endl;
            archivo.close();
            system("pause");
            z=1;
            break;

        case 2:
            system("cls");
            
            cout << "================================\n";
            cout << "|      PAGANDO CON TARJETA      |\n";
            cout << "================================\n";
            cout << "|        SU CARRITO ES          |\n";
            cout << "================================\n";
            cout << "sala:"<<peli<<"\n";
            cout << "pelicula:"<<peliculas[a[peli]]<<"\n";
            total=c[d]*personas;
            cout << "canidad de personas "<<personas<<"\n";
            cout << "Precio "<<total<<"\n";
            cout << "================================\n";
            cout<<"pago realizado";
            cargarAnimacion();
            archivo.open("tiquet.txt",ios::out);
            if (archivo.fail())
            {
                cout<<"no se pudo abir el archivo";
                exit(1);
            }
            archivo<< "=========================================\n";
            archivo<< "sala:"<<peli<<"\n";
            archivo<< "pelicula:"<<peliculas[a[peli]]<<"\n";
            archivo<< "Hora:"<<b<<"\n"; total=c[d]*personas;
            archivo<< "Precio"<<total<<"\n";
            archivo<< "cantidad de personas"<<personas<<"\n";
            archivo<< "=========================================\n";
            archivo<< "========================================="<< endl<< endl;
            archivo<< "TOTAL Efectivo = $ "<< total << endl;
            archivo<< "========================================="<< endl;
            archivo<< "         GRACIAS POR SU COMPRA           "<< endl;
            archivo.close();
            system("pause");
            z=1;
            break;
        default:
            system("cls");
            cout << "\n*ERROR EL NUMERO INGRESADO ES INCORRECTO*\n";
            break;
        }
    } while (z != 1);
    } while(w != 1);
}
void Cartelera()
{   
    int regresar,peli,personas, a;
    do
    {      
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
    cout << "| 11.Regresar                  |\n";
    cout << "================================\n";
    cin >> a; 
    system("cls");
    if (a== 11)
    {
        break;
    }
    
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
        case 11:
            system("cls");

        }
    }while(a!=11);

    
}

void cam_pelis()
{
int c = 0;
do{
int n = 0, eleccion = 0;
string newer;
cout << "_____________________________________________________________\n";
cout<<"| Num.          PELICULA                                       |\n";
cout << "_____________________________________________________________|\n";
cout<< endl;



for (int i = 0; i < 8; i++)
        {
            cout<<"  "<<" " <<i<<" "  << espaciar (2, 6)<< peliculas[i]<<")|\n";
        }
    cout<<endl;

cout<< "Ingresa la pelicula que quieres modificar:  / 11 para salir \n";
cin>>n;
if (n == 11)
{
    c =1;
    system("cls");
    break;
}

system("cls");
cout<<"Has ingresado la pelicula: " << peliculas[n]<<"\n";
cout<<"Ingresa la nueva pelicula: ";
cin>>newer; cout<<endl;
peliculas[n] = newer;
system("cls"); cout<<"1 Continuar  /  2 Regresar \n";
cin>>eleccion;
cout<<endl;

if (eleccion == 2)
{
    c =1;
    system("cls");
    break;
}

else{
    system("cls");
    cout<<"continuamos"<<endl; system("pause");
}
}while(c != 1);
}
//Esta funcion sirve para escribir el y crear el tiket 
void Tiket_T()
{
    string a;
    int t;
ofstream archivo;
archivo.open("texto.txt",ios::out);
if (archivo.fail())
{
    cout<<"no se pudo abir el archivo";
    exit(1);
}
archivo<< "=========================================\n";
archivo<< "|            Cine Mc CINE               |\n";
archivo<< "=========================================\n";
archivo<< " Fecha de Autorizacion:        11/30/2023\n";
archivo<< " Caja 1                                  \n";
archivo<< " Cliente                                 \n";
float o;
archivo<< "========================================="<< endl;
    for (int i = 0; i < index; i++){
        archivo<< i + 1 << ". Elemento: " << " " << Usuario[USING1].ListaComprasComida[i].producto << endl;  
        archivo<< i + 1 << ". Precio "<<  " $" << Usuario[USING1].ListaComprasComida[i].precio << endl;
        o+= Usuario[USING1].ListaComprasComida[i].precio;
    }
    Usuario[USING1].total=o;
archivo<< "========================================="<< endl<< endl;
archivo<< "TOTAL Efectivo = $ "<< Usuario[USING1].total << endl;
archivo<< "========================================="<< endl;
archivo<< "         GRACIAS POR SU COMPRA           "<< endl;
archivo.close();
}
//Esta funcion sirpara escribir el y crear el tiket 
void Tiket_E()
{
    string a;
    int t;
ofstream archivo;
archivo.open("texto.txt",ios::out);
if (archivo.fail())
{
    cout<<"no se pudo abir el archivo";
    exit(1);
}
archivo<< "=========================================\n";
archivo<< "|            Cine Mc CINE               |\n";
archivo<< "=========================================\n";
archivo<< " Fecha de Autorizacion:        11/30/2023\n";
archivo<< " Caja 1                                  \n";
archivo<< " Cliente                                 \n";
float o;
archivo<< "========================================="<< endl;
    for (int i = 0; i < index; i++){
        archivo<< i + 1 << ". Elemento: " << " " << Usuario[USING1].ListaComprasComida[i].producto << endl;  
        archivo<< i + 1 << ". Precio "<<  " $" << Usuario[USING1].ListaComprasComida[i].precio << endl;
        o+= Usuario[USING1].ListaComprasComida[i].precio;
    }
    Usuario[USING1].total=o;
archivo<< "========================================="<< endl<< endl;
archivo<< "TOTAL Efectivo = $ "<< Usuario[USING1].total << endl;
archivo<< "========================================="<< endl;
archivo<< "         GRACIAS POR SU COMPRA           "<< endl;
archivo.close();
}