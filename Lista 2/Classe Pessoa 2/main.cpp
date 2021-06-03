#include "Pessoa2.h"
#include <iostream>
#include <vector>
#include <string>

int main (){   
    std::vector <Pessoa> pessoas;
    int N, idade, compara;
    std::string nome, telefone;
    bool encontrada = false;

    std::cin >> N;
    getchar();


    for (int i = 0; i < N; i++){   
        getline(std::cin, nome);
        std::cin >> idade;
        getchar();
        getline(std::cin, telefone);
        Pessoa pessoa(nome, idade, telefone);
        pessoas.push_back(pessoa); 
    }

    getline(std::cin, nome);

    for (int i = 0; i < N; i++){   
        
        if(pessoas[i].getNome().find(nome) != std::string::npos){
             std::cout << " " << pessoas[i].getNome() << " " << pessoas[i].getIdade() << " " << pessoas[i].getTelefone() << std::endl;
             encontrada = true;
        }   
    }   

    if(!encontrada == true)
         std::cout << "Pessoa não encontrada" << std::endl;

    return 0;
}