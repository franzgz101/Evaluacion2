#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char matriz[9][5]; 
    int fil, col, k;
    char salir;
    
    for(fil=0;fil<=5;fil++){
        for(col=0;col<=5-fil;col++){
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
