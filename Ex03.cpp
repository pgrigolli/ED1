#include <iostream>
#include <string>
using namespace std;

int stringFindFirst(string s, char c){
    int idx = 0;

    for(char k: s){
    if(k == c) return idx;
    idx++;

    }
    return -1;
}

bool isLetter(char c){

    string allLetters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(char j: allLetters){
        if(c == j) return true;
    }
    return false;
}


bool checkName(string name){

    if(name[0] == ' ' || name[name.size() - 1] == ' ') return false;



    for(int i = 1; i < name.size(); i++){
        if(!isLetter(name[i]) && name[i] != ' '){
            return false;
        } 

        if(name[i] == ' ' && name[i - 1] == ' '){
            return false;
        }

    }

    return true;



}

int* createArray(int n, bool asc){

    int* vet2 = (int*)calloc(n, sizeof(int));
    int tam = n;

    if(asc == 1){
        for(int i = 1; i <= n; i++){
            vet2[i] = i;

        }
    }else{
        for(int i = 0; i < n; i++){
            vet2[i] = tam;
            tam--;
            
        }
    }

    // for(int i = 0; i < n; i++){
    //     printf("%d ", vet2[i]);
    // }


    return vet2;


}


int* arrayConcat(int *v1, int n1, int *v2, int n2){

    int* v3 = (int*)calloc(n1 + n2, sizeof(int));

    for(int i = 0; i < n1; i++){
        v3[i] = v1[i];
    }

    for(int i = 0; i < n2; i++){
        v3[n1 + i] = v2[i];
    }

    for(int i = 0; i < (n1 + n2); i++){
        printf("%d ", v3[i]);



    }


    return v3;


}


int* arrayMerge(int *v1, int n1, int *v2, int n2){

    int* v3 = (int*)calloc(n1+n2, sizeof(int));

    int j = 0;
    int k = 0;
    int l = 0;

    for(int i = 0; i < (n1 + n2); i++){

        if(v1[j] <= v2[k]){
            v3[i] = v1[j];
            j++;
        }else if(v2[k] >= v1[j]){
            v3[i] = v2[k];
            k++;
        }



    }

    return v3;

}











int main(){

    // cout << isLetter('h') << endl;

    // cout << checkName("Chuck KickNorris") << endl;

    // int v1[3] = { 2, 9, 6 };
    // int v2[4] = { 3, 7, 7, 9 };
    // int* v3 = arrayConcat(v1, 3, v2, 4);
    // resultado { 2, 9, 6, 3, 7, 7, 9};

    int v1[3] = { 2, 9, 6 };
    int v2[4] = { 3, 7, 7, 9 };
    int* v3 = arrayConcat(v1, 3, v2, 4);
    // resultado { 2, 9, 6, 3, 7, 7, 9};

}