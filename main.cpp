#include <iostream>
#include <string> 
#include <vector>
#include <cstdlib>
#include <time.h>
#include "Cliente.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

using namespace std;

string accountNumberGenerator (){
    
    string accountNumber = "";
    int number;

    srand(time(0));

    
    for (int i = 0; i < 7; i++){
        number = rand() % (10 + 1) + 1;
        accountNumber += to_string(number);
        // cout << number << endl;
    }

    return accountNumber;
}

int main(){

    vector<Cliente> clientes;
    string cpf;
    string nome;

    string option;
    string type;
    
    do{

        cout << "# Cadastro e Consulta de Clientes # " << endl;
        cout << "#1 Consultar" << endl;
        cout << "#2 Cadastrar" << endl;
        cout << "#3 Sair" << endl;

        cout << "> ";
        _flushall();
        cin >> option;

        if(option == "1"){
            cout << "\n#Consulta#\n" << endl;
            if(clientes.size()){
                for (int i = 0 ; i < clientes.size(); i++){
                

                    cout << "[CLIENT] " << clientes[i].getNome() << endl;
                    cout << "[ACCOUNT NUMBER] " << clientes[i].getConta().getNumero() << "\n" << endl;
                }
                continue;
            }
            cout << "Sem dados :(\n" << endl;

        }else if(option == "2"){
            cout << "Cadastro!\n" << endl;

             cout << "[*]Nome: ";
             _flushall();
             cin >> nome;
             

             cout << "[*]CPF: ";
             _flushall();
             cin >> cpf;
             
            cout << "[*] Tipo de conta: " << endl;
            cout << " #1 Corrente" << endl;
            cout << " #2 Poupanca" << endl;
            cout << "> ";
             _flushall();
            cin >> type;

            if(type == "1"){
                ContaCorrente conta(accountNumberGenerator());
                Cliente cliente(cpf,nome, conta);
                clientes.push_back(cliente);
            } else {
                ContaPoupanca conta(accountNumberGenerator());
                Cliente cliente(cpf,nome, conta);
                clientes.push_back(cliente);
            }
            
        
            
            cout << "[+] Cadastrado \n" << endl;

             
             
        }else if(option == "3"){
            cout << "Saindo..." << endl;
        }else{
            cout << "Entrada invalida!" << endl;
        }

    } while (option != "3");   


    return 0;
}