//generar matriz 10x10 letras al azar 
#include <iostream>                    //mete y saca informacion
#include <cstdlib>                           //contiene muchas cosas, entre ellas el generador de numeros aleatorios
#include <ctime>                                  //permite jugar con el tiempo
using namespace std;
int main (){
    char matriz[10][10];
    int fil,col;
    int pos_letra;                        //Aqui guardo mis numeros 
    char salida;
    int pos_x, pos_y; 
    int semilla;                                 //como un float pero con mas precision para definir la semilla (doble bits
    semilla = time(0);
    srand(semilla);
    //Rellenamos la matriz
    for(fil=0; fil<10; fil++){
        for(col=0; col<10; col++){
            matriz[fil][col] = rand()%25+65;
        }
 
     }
    cout<<"\nMATRIZ vieja";
    cout << "\n";
    //Mostrar por pantalla
    for(fil=0; fil<10; fil++){
     for(col=0; col<10; col++){
            cout<<matriz[fil][col];
        }
        cout << "\n";
    }
    //Generamos la posición del asterisco al azar
    pos_x=rand()%10;
    pos_y=rand()%10;
    matriz[pos_x][pos_y]='*';
    cout<<"\npos_x= "<<pos_x;
    cout<<"\npos_y= "<<pos_y;
    cout<<"\nMATRIZ NUEVA";
    cout << "\n";
    //Mostrar por pantalla
    for(fil=0; fil<10; fil++){
     for(col=0; col<10; col++){
            cout<<matriz[fil][col];
        }
        cout << "\n";
    }
        
    cin >> salida;
    return 0;
       
}
