#include <iostream>
using namespace std;

// typedef struct no{
//         int dado;
//         struct no* prox;
// } No;


class No{
    public:
    int dado;
    No* prox;

};


void printEncadeada(No* no){

    No* temp = no;


    cout << "[";
    while(temp != nullptr){

        cout << temp->dado;
        temp = temp->prox;
        if(temp != nullptr)cout << ", ";

    }
        
    

    cout << "]" << endl;
}



void printContigua(int*v, int tam){

    cout << "[";
    for(int i = 0; i < tam; i++){
        cout << v[i];
        if (i < tam - 1) cout << ", ";


    }


    cout << "]" << endl;

}





int main(){

    int* organizacaoContigua = new int[3];
    organizacaoContigua[0] = 1;
    organizacaoContigua[1] = 2;
    organizacaoContigua[2] = 3;


    No* n1 = new No();
    No* n2 = new No();
    No* n3 = new No();


    n1->dado = 1;
    n2->dado = 2;
    n3->dado = 3;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = nullptr;

    No* organizacaoEncadeada = n1;

    n1 = nullptr;
    n2 = nullptr;
    n3 = nullptr;


    printContigua(organizacaoContigua, 3);
    printEncadeada(organizacaoEncadeada);


}