#include "Cliente.hpp"
#include <iostream>
#include <string>


Cliente::Cliente(std::string cpf, std::string nome, Conta conta):
    cpf(cpf),
    nome(nome),
    conta(conta)
{
    // std::cout << "Building object(1)..." << std::endl;
}

Cliente::Cliente(std::string cpf, std::string nome):
    cpf(cpf),
    nome(nome)
{
    // std::cout << "Building object(2)..." << std::endl;
}


std::string Cliente::getNome(){
    return nome;
}

std::string Cliente::getCPF(){
    return cpf;
}

Conta Cliente::getConta(){
    return conta;
}

// int main(){

//     Cliente client;

//     std::cout << client.getNome() << std::endl;

//     return 0;
// }