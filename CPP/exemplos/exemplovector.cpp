    
    #include <iostream>
    #include <vector>
    
    int main() {
        std::vector<int> numbers; // Declaração de um vetor de inteiros
        
        numbers.push_back(1); // Adicionar um elemento no final do vetor
        numbers.push_back(2);
        numbers.push_back(3);
        
        for (int number : numbers) { // Itera sobre os elemento no final do vetor
        std::cout << number << "";
        
        }
        std::cout << std::endl;
        
        return 0;
    }

