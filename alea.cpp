//generar 5 numeros al azar
#include <iostream>                    //mete y saca informacion
#include <cstdlib>                           //contiene muchas cosas, entre ellas el generador de numeros aleatorios
#include <ctime>                                  //permite jugar con el tiempo
using namespace std;
int main (){
    char matriz[3][3];
    //char letras[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int fil,col;
    int pos_letra;                        //Aqui guardo mis numeros 
    char salida;
    double semilla;                                 //como un float pero con mas precision para definir la semilla (doble bits
    semilla = time (0);
    srand(semilla);
    for(fil=0; fil<3; fil++){
        for(col=0; col<3; col++){
            matriz[fil][col] = rand()%25+65;
            cout<<matriz[fil][col];
        }
        cout << "\n";
        
        }

        
    cin >> salida;
    return 0;
       
}
