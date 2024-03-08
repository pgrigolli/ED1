#include <iostream>



bool busca(int * v, int n, int elemento){

    for(int i = 0; i < n; i++){

        if (v[i] == elemento){
            return true;
        }

    return false;

    }

}





int main(){

    
    int v[5] = {1,2,3,4,5};

    bool resultado = busca(v, 5, 3);



}