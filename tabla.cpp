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

void lunes(){
    cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};

    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Lunes " << espacio (2, 8)<< arrayL[i]<< espacio(1, 10)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}


void Martes(){
    cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Martes" << espacio (2, 8)<< arrayL[i]<< espacio(1, 10)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}

void Miercoles(){
    cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Miercoles" << espacio (2, 8)<< arrayL[i]<< espacio(1, 8)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}
void Jueves(){
    cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Jueves" << espacio (2, 8)<< arrayL[i]<< espacio(1, 9)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}

void Viernes(){
   cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Viernes" << espacio (2, 8)<< arrayL[i]<< espacio(1, 9)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}

void Sabado(){
    cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Sabado" << espacio (2, 8)<< arrayL[i]<< espacio(1, 9)<< arrayLp[3]<<endl;
    }
    
    cout<<endl<<endl;

}

void Domingo(){
    cout<<" ________________________________________________________________________\n";
    cout<<"| Dia                Horarios                       Precios              |\n";
    cout<<" ------------------------------------------------------------------------\n";

    string arrayL[4]{"09:00 AM a 10:30 AM","11:30 AM a 01:30 PM", "02:00 PM a 04:00 PM","06:00 PM a 08:00 PM"};
    float arrayLp[4]{2.50, 3.50, 1.25,4.50};
    int c = 0;

    for (int i = 0; i < 4; i++)
    {
        c = random (0,7);
        cout<< "Domingo" << espacio (2, 7)<< arrayL[i]<< espacio(1, 10)<< arrayLp[0]<<endl;
    }
    
    cout<<endl<<endl;

}