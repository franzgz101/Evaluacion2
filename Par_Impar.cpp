#include <iostream>
main(){
    int n_maximo=100;
    int i;
    char salir;
    for(i=1;i<=100;i++){
      if(i%2==0){
                 std::cout<<i;
                 std::cout<<" es PAR";
      }else{
                 std::cout<<i;
                 std::cout<<" es IMPAR";        
      } 
      std::cout<<"\n";    
    }
    std::cout<<"SEACABO LO QUE SE DABA \n";
    std::cout<<"Toca cualquier tecla para salir";
    std::cin>> salir;
    return 0;
}
    
