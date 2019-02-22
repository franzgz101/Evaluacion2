//generar matriz 10x10 letras al azar 
#include <iostream>                    //mete y saca informacion
#include <cstdlib>                           //contiene muchas cosas, entre ellas el generador de numeros aleatorios
#include <ctime>                                  //permite jugar con el tiempo
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
    char matriz[10][10];
    int fil,col;
    int pos_letra;                        //Aqui guardo mis numeros 
    char salida;
    int posx, posy; 
    int semilla;                                 //como un float pero con mas precision para definir la semilla (doble bits
    semilla = time(0);
    srand(semilla);
    char palabra[10];
    int longitud; 
    int col_contadora;
    
    cout<<"MATRIZ normal";
    cout << "\n" << "\n";
    //Rellenamos la matriz y mostramos
    for(fil=0; fil<10; fil++){
        for(col=0; col<10; col++){
            matriz[fil][col] = rand()%25+65;
            cout<<matriz[fil][col];
        }
     cout << "\n";
     }
     cout << "\n";

    //Pido palabra y la mido
    cout<< "Dame una palabra menor 10 letras: "; 
    cin >> palabra;
    longitud = strlen(palabra);
    cout << "La palabra tiene una longitud de: " <<longitud<<"\n";
    
    
    //Generamos la posición palabra y metemos en la matriz 
    posx=rand()%10;
    posy=rand()%10;

    for(col_contadora=posy;col_contadora< posy+longitud;col_contadora++){
            matriz[posx][col_contadora]=palabra[col_contadora-posy];}
    
    //Mostrar por pantalla nueva matriz
    cout<<"\nMATRIZ NUEVA"<< "\n";
    for(fil=0; fil<10; fil++){
     for(col=0; col<10; col++){
            cout<<matriz[fil][col];
        }
        cout << "\n";
      }
        
    cin >> salida;
    return 0;
    
}

