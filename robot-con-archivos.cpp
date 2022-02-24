#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void SaveFile(string Nombre, char GameMap[10][10])
{
    ofstream FileMap("mapa2.txt");
    if(FileMap.is_open())
    {
        FileMap << Nombre << endl;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
               FileMap << GameMap[i][j];
            }
            FileMap << endl;
        }
    }

    FileMap.close();
}
void DrawMap(int posX , int posY , char GameMap[10][10])
{
    GameMap[posX][posY] = 'R';
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if (GameMap[i][j] == 'R' )
            {

                if ( i != posX || j != posY )
                {
                    GameMap[i][j] = '0';
                }

            }
            cout << GameMap[i][j];
        }
        cout << endl;
    }
}
int PosicionRobot(char eje, char GameMap[10][10])
{
    int posicion=0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 0; j++)
        {
            if(GameMap[i][j] == 'R' && eje == 'x')
            {
                posicion = i;
            }
            else
            if(GameMap[i][j] == 'R' && eje == 'y')
            {
                posicion = j;
            }
        }
    }
    return posicion;
}

string OpenFile(char GameMap[10][10])
{
    ifstream FileMap("mapa2.txt");
    string line;
    string name="No encontre tu nombre";
    int renglon = 0;
    int row = 0;

    if(FileMap.is_open())
    {
        while(getline(FileMap, line))
        {
            if(renglon == 0)
                name = line;
            else
            {
                for(int i = 0; i < 10; i++)
                {
                        GameMap[row][i] = line[i];
                }
                row++;
            }
            renglon++;
        }

        FileMap.close();
    }
    else
    {
        cout << "Fatal... no se puede abrir el archivo" << endl;
    }
    return name;
}

int main()
{
    int posX=1;
    int posY=1;
    bool isGameOver = false;
    char Input = ' ';
    char GameMap[10][10];
    string NamePlayer = "";
    NamePlayer = OpenFile(GameMap);
    cout << "Bienvenido/a " << NamePlayer << endl;
    posX = PosicionRobot('x', GameMap);
    posY = PosicionRobot('y', GameMap);
    DrawMap(posX, posY, GameMap);

    while(isGameOver == false)
    {
        cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
        cout << "Controles Teclas --> p(Salida)" << endl;
        cin >> Input;

        switch (Input)
        {
                   case 'a':
            if(posX!=1)
            {
            posX-=1;
            }
            break;
        case 'd':
            if(posY!=8)
            {
            posY+=1;
            }

            break;
        case 'w':
            if(posY!= 1)
            {
            posY-=1;
            }
            break;
        case 's':
             if(posX!=8)
            {
            posX+=1;
            }
            break;
        case 'p':
            isGameOver=true;
             break;
        default:
            cout << "Tecla Invalida" << endl;
            break;

        }
        DrawMap(posX, posY, GameMap);
    }

    SaveFile(NamePlayer, GameMap);

    return 0;
}

