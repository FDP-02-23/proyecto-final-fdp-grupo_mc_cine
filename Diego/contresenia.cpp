#include <iostream>
#include <string>

using namespace std;

void contrasenia();

main(void)
{
    contrasenia();
    return 0;
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