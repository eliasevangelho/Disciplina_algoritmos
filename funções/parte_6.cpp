#include <iostream>
using namespace std;

int le_vetor(string msg){
    int num;
    cin >> num;
    return num;
}

void dobra_vetor(int vetor[], int num){
    for(int i = 0; i < num; i++){
        vetor[i] = vetor[i] * 2;

    }
}

int main(){
    int vet_numeros[5], tam = 5;

    cout << "Digite 5 numeros para serem dobrados: " << endl;

    for(int i = 0; i < tam; i++){
        vet_numeros[i] = le_vetor("oioioi");
    }


    cout << "O dobro dos valores digitados: " << endl;

    dobra_vetor(vet_numeros, tam);


    for(int i = 0; i < tam; i++){
        cout << vet_numeros[i] << " ";
    }
    cout << endl;

}
