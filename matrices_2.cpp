#include<iostream>
using namespace std;
main(){
       int tablero[5][5];//Asi se define una matriz
       char salir;
       int fil;
       int col;
       int relleno;
       for(fil=0;fil<=4;fil++){
           if(fil%2==0){
             if(col%2==0);
                relleno=0;              
           } 
           else{
                 relleno=1;
           }
       }
           else{
                if(col%2==0);
                 relleno=1;
           }  
           else{
                 relleno=0;
           }                              
           for(col=0;col<=4;col++){ 
                 tablero[fil][col]=relleno;
           } 
       }
        for(fil=0;fil<=4;fil++){
            for(col=0;col<=4;col++){
                 cout<<tablero[fil][col];
            }
            cout<<"\n";
        } 
        cout<<"\nToca cualquier tecla para es";
        cin>>salir;
        return 0;
}
