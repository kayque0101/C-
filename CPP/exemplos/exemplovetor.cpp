#include <iostream>

using namespace std;

int main()
{
    int tamanhoMaximoVetor = 100;
    int corDaCamisa, diaDoAniversario, mesDoAniversario;
    string resultadoCorDaCamisa, resultadoDiaDoAniversario, resultadoMesDoAniversario;

    string corCamisa[tamanhoMaximoVetor] = {
        "Preto",
        "Branco",
        "Vermelho",
        "Azul",
        "Sem camisa"};

    string corVetor[tamanhoMaximoVetor] = {
        "O Harry Potter",
        "A Hermione Granger",
        "O Goku",
        "A Sailor Moon",
        "A Bella Swan"};

    string diaVetor[tamanhoMaximoVetor] = {
        "Agasalho de futebol para aquecimento",
        "Roupa de goleiro completa",
        "Uniforme da seleção argentina",
        "Uniforme do Chelsea"};

    string mesVetor[tamanhoMaximoVetor] = {
        "Karl Marx",
        "Joseph Stalin",
        "Vladimir Lenin",
        "Cleópatra"};

    cout << "Bem vindo(a) ao criador de frases para aprendizado de loops e vetores!!" << endl;

    cout << "Escolha uma cor de camisa da lista abaixo:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << corCamisa[i] << endl;
    }

    cout << "Digite o número correspondente à cor de sua camisa: ";
    cin >> corDaCamisa;

    if (corDaCamisa >= 1 && corDaCamisa <= 5)
    {
        resultadoCorDaCamisa = corVetor[corDaCamisa - 1];
    }
    else
    {
        cout << "Número inválido para a cor da camisa. Por favor, escolha um número entre 1 e 20." << endl;
        return 1;
    }

    cout << "Digite o dia de seu aniversário (1-30): ";
    cin >> diaDoAniversario;

    if (diaDoAniversario >= 1 && diaDoAniversario <= 30)
    {
        resultadoDiaDoAniversario = diaVetor[diaDoAniversario - 1];
    }
    else
    {
        cout << "Número inválido para o dia do aniversário. Por favor, escolha um número entre 1 e 30." << endl;
        return 1;
    }

    cout << "Digite o mês de seu aniversário (1-12): ";
    cin >> mesDoAniversario;

    if (mesDoAniversario >= 1 && mesDoAniversario <= 12)
    {
        resultadoMesDoAniversario = mesVetor[mesDoAniversario - 1];
    }
    else
    {
        cout << "Número inválido para o mês do aniversário. Por favor, escolha um número entre 1 e 12." << endl;
        return 1;
    }

    cout << "Sua frase é:" << endl;
    cout << "Um dia encontrei " << resultadoCorDaCamisa << " vestindo " << resultadoDiaDoAniversario << " enquanto " << resultadoMesDoAniversario << " Vendia algoritmos." << endl;

    return 0;
}