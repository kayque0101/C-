    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
    
     string Nome;
     int Raca;
     int Classe;
     string Idade;
     int Sexo;
     int ClasseSocial;
     int Ocupacao;
     int Historia;
     string Motivacao;
     int Aparencia;
    
     int Forca;
     int Destreza;
     int Constituicao;
     int Inteligencia;
     int Sabedoria;
     int Carisma;
    
      int Habilidade;
      int Espada;
      int Arco;
      int Armadinhas;
      int Furtividade;
      int Magia;
      int Lutar;
      int Medicina;
      int Persuasao;
      int Herbalismo;
      int Navegacao;
      int Etiqueta;
      int Linguas;
    
    
      string NomeArtefato;
      string Localizacao;
      string funcao;
      float  Custo;
    
    
      string Armas;
      string Armaduras;
      int Equipametos;
    
      float MoedasDeOuro;
    
      float Guilda
      float Reputacao;
      string Alianca;
      string Conexoes;
      float  NivelDeMagia;
    
    
    
    
       cout <<"Dados do  Personagem"<< endl;
    
       cout <<"Qual o seu Nome?\n" <<endl;
       cin >> Nome;
       "\n";
       cout <<"\nQual a sua Raça (ton de pele)?"<<endl;
       cout <<"opcão 1 branca, opção 2 morena"<<endl;
       cin >> Raca;
      switch(Raca)
       {
        case 1: cout <<"branca\n";
        break;
        
        case 2: cout <<"morena\n";
        break;
        
        default: cout << "outros tons de pele\n";
        break;
    }
        
       cout <<"Escolha a sua Classe!"<<endl;
    cout<<"opção 1 Guerreiro FOR 8, DES 5, CON 7, INT 4, SAB 6, CAR 4\n"<<"opção 2 Mago FOR 3, DES 5, CON 3, SAB 10 CAR 6,\n"<<"opção 3 ladrão FOR 6, DES 10, CON 6, SAB 3, CAR 8\n"<<"opção 4 clérico FOR 4, DES 3, CON 4, SAB 9, CAR 8\n"<<"opção 5 Realer"<<endl;
       cin >> Classe;
       switch (Classe)
       {
       case 1: cout <<"Guerreiro\n";
       break;
    
      case 2: cout <<"Mago\n";
      break;
    
      case 3: cout<<"ladrão\n";
      break;
    
      case 4: cout<<"clérico\n";
      break;
      case 5: cout <<"Realer\n";
      break;
    
       default: cout<<"Invalido\n";
         break;
    
       }
    
       cout <<"Quantos anos você tem?"<<endl;
       cin >> Idade;
    
       cout <<" Qual o seu Sexo?"<<endl;
       cout<<"Opção 1 masculino\n"<< "opção 2 feminino\n"<<endl;
       cin >> Sexo;
       switch(Sexo)
       {
           case 1: cout<<" Masculino\n";
           break;
           
           case 2: cout<<"Feminino\n";
           break;
           
           default: cout<<"Outros\n";
           break;
       }
    
       cout <<" Classe Social qual o seu nivel de riqueza?"<<endl;
       cout <<"Opção 1 Nobre\n"<<"Opção 2 plebeu\n"<<"Opção 3 Servo\n"<<endl;
        cin >> ClasseSocial;
       switch (ClasseSocial)
       {
           case 1: cout <<"Nobre\n";
           break;
           
           case 2: cout <<"plebeu\n";
           break;
           
           case 3: cout <<"Servo\n";
           break;
            
            default: cout<<"Invalido\n";
            break;
           
       }
    
       cout <<"Oque você faz? qual a sua ocupação?"<<endl;
       cout <<"Opção 1 Medico.\n"<<"opção 2 ferreiro.\n"<<"opção 3 cozinheiro.\n"<<endl;
       cin >> Ocupacao;
       switch(Ocupacao)
       {
           case 1: cout<<"Medico\n";
           break;
           case 2: cout<<"Ferreiro\n";
           break;
           case 3: cout<<"Cozinheiro\n";
           break;
           default: cout<< "outros\n";
           break;
       }
       
    
       cout <<"\nqual a sua Historia? oque você já passou? Faça uma escolha entre as opções A e B!" <<endl;
      cout<<"opção 1 Você era uma criança de um vilarejo muito pobre, localizado bem no interior que tem o sonho de se tonar rico! e para realizar esse sonho, você se torna um aventureiro e em embarca em uma viagem em buusca de novas aventuras e tesouros!\n"<<"\nopção 2 Quando criança, você teve sua família morta por monstros e isso fz com que você no futuro, se tornasse um bravo Guerreiro que iria eliminar todos esses monstros do mundo!\n"<<endl;
        cin >> Historia;
      switch(Historia)
      {
      case 1: cout <<"Você era uma criança de um vilarejo muito pobre, localizado bem no interior que tem o sonho de se tonar rico! e para realizar esse sonho, você se torna um aventureiro e em embarca em uma viagem em buusca de novas aventuras e tesouros!\n";
      break;
      
      case 2: cout <<"Quando criança, você teve sua família morta por monstros e isso fz com que você no futuro, se tornasse um bravo Guerreiro que iria eliminar todos esses monstros do mundo!\n";
      break;
      default: cout<<"Invalido!\n";
        break;
      }
    cout <<"Como vc é? qual a sua aparencia?"<<endl;
    cout <<"Opção 1 alto, forte, e branco\n"<<"opção 2 baixo, magro e branco\n"<<" opção 3 alto, forte e moreno\n"<<endl;
    cin >> Aparencia;
    switch(Aparencia)
    {
        case 1: cout<<"alto, forte, e branco\n";
        break;
        case 2: cout<<"baixo, magro e branco\n";
        break;
        case 3: cout<<"alto, forte e moreno\n";
        
        default: cout<<"Invalido\n";
        break;
    }
    cout<<"Habilidades"<<endl;
    cout <<" opção 1 Foco em corpo a corpo, tem mais proficiencia com Espadas, Furtividade e Lutar.\n"<<" opção 2 Foco a longa distacia tem mais proficiencia com Arcos, Magias, Persuasão\n"<<"opcão 3 suporte tem mais proficiencia com Medicina, Herbalismo, Herbalismo, Navegação, Etiqueta e Linguas\n"<<endl;
    cin >> Habilidade;
    switch(Habilidade)
    {
        case 1: cout <<"Foco em corpo a corpo\n";
        break;
        
        case 2: cout <<"foco em longa distacia\n";
        break;
        
        case 3: cout <<"foco em suporte\n";
        break;
        
        default: cout <<"Está classe não existe\n";
        break;
    }
    
    cout <<"Equipametos"<<endl;
    cout<<"Espadas"<<endl;
    cin >> Espadas;
    
    cout<<"Armaduras"<<endl;
    cin >> Armaduras;
    
    cout << "quais itens você quer começar?"<<endl
    cout <<"opcão 1 5 poções, 2 antidatos, 1 Armadinha e 100 moedas de ouro\n"<<"7 poções, 3 antidatos, 1 Armadinha e 50 moedas de ouro\n"<<endl;
    cin >> itens;
    switch(itens)
    {
        case 1: cout <<"5 poções, 2 antidatos, 1 Armadinha e 100 moedas de ouro\n"
        break;
        
        case 2: cout <<"7 poções, 3 antidatos, 1 Armadinha e 50 moedas de ouro\n"
        break;
    }
    cout <<"outras informações"<<endl;
    
     cout <<"Escolha qual Guilda você ira começar\n"<<endl;
     switch(Guilda)
     {
         case 1: <<"Os tigres brancos da Montanha\n";
         break;
         
         case 2: cout <<"Dragões cinzentos do Sul\n";
         break;
         case 3: cout <<"Os trolls da Norte\n";
     }
    
    
    return 0;
    }
