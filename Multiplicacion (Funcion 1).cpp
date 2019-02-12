#include<iostream>
using namespace std;
int multiplica(int num1,int num2,int num3,int num4){
    int respuesta;
    respuesta=num1*num2*num3*num4;
    return(respuesta);
}


main(){
       int num1, num2, num3, num4;
       char salir;
       cout<<"Introduce un numero: ";
       do{
        cin>>num1;
        if(num1==0){
         cout<<"\nERROR. Introduce un numero distinto de cero. Intentalo otra vez: ";
        }
       }while(num1==0);
       
       
       cout<<"Introduce otro numero: ";
       do{
        cin>>num2;
        if(num2==0){
         cout<<"\nERROR. Introduce un numero distinto de cero. Intentalo otra vez: ";
        }
       }while(num2==0);
       
       cout<<"Introduce otro numero: ";
       do{
        cin>>num3;
        if(num3==0){
         cout<<"\nERROR. Introduce un numero distinto de cero. Intentalo otra vez: ";
        }
       }while(num3==0);
       
       cout<<"Introduce otro numero: ";
       do{
        cin>>num4;
        if(num4==0){
         cout<<"\nERROR. Introduce un numero distinto de cero. Intentalo otra vez: ";
        }
       }while(num4==0);
       
       cout<<"\n"<<multiplica(num1,num2,num3,num4) ; 
                     
       cout<<"\nToca cualquier letra para salir: ";
      cin>>salir;
      return 0;
} 
