#include <iostream>
#include <time.h>
using namespace std;



void executaCarga(int carga){

    for(int i = 0; i < carga; i++);


}



void ordem_n(int n, int carga){
    for(int i = 0; i < n; i++){
        executaCarga(carga);



    }


}

void ordem_n2(int n, int carga){
    for(int i = 0; i < n; i++){
        int j = n;
        while (j > n){
            executaCarga(carga);
            n /= 2;
        }



        }


    }


void ordem_logN(int n, int carga){

    while(n > 0){
        n = n / 2;


    }


}





int main(){

    long int n = 10000000000;
    int carga = 10;
    
    clock_t inicio, fim;

    inicio = clock();

    ordem_n2(n, carga);
    fim = clock();

    double tempoTotal = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo total de %f\n", tempoTotal);
}