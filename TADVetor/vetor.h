#include <string>
#include <iostream>
using namespace std;



#include <string>

class Vetor{

    private:
        int* array;
        int capacity;
        int tamanho;

    public:
        Vetor(){
            capacity = 1;
            array = new int(capacity);
            tamanho = 0;
        }
        ~Vetor();




        void push_back(int e){
        // Insere o elemento e na última posição
            gerenciaCapacidade();
            tamanho++;
            array[tamanho - 1] = e;


        }
            






        void push_front(int e){
        // Insere o elemento e na primeira posição
        gerenciaCapacidade();
        tamanho++;

        for(int i = tamanho; i > 0; i--){
            array[i] = array[i - 1];
        }
        array[0] = e;



        }

        void insert(int pos, int e){
        // Insere o elemento e na posição pos
        gerenciaCapacidade();
        tamanho++;

        for(int i = tamanho; i > pos; i--){
            array[i] = array[i - 1];
        }
        array[e] = pos;


        }



        void pop_back(){
        // Remove o último elemento
            tamanho--;
            gerenciaCapacidade();

        }
        void pop_front(){
        // Remove o primeiro elemento
        for(int i = 0; i < tamanho; i++){
            array[i] = array[i + 1];

        }

        tamanho--;
        gerenciaCapacidade();

        }


        int erase(int pos){
        // Remove o elemento da posição pos e retorna o elemento removido
        int erased = array[pos];
        for(int i = pos; i < tamanho; i++){
            array[i] = array[i + 1];

        }
        tamanho--;
        gerenciaCapacidade();   

        return erased;
        }
        int front(){
        // Retorna o primeiro elemento
        return array[0];   
        

        }

        int back(){
        // Retorna o último elemento
            return array[tamanho - 1];
        }




        int at(int pos){
        // Retorna o elemento da posição pos
            return array[pos];


        }

        void clear(){
        // Torna a lista vazia
            free(array);
            int * newArray = new int(capacity);
            array = newArray;


        }


        bool empty(){
        // Verifica se o vetor está vazio

            if(tamanho == 0){
                return 1;
            }return 0;


        }



        int size(){
        // Devolve a quantidade de elementos
        return this->tamanho;
        }


        void replace(int pos, int e){
        // Substitui o elemento da posição pos pelo elemento e

        array[pos] = e;

        }

        void print(){
        // Imprime todos os elementos no formato [1,2,3]

        cout << "[";
        for(int i = 0; i < tamanho; i++){
            cout << array[i]; // 

            cout << ", ";

        }
        if(tamanho == 0){
            cout << "[]";
        }
        cout << "\b\b]" << endl;



        }
    private:
        void gerenciaCapacidade(){

	    // Dobrar a capacidade quando não houver mais espaço
	    // Reduzir a capacidade pela metade quando for inferior a 25% de ocupação

            if(tamanho == capacity){

                int* newArray = new int(capacity * 2);
                for(int i = 0; i < tamanho; i++){
                    newArray[i] = array[i];
                }

                capacity = capacity*2;
                delete(array);
                array = newArray;

            }

            else if(tamanho < (capacity * 0.25)){

                int *newArray = new int(capacity/2);
                for(int i = 0; i < tamanho; i++){
                    newArray[i] = array[i];
                }

                capacity = capacity/2;
                delete(array);
                // array = newArray;
            }


        }        


};
