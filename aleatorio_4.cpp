#include<iostream>
#include <cstdlib>
#include <ctime>
#define TAMANO 50
/*Este programa genera 5 numeros al azar*/
using namespace std;
int main(){
    char matriz [TAMANO][TAMANO];
    int fil,col;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<TAMANO;fil++){
        for(col=0;col<TAMANO;col++){
        matriz[fil][col]=rand()%25+65;
        cout<<matriz[fil][col];
        }
      cout<<"\n";
      }  
    cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
} 
