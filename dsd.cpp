//generar 5 numeros al azar
#include <iostream>                     //mete y saca informacion
#include <cstdlib>                           //contiene muchas cosas, entre ellas el generador de numeros aleatorios
#include <ctime>                                  //permite jugar con el tiempo
using namespace std;
int main (){
    float lista [5];                             //Aqui guardo mis numeros 
    int i;
    char salida;
    double seed;                                 //como un float pero con mas precision para definir la SEMILLA (doble bits)
    seed = time (0);
    srand (seed);
    for (i=0; i<5; i++){                        //repaso la lista
        lista [i] = rand()%6;                   //les doy un valor aleatorio entre el 0 y 6
        cout << lista [i]; cout << "\n";
        
        }
    
        
    cin >> salida;
    return 0;
       
}
