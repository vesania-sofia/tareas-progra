#include <iostream>
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
int main(){
  int posX=0;
  int posY=0;
  char map[10][10]={{'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'}};
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
            posX-=1;
            break;
        case 'd':
            posX+=1;
            break;
        case 'w':
            posY-=1;
            break;
        case 's':
            posY+=1;
            break;
        case 'p':
            gameOver=true;
        default:
            break;
     }

     /* ciclo utilizado if...else*/

    if (posX > 9){
        cout << "te vas a caer mijo" << endl;
        posX = 9;
         /* derecha*/
    }


    else if (posX < 0){
        cout << "a donde vas we" << endl;
        posX = 0;
        /* izquierda*/
    }


    if (posY > 9){
        cout << "hagase pa alla" << endl;
        posY = 9;
       /* abajo*/
    }

    else if (posY < 0){
        cout << "te gusta buscar el peligro veda?" << endl;
        posY = 0;
        /* arriba*/
    }


      drawMap(posX,posY,map);

      }
 return 0;

}
