#include "Conta.hpp"
#include <iostream>
#include <string>


Conta::Conta(std::string numero, float saldo):
    numero(numero),
    saldo(saldo)
{
    std::cout << "Building object..." << std::endl;
}

Conta::Conta(){}

void Conta::setNumero(std::string numero){
    this->numero = numero;
}

std::string Conta::getNumero(){
    return this->numero;
}

void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}

float Conta::getSaldo(){
    return this->saldo;
}