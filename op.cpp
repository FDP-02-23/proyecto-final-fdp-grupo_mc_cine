#include "iostream"
#include "string"

using namespace std;

void contrasenia();
void cont();

main(void)
{
    contrasenia();
    return 0;
}

void cont()
{

    string a;
    cout << "Ingresa la password \n";
    cin >> a;
    contrasenia();
}

void contrasenia(void)
{
    int c = 0;
    string b, a;
    string pass = "admin";

    do
    {
        cout << "Ingresa la password \n";
        cin >> a;
        if (a == pass)
        {
            b = "Password correcta\n";
            cout << b;
            c = 1;
        }
        else if (a != pass)
        {

            b = "Password correcta\n";
            cout << b;
        }
    } while (c != 1);

    system("pause");
}