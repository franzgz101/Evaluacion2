#include<iostream>
#include <cstdlib>
#include <ctime>
/*Este programa genera 5 numeros al azar*/
using namespace std;
int main(){
    float matriz[3][3];//Aqui guardamos los numeros
    int fil,col;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<3;fil++){
        for(col=0;col<3;col++){
        matriz[fil][col]=rand()%10;
        cout<<matriz[fil][col];
        }
      cout<<"\n";
      }  
    cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
} 
