#include <iostream>
#include <string>
#include "aluno.h"

using namespace std;

void teste(){
    Aluno a;
    a.ra = "a113";
    a.nome = "Dudu";
}



int main(){

    // teste();
    // cout << "Fim" << endl;

    Aluno *a1 = new Aluno("a111", "Joao");
    Aluno *a2 = new Aluno("a112", "Pedro");
    a1->imprimir();
    a2->imprimir();




    // Aluno* a1 = new Aluno();
    // a1->ra = "a111";
    // a1->nome = "Joao";

    // cout << a1->ra << ", " << a1->nome << endl;

    // delete a1;
}