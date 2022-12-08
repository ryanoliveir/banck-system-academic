# Herança 
  - Uma classe tem tudo que uma tem, so que com alguma coisa a mais
obs: Herda atributos e métodos, menos o construtor
```c++

class contaCorrente: public Conta(){
    float calculaCusto(){
        return this->getSaldo() * 0.05;
    }
}

class contaPoupanca: public Conta(){
    float calculaCusto(){
        return 10;
    }
}

```

Polimorfismo => Habilidade de um objeto mudar em tempo de execução (runtime)


__`proteced:`__
The class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.