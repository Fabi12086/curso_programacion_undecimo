#include <iostream>
#include <string>

int main(){
    int precioBase;
    precioBase =100.0;

    std::string name;
    std::cout <<"Ingrese su nombre: ";
    std::cin >> name;


    int edad;
    std::cout <<"Ingrese su edad: ";
    std::cin >> edad;


    char tipoBoleto;
    std::cout <<"Elija la letra del tipo de boleto (N) Normal, (E) Estudiante y (S) Senior: ";
    std::cin >> tipoBoleto;

    int precioFinal=precioBase;
    if (edad < 5){
        precioFinal = 0.0;
    } else if (edad > 60 && tipoBoleto == 'S'){
    precioFinal= precioBase *= 0.3;        
    }   else if (tipoBoleto == 'E'){
    precioFinal = precioBase *= 0.5;       
    }         
    
    std::cout <<"El precio final del boleto es $" << precioFinal << std::endl;
    
    return 0;   
}