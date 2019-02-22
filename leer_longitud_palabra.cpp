#include <iostream>                           
#include <conio.h> 
#include <string.h> 
using namespace std;
int main (){
    char palabra[20];
    char salida;
    int longitud;
    
    cout << "Introduce una palabra: ";
    cin >> palabra;
    longitud = strlen(palabra);
    cout << "La longitud de la palabra es " << longitud;
    
    cin >> salida;
    return 0;
    
}
