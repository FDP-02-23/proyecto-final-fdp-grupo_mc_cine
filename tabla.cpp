#include "iostream"
#include "string"
#include "random"

using namespace std;

string espacio(int tam, int valor){
 
    int espacio = 0; 
    string texto = "";

    espacio = valor - tam;
    for (int i = 0; i < espacio; i++)
    {
        texto = texto + "  ";
    }
    
    return texto; 
}
int random(int min, int max){

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> distribution(min, max);

    return distribution(gen); 

}

int random();
void lunes();
void Martes();
void Miercoles();
void Jueves();
void Viernes(); 
void Sabado();
void Domingo();
void menu();

main()
{
    menu();


    return 0;
}


void menu (){
    int a;
    cout << "================================\n";
    cout << "|       Elige Un dia de        |\n";
    cout << "================================\n";
    cout << "| 1. Lunes                     |\n";
    cout << "| 2. Martes                    |\n";
    cout << "| 3. Miercoles                 |\n";
    cout << "| 4. Juevs                     |\n";
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


void lunes(){
    cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
       string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Lunes " << espacio (2, 8)<< arrayL[i]<< espacio(1, 10)<< arrayLp[0]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}


void Martes(){
     cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

    puesto.morning = "09:00 AM a 10:30 AM";
    puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Martes" << espacio (2, 8)<< arrayL[i]<< espacio(1, 10)<< arrayLp[0]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}

void Miercoles(){
     cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Miercoles" << espacio (2, 7)<< arrayL[i]<< espacio(1, 9)<< arrayLp[0]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}
void Jueves(){
     cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Jueves" << espacio (2, 8)<< arrayL[i]<< espacio(1, 9)<< arrayLp[0]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}

void Viernes(){
     cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
       string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Viernes" << espacio (2, 8)<< arrayL[i]<< espacio(1, 9)<< arrayLp[0]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}

void Sabado(){
     cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Sabado" << espacio (2, 8)<< arrayL[i]<< espacio(1, 9)<< arrayLp[3]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}

void Domingo(){
     cout<<" ________________________________________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios                  Pelicula                    |\n";
    cout<<" --------------------------------------------------------------------------------------------------------\n";

    string producto;
    float precio = 0.0;

    struct horario
    {
        string morning, lunch, afternoon, evening;
        float precio1, precio2, precio3, precio4 ,precio5;
        string movie1,movie2,movie3, movie4, movie5, movie6, movie7, movie8 ;

    };
    horario puesto;

     puesto.morning = "09:00 AM a 10:30 AM";
     puesto.lunch = "11:30 AM a 01:30 PM";
    puesto.afternoon = "02:00 PM a 04:00 PM";
    puesto.evening = "06:00 PM a 08:00 PM"; 
    puesto.precio1 = 2.50;
    puesto.precio2 = 3.50;
    puesto.precio3 = 1.25;
    puesto.precio4 = 4.50;
    puesto.movie1 = "El Faro - Robert Eggers";
    puesto.movie2 ="Akira - Katsuhiro Otomo";
    puesto.movie3 ="Cuentos de Terramar - Goro Miyazaki";
    puesto.movie4 ="the hateful eight - Quentin tarantino";
    puesto.movie5 ="GodFellas - Martin Scorsese";
    puesto.movie6 ="Island of dogs - Wes anderson ";
    puesto.movie7 ="El infierno - Luis Estrada ";
    puesto.movie8 ="Supercool - Greg Mottola";

   string arrayL[4]{puesto.morning, puesto.lunch, puesto.afternoon, puesto.evening};
   float arrayLp[4]{puesto.precio1, puesto.precio2, puesto.precio3, puesto.precio4};
   string arrayM[8]{puesto.movie1, puesto.movie2, puesto.movie3, puesto.movie4, puesto.movie5, puesto.movie6, puesto.movie7, puesto.movie8};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Domingo" << espacio (2, 7)<< arrayL[i]<< espacio(1, 10)<< arrayLp[0]<<espacio(1,7)<<arrayM[c]<<endl;
    }
    
    cout<<endl<<endl;

}