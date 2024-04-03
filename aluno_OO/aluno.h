#include <iostream>
#include <string>
using namespace std;

class Aluno{
    public:
     string ra;
     string nome;

    Aluno(){
        this->ra = "0";
        this->nome = "undefined";
    }


    Aluno(string ra, string nome){
        this->nome = nome;
        this->ra = ra;
        cout << "Criando" << endl;
    }

    ~Aluno(){
        cout << "Destruindo" << endl;
    }

    void imprimir(){
        cout << this->nome << ", " << this->ra << endl;
    }
};