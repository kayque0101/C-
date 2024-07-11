#include <iostream>

int main() { 
    int idade; // Declaração da variavel 'idade' do tipo inteiro

    std::cout << "Digite sua idade: ";
    std::cin >> idade; // Leitura da idade fornecida pelo usuario 

    std::cout << "Suas idade é:" << idade << std::endl; // Exibição da idade 

    return 0; 
}