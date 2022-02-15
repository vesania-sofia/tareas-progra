#include <iostream>

using namespace std;

void Prints(string message)
{
    cout << message << endl;
}
int Sumatoria (int num1, int num2)
{
    return num1+num2;
}

int Restar (int num1, int num2)
{
    return num1-num2;
}

int Dividir (int num1, int num2)
{
    return num1/num2;
}

int Multiplicar (int num1, int num2)
{
    return num1*num2;
}

int main()
{
    int num1,num2;
    Prints("Ingrese el primer valor numerico: ");
    cin >> num1;
    Prints("ingrese el segundo valor numerico: ");
    cin >> num2;
    int sum = Sumatoria(num1,num2);
    int rest = Restar(num1,num2);
    int div = Dividir(num1,num2);
    int mult = Multiplicar(num1,num2);
    Prints("la suma de los numeros es: ");
    cout << (sum) << endl;
    Prints("la resta de los numeros es: ");
    cout << (rest) << endl;
    Prints("la division de los numeros es: ");
    cout << (div) << endl;
    Prints("la multiplicacion de los numeros es: ");
    cout << (mult) << endl;
    return 0;
}

