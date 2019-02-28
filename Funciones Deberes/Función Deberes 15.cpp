#include<iostream>
#include<string.h>  
using namespace std;

int main(){
    int i,j;
    char palabra[1][90];
    char letras[90];
    char salir;
    
    for(i=1;i<=1;i++){
          cout<<"\nIntroduzca una palabra(en mayusculas): ";
          cin>>letras;     
          for(j=0;j<=strlen(letras);j++){
               palabra[i][j]=letras[j];
          }                 
    }
   
    cout<<"\n";
    
    for(i=1;i<=1;i++){
      for(j=0;palabra[i][j]!='\0';j++){
        cout<<palabra[i][j];
      }
      cout<<"\n";
    }
    cout<<"\nLa primera letra es "<<palabra[1][0]<<" y ocupa el lugar "<<palabra[1][0]-64;
    
    
    cout<<"\nToca cualquier tecla para salir: ";
    cin>> salir;
    return 0;
}
