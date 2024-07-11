#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <queue>    // Biblioteca para utilizar fila em C++

int main()
{
    std::queue<std::string> livrosemprestados; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    livrosemprestados.push("harry Potter");
    livrosemprestados.push("É assim que acaba");
    livrosemprestados.push("É assim que começa");

    // Exibe a lista de afazeres inicial
    std::cout << "Lista de afazeres inicial:\n";
    std::queue<std::string> listaCopia = livrosemprestados; // Copia a fila para exibição sem alterar a original
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.front() << std::endl; // Exibe cada tarefa da lista
        listaCopia.pop();                             // Remove a tarefa exibida da fila
    }

    // Marca algumas tarefas como concluídas
    if (!livrosemprestados.empty())
    {
        std::cout << "\nTarefa concluída: " << livrosemprestados.front() << std::endl;
        livrosemprestados.pop();
    }
    else
    {
        std::cout << "nenhum livro emprestado\n";
    }

    if (!livrosemprestados.empty())
    {
        std::cout << "Tarefa concluída: " << livrosemprestados.front() << std::endl;
        livrosemprestados.pop();
    }
    else
    {
        std::cout << "Lista de a!\n";
    }

    // Exibe a lista de afazeres após as conclusões
    std::cout << "\nLista de afazeres após concluir algumas tarefas:\n";
    listaCopia = livrosemprestados; // Copia a fila novamente para exibição
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.front() << std::endl;
        listaCopia.pop();
    }

    return 0;
}