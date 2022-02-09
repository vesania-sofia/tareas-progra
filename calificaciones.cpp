#include <iostream>

using namespace std;

int main()
{
  int fisica = 0;
  int procesoad = 0;
  int calculo = 0;
  int progra = 0;
  int derechoinf = 0;
    cout << "Ingrese la nota de fisica" << endl;
    cin >> fisica;
    if(fisica == 100  )
    {
        cout << " alumno prodijio" << endl;
    }
    else
    if(fisica <= 99 && fisica >= 68)
    {
        cout << "alumno aprobado; buen tarbajo" << endl;
    }
    else
    if(fisica >= 61)
    {
        cout << "alumno casi reprobado" << endl;
    }
    else
    {
        cout << "alumno reprobado" << endl;
    }
    cout << "Ingrese la nota de proceso administrativo" << endl;

    cin >> procesoad;
    if(procesoad== 100 )
    {
        cout << " alumno prodijio" << endl;
    }
    else
    if(procesoad  <= 99 && procesoad >= 68)
    {
        cout << "alumno aprobado; buen tarbajo" << endl;
    }
    else
    if(procesoad >= 61)
    {
        cout << "alumno casi reprobado" << endl;
    }
    else
    {
        cout << "alumno reprobado" << endl;
    }
    cout << "Ingrese la nota de calculo" << endl;

    cin >> calculo;
    if(calculo == 100 )
    {
        cout << " alumno prodijio" << endl;
    }
    else
    if(calculo  <= 99 && calculo >= 68)
    {
        cout << "alumno aprobado; buen tarbajo" << endl;
    }
    else
    if(calculo >= 61)
    {
        cout << "alumno casi reprobado" << endl;
    }
    else
    {
        cout << "alumno reprobado" << endl;
    }
    cout << "Ingrese la nota de programación" << endl;

    cin >> progra;
    if(progra == 100 )
    {
        cout << " alumno prodijio" << endl;
    }
    else
    if(progra <= 99 && progra >= 68)
    {
        cout << "alumno aprobado; buen tarbajo" << endl;
    }
    else
    if(progra >= 61)
    {
        cout << "alumno casi reprobado" << endl;
    }
    else
    {
        cout << "alumno reprobado" << endl;
    }
    cout << "Ingrese la nota de derecho informatico" << endl;

    cin >> derechoinf;
    if(derechoinf == 100 )
    {
        cout << " alumno prodijio" << endl;
    }
    else
    if(derechoinf <= 99 && derechoinf >= 68)
    {
        cout << "alumno aprobado; buen tarbajo" << endl;
    }
    else
    if(derechoinf >= 61)
    {
        cout << "alumno casi reprobado" << endl;
    }
    else
    {
        cout << "alumno reprobado" << endl;
    }


    return 0;
}

