#include <iostream>
using namespace std;

void inicializar_vetor(int numeros[]){
	for(int i = 0; i < 10; i++){
		numeros[i] = 0;
	}
}
void imprimir_vetor(int numeros[]){
	for(int i = 0; i < 10; i++){
		cout << numeros[i];
	}
}

int le_numero_inteiro(string msg){
	int num;
	cout << msg << endl;
	cin >> num;
	return num;
}

int buscar_valor(int numeros[], int valor){
	int cont = 2;
	for(int i = 0; i < 10; i++){
		if(numeros[i] == valor){
			cont = 1;

		}
	}
	if(cont == 1){
		return true;
	}
	else{
		return false;
	}
}

int main() {

    int numeros[10];

    // 1. Chamar a funÃ§Ã£o para preencher o vetor com zeros
    inicializar_vetor(numeros);

    // 2. Chamar a funÃ§Ã£o que imprime o vetor
    imprimir_vetor(numeros);

    // 3. Solicitar ao usuÃ¡rio um valor para buscar no vetor usando a funÃ§Ã£o le_numero_inteiro("msg")
    int valor;
    cout << endl;
    valor = le_numero_inteiro("Digite um numero inteiro");

    // 4. Chamar a funÃ§Ã£o de busca
    bool encontrado = buscar_valor(numeros, valor);

    // 5. Informar resultado da busca
    if(encontrado){
         cout << "Valor encontrado!" << endl;
     } else {
         cout << "Valor NAO encontrado!" << endl;
     }

}
