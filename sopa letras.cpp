#include<iostream>
#include <cstdlib>
#include <ctime>
#define TAMANO 10
/*Este programa genera 5 numeros al azar*/
using namespace std;
main(){
    char matriz[TAMANO][TAMANO];//Aqui guardamos los numeros
    int fil,col;
    int posx, posy;
    char salir;
    char palabra[10];
    int semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<10;fil++){
        for(col=0;col<10;col++){
        matriz[fil][col]=rand()%25+65;
        cout<<matriz[fil][col];
        }
      cout<<"\n";
      }  
/*Generamos al azar la posx y posy*/      
    posx=rand()%TAMANO;
    posy=rand()%TAMANO;
    //Colocamos un asterisco en esa posicion
    matriz[posx][posy]='PERRA';
    for(fil=0;fil<TAMANO;fil++){
          for(col=0;col<TAMANO;col++){
                 cout<<matriz[fil][col];
                 }
                 cout<<"\n";
                 }                                           
    //Volvemos a sacar la matriz por la pantalla
    cout<<"Introduce una palabra: ";  
    cin>>palabra; 
    cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
} 
