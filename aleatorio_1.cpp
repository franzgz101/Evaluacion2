#include<iostream>
#include <cstdlib>
#include <ctime>
/*Este programa genera 5 numeros al azar*/
using namespace std;
int main(){
    float lista[5];//Aqui guardamos los numeros
    int i;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(i=0;i<5;i++){
        lista[i]=rand();
        cout<<lista[i]<<"\n";
    }
    cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
} 
                        
