#include <iostream> // Biblioteca para entrada e saída de dados em C++

// Função para adicionar produtos ao estoque
void adicionarContato(std::string contatos[], std:: string telefones[], int tamanho, std::string contato, std::string telefone)
{
    contatos[tamanho] = contato;       // Adiciona o produto ao final do array de produtos
    telefones[tamanho] = telefone; // Adiciona a quantidade correspondente ao produto
}

// Função para remover produtos vendidos do estoque
void procurarContato(std::string contatos[], int tamanho, std::string 
contato, std::string telefone)
{
  int i= 0;

while (i<tamanho && contatos[i] == contato)
{
    i++;
}

if(i<tamanho){

std::cout<<"Contato:"<<contato<<" Telefone:"<< telefone<<std:: endl;

}
else{

    std::cout <<"Contato não encontrado."<< std::endl;
}
}

// Função para exibir o estoque atual
void exibirContatos(std::string contatos[], std::string telefones[], int tamanho)
{
    std::cout << "Lista atual:\n";  // Exibe cabeçalho
    for (int i = 0; i < tamanho; i++) // Loop para percorrer o estoque
    {
        std::cout << contatos[i] << ": " << telefones[i] << "\n"; // Exibe cada produto e sua quantidade no estoque
    }
}

int main()
{
    const int maxContatos = 100;       // Define o tamanho máximo do array de produtos
    std::string contatos[maxContatos]; // Array para armazenar os contatos
    std:: string telefones[maxContatos];      // Array para armazenar as telefones disponíveis
    int tamanho = 0;                   // Variável para controlar o tamanho atual dos arrays

    // Adiciona contatos inicialmente ao estoque
    adicionarContato(contatos, telefones, tamanho, "Coringa", "333-33");
    tamanho++;
    adicionarContato(contatos, telefones, tamanho, "Duas Caras", "111-11");
    tamanho++;
    adicionarContato(contatos, telefones, tamanho, "Super man", "222-22");
    tamanho++;

    // Exibe o estoque inicial
    exibirContatos(contatos, telefones, tamanho);

    // Simula algumas vendas
    procurarContato(contatos, tamanho, "Coringa", "333-33");
    procurarContato(contatos, tamanho, "Duas caras", "111-11");
    procurarContato(contatos, tamanho, "Super man", "222-22");
    tamanho++;
    // Exibe o estoque após as vendas
    exibirContatos(contatos, telefones, tamanho);

    return 0;
}