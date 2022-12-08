#pragma once
#include "Conta.hpp"

class ContaCorrente: public Conta{
    public:
        ContaCorrente(std::string numero, float saldo);
        ContaCorrente(std::string numero);
        ContaCorrente();
        float calculaCusto();
};