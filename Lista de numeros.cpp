#include<iostream>
/*Este programa sirve para saber leer 10 numeros*/
using namespace std;
main (){
     float num[10];
     int i;
     char salir;
     float suma=0;
     float n_numeros;
     float media;
     cout<<"Cuantos numeros quieres introducir: ";
     cin>>n_numeros;
     for (i=0;i<=n_numeros;i++){
         cout<<"Dime un numero: ";
         cin>>num[i];
         cout<<"\n";
     }
     //Ahora voy a enseñar mis numeros
     std::cout<<"Lista de numeros:\n";
     for(i=0;i<=n_numeros;i++){
         cout<<num[i]; 
         cout<<"\n";
     }
     //Ahora calculamos el numero de la media del ARRAY
     for(i=0;i<=n_numeros;i++){
                      suma=suma+num[i];          
                      cout<<"\n"; 
     }
     media=suma/n_numeros;
     cout<< "\nMEDIA: "<<media;
     cout<< "\nToca cualquier tecla para salir";//instruccion de salida
     cin>>salir;
     return 0;
}                          
      
