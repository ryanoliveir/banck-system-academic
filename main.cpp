#include <iostream>
#include <string> 
#include <vector>
#include "Cliente.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

using namespace std;

int main(){

    vector<Cliente> clientes;
    string cpf;
    string nome;

    string option;

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
                    cout << "[CLIENT] " << clientes[i].getNome() << "\n" << endl;
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
             
             Cliente cliente(cpf,nome);

             clientes.push_back(cliente);
             cout << "[+] Cadastrado \n" << endl;
             
        }else if(option == "3"){
            cout << "Saindo..." << endl;
        }else{
            cout << "Entrada invalida!" << endl;
        }

    } while (option != "3");   


    return 0;
}