#include <string>
#include <iostream>

using namespace std;

class No{
    public:
        int dado;
        No* prox;

        No();
        No(int e){
            this->dado = e;
        }
        No(int e, No* prox){
            this->dado = e;
            this->prox = prox;
        }
};



class ListaEncadeada{

    private:
        No* ultimo;
        No* primeiro;
        int tamanho;

    public:
        ListaEncadeada(){
            this->ultimo = nullptr;
            this->primeiro = nullptr;
            tamanho = 0;
        }

        // ~ListaEncadeada();

        // Insere o elemento e na última posição
        void push_back(int e){
            No* novoNo = new No(e);

            if(this->primeiro == nullptr){
                primeiro = novoNo;
            }
            if(this->ultimo != nullptr){
                ultimo->prox = novoNo;
            }
            ultimo = novoNo;
            tamanho++;
        }
        // Insere o elemento e na primeira posição
        void push_front(int e){
            No* novoNo = new No(e);
            novoNo->prox = primeiro;
            primeiro = novoNo;
            tamanho++;

        }
        // Insere o elemento e na posição pos
        void insert(int pos, int e){
            No* novoNo = new No(e);

            if(pos == 1){
                push_front(e);
            }
            else if (pos == tamanho){
                push_back(e);
            }

            No* temp = primeiro;
            for(int i = 0; i < pos - 2; i++){
                temp = temp->prox;
            }
            novoNo->prox = temp->prox;
            temp->prox = novoNo;
            tamanho++;


        }

        // Remove o último elemento
        void pop_back(){

            No* temp = primeiro;

            for(int i = 0; i < tamanho - 2; i++){
                temp = temp->prox;
            }

            temp->prox = nullptr;
            ultimo = temp;
            tamanho--;
        }
        // Remove o primeiro elemento
        void pop_front(){
            No* temp = primeiro->prox;
            primeiro = temp;
            tamanho--;
        }

        // Remove o elemento da posição pos e retorna o elemento removido
        int erase(int pos){
            No* anterior = nullptr;
            No* atual = primeiro;

            for(int i = 0; i < pos - 1; i++){
                anterior = atual;
                atual = atual->prox;
            }


            anterior->prox = atual->prox;


            int num = atual->dado;

            tamanho--;

            return num;
            
        }

        // Retorna o primeiro elemento
        int front(){
            return primeiro->dado;
        }
        // Retorna o último elemento
        int back(){
            return ultimo->dado;
        }
        // Retorna o elemento da posição pos
        int at(int pos){

            No* temp = primeiro; 
            for(int i = 0; i < pos - 1; i++){
                temp = temp->prox;
            }
            return temp->dado;
        }

        // Torna a lista vazia
        void clear(){
            primeiro = nullptr;
            tamanho = 0;
        }

        // Verifica se o vetor está vazio
        bool empty(){
            return tamanho == 0;
        }
        // Devolve a quantidade de elementos
        int size(){
            return tamanho;
        }
        // Substitui o elemento da posição pos pelo elemento e
        void replace(int pos, int e){
            No* novoNo = new No(e);

            No* temp = primeiro; 
            for(int i = 0; i < pos - 2; i++){
                temp = temp->prox;
            }
            
            novoNo->prox = temp->prox->prox;
            temp->prox = novoNo;

        }

        // Imprime todos os elementos no formato [1,2,3]
        void print(){
            No* temp = primeiro;
            cout << "[";

            while(temp != nullptr){
                cout << temp->dado;
                temp = temp->prox;
                if(temp != nullptr) cout << ",";
            }
                cout << "]";

        }
};