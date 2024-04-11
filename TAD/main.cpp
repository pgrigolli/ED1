#include <iostream>
#include "Class.cpp"
#include <string>





int main(){

    Turma* t1 = new Turma("segundo", 10);

    Aluno* a1 = new Aluno("2525", "pedro");
    Aluno* a2 = new Aluno("2626", "dudu");
    Aluno* a3 = new Aluno("2727", "bornia");

    t1->matricula(a1);
    t1->matricula(a2);
    t1->matricula(a3);
    t1->imprime();

    t1->cancelaMatricula(a1->getRa());
    t1->imprime();





}