//generar matriz 10x10 letras al azar 
#include <iostream>                    //mete y saca informacion
#include <cstdlib>                           //contiene muchas cosas, entre ellas el generador de numeros aleatorios
#include <ctime>                                  //permite jugar con el tiempo
using namespace std;
int main (){
    int matriz[3][3];
    int fil,col;
    int pos_letra;                        //Aqui guardo mis numeros 
    char salida;
    double semilla;                                 //como un float pero con mas precision para definir la semilla (doble bits
    semilla = time (0);
    srand(semilla);
    for(fil=0; fil<10; fil++){
        for(col=0; col<10; col++){
            matriz[fil][col] = rand()%9;
            cout<<matriz[fil][col];
        }
        cout << "\n";
        
        }

        
    cin >> salida;
    return 0;
       
}
