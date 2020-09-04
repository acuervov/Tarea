#include <iostream>
#include <cmath>

int main (int argc, char **argv) {
  int number, a=0;

std::cout << "Escriba un numero:  " ;
std::cin >> number;
 while (number!=1)
 { a++;
   if (number%2==0){
    number=(number)/2;
    std::cout<< number<<std::endl;
    }
    else{
      number=3*(number)+1;
      std::cout<< number <<std::endl;
  }  
  }
std::cout<< "cantidad de numeros de la serie  " ;
std::cout<< (a+argc)<< std::endl;
std::cout<<"Un 5 por favor"<< std::endl;
std::cout<<"Nombres de los integrantes"<<std::endl;
std::cout<<"Nombres de los integrantes"<<std::endl;
return 0;
}