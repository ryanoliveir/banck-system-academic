#pragma once
#include <string>

class Conta {

    // private:
    protected:
        std::string numero;
        float saldo;
    
    public:
        Conta(std::string numero, float saldo);
        Conta(std::string numero);
        Conta();
        void setNumero(std::string numero);
        void setSaldo(float saldo);
        std::string getNumero();
        float getSaldo();
};
