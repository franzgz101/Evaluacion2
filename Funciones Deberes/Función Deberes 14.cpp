#include<iostream>
#include<string.h> 
using namespace std;

int main(){
    int alto;
    int fil, col, k;
    char salir;
    cout<<"Como quieres que sea de alta la piramide: ";
    cin>>alto;
    
    for(fil=0;fil<=alto;fil++){
        for(col=0;col<=alto-fil;col++){
            cout<<" ";}
            for(k=0;k<=fil*2;k++){
                cout<<"*";
                  }
                  
        cout<<"\n";
        
    }
    
    
   cout<<"\nToca cualquier tecla para salir: ";
    cin>>salir;
    return 0;
}
