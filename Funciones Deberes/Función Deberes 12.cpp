#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int i,j;
    char num[1][20];
    char cifra[20];
    char salir;
    int suma;
    int cif1, cif2;
    
    cout<<"Introduzca un numero de dos cifras por favor";
    for(i=1;i<=1;i++){
          cout<<"\nIntroduzca numero: ";
          cin>>cifra;     
          for(j=0;j<=strlen(cifra);j++){
               num[i][j]=cifra[j];
          }                 
    }

    cout<<"\n";
    
    for(i=1;i<=1;i++){
      for(j=0;num[i][j]!='\0';j++){
        cout<<num[i][j];
      }
      cout<<"\n";
    }
    
    
    suma=(num[1][0]-'0')+(num[1][1]-'0');
    cout<<"\nLa suma de los numeros es igual a "<<suma;
    
    cout<<"\nToca cualquier tecla para salir: ";
    cin>> salir;
    return 0;
}
