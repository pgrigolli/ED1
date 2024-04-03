#include <iostream>
#include <string>
#include "aluno.h"

using namespace std;

int main(){
    Aluno *a1 = aluno_criar("a111", "Joao");
    Aluno *a2 = aluno_criar("a112", "Pedro");
    // Aluno *a3 = aluno_criar("a113", "Julia");
    Aluno a3;
    a3.nome = "Jose";
    a3.ra = "a113";



    aluno_imprimir(a1);
    aluno_imprimir(a2);
    aluno_imprimir(&a3);
    
    aluno_destruir(a1);


}