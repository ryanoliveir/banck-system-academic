#pragma once
#include "Conta.hpp"

class ContaPoupanca: public Conta{
	public:
		ContaPoupanca(std::string numero, float saldo);
		ContaPoupanca();
		float calculaCusto();
};