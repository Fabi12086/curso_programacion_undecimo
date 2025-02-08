#include <iostream>

int main(){
    int num1;
    std::cout <<"Introduce un primer numero: ";
    std::cin >> num1;

    int num2;
    std::cout <<"Introduce un segundo numero: ";
    std::cin >> num2;

    int suma = num1 + num2;
    int multiplicacion = num1 * num2;
    
    std::cout <<"La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;
    std::cout <<"La multiplicacion de " << num1 << " y " << num2 << " es: " << multiplicacion << std::endl;

    return 0;
}