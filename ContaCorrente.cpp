#include <string>
#include <iostream>
#include "ContaCorrente.hpp"

// ContaCorrente(std::string numero, float saldo);
//         numero(numero),
//         saldo(saldo)
// {
//      std::cout << "Building object..." << std::endl;
// }

ContaCorrente::ContaCorrente(std::string numero, float saldo){
        this->numero = numero;
        this->saldo = saldo;

        std::cout << "Building object..." << std::endl;
}

ContaCorrente::ContaCorrente(std::string numero){
        this->numero = numero;
        
        // std::cout << "Building object..." << std::endl;
}

float ContaCorrente::calculaCusto(){
        return this->saldo * 0.05;
}