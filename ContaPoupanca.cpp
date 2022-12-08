#include <string>
#include <iostream>
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, float saldo){
        this->numero = numero;
        this->saldo = saldo;

        std::cout << "Building object..." << std::endl;
}

float ContaPoupanca::calculaCusto(){
        return 10;
}