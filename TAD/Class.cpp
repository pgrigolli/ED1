#include <iostream>
#include <string>

using namespace std;




class Aluno {
  private:
   string ra;
   string nome;

  public:

   Aluno(string _ra, string _nome) {      
      this->ra = _ra;
      this->nome = _nome;
   }

   ~Aluno() { }

   string getRa() { return this->ra; }
   void setRa(string ra) { this->ra = ra; }

    string getNome(){return this->nome;}

   void imprimir() {
      cout << "(" << this->ra << ", " << this->nome << ")" << endl;
   }
};


class Turma {
private:
   string codDisciplina;
   string codTurma;
   string semestre;

   Aluno** alunos;
   int tamVetor;
   int qtde;


public:
   Turma(string semestre, int tamVetor){
      this->semestre = semestre;
      this->codTurma = "";
      this->codDisciplina = "";

      this->alunos = new Aluno*[tamVetor];
      this->tamVetor = tamVetor;
      this->qtde = 0;
   }

   bool matricula(Aluno* a){
    if(this->tamVetor > this->qtde){
    this->alunos[qtde] = a;
    qtde++;
    return true;
    }
    
    return false;

   };
   // bool matricula(Aluno a);
   int cancelaMatricula(string ra){

      int idx = 0;

      while(this->alunos[idx]->getRa() != ra){
         idx++;
      }
      this->alunos[idx]->~Aluno();

      for(int i = idx; i < qtde; i++){

         this->alunos[i] = this->alunos[i + 1];

      }
      this->qtde--;
      return 1;

    }



   void imprime(){
    int idx = 0;

    while(idx < this->qtde){

        this->alunos[idx]->imprimir();
        idx++;

    }


   };





   };






//int main(){

   //Turma* t1 = new Turma("2024-1", 100);
   //Turma* t2 = new Turma("2023-2", 20);

   //Aluno* a1 = new Aluno("1", "Joao");
   // Aluno a2("2", "Maria");

   // t1.matricula(a1);
   // t1.matricula(a2);

   // t1.cancelaMatricula("15");
   // t1.imprime();

//}