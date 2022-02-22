
#include <iostream>
#include <fstream>
using namespace std;
void drawMap(int posX,int posY,char gameMap[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(posX==j && posY==i)
        {
            cout<<"R";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}
int main()
{

    ofstream myfile ("mapa.txt");
    string nombre = "";
    cout <<" Bienvenid@ ingresa tu nombre :" <<endl;
    cin >> nombre;
    int izquierda=0,derecha=0,arriba=0,abajo=0,NoInt=0;
    int posX=1;
    int posY=1;
    char map[10][10]={{'1','1','1','1','1','1','1','1','1','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		   {'1','0','0','0','0','0','0','0','0','1'},
		  {'1','1','1','1','1','1','1','1','1','1'}};
  char teclado;
  bool gameOver= false;
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout << "Bienvenido(a)"  << endl;
    cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
    cout << "Controles Teclas --> p(Salida)" << endl;
    cin >> teclado;
    switch (teclado)
    {
        case 'a':
             if(posX!=1)
                {
            posX-=1;
            izquierda+=1;
             }
            break;

        case 'd':
             if(posX!=8){
            posX+=1;
             derecha+=1;
             }
            break;

        case 'w':
             if(posY!=1){
            posY-=1;
             arriba+=1;
             }
            break;

        case 's':
             if(posY!=8){
            posY+=1;
             abajo+=1;
             }
            break;

        case 'p':
            gameOver=true;
        default:
            break;
    }
  drawMap(posX,posY,map);
  }
  NoInt=izquierda+derecha+arriba+abajo;
  if (myfile.is_open())
  {
      myfile << "nombre:" <<endl;
      myfile <<nombre<<endl;
      myfile <<"Numero de iteraciones para la iz : " <<endl;
      myfile <<izquierda<<endl;
      myfile <<"Numero de iteraciones para la dere : " <<endl;
      myfile <<derecha<<endl;
      myfile <<"Numero de iteraciones para arri : " <<endl;
      myfile <<arriba<<endl;
      myfile <<"Numero de iteraciones para ab : " <<endl;
      myfile <<abajo<<endl;
      myfile << "Numero de iteraciones totales :" <<endl;
      myfile <<NoInt<<endl;
      myfile.close();
  }

else cout << "Unable to open file"<<endl;
 return 0;
}
