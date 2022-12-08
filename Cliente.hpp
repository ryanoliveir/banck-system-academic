#pragma once
#include <string>
#include "Conta.hpp"

class Cliente{

    private:
        std::string cpf;
        std::string nome;
        Conta conta;
    
    public: 
        Cliente(std::string cpf, std::string nome, Conta conta);
        Cliente(std::string cpf, std::string nome);
        std::string getNome();
        std::string getCPF();
        Conta getConta();
};