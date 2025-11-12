#include <iostream>
using namespace std;



int le_numero(string msg){
int num;
cout << msg << endl;
cin >> num;

return num;

}

int maior_entre_dois(int a, int b){
   if(a > b){
    return a;
   }
   else{
    return b;
   }


}

int main(){
    int x, y;
    x = le_numero("Digite um numero inteiro:");
    y = le_numero("Digite um numero inteiro:");

    cout << "Maior: " << maior_entre_dois(x, y) << endl;
}

// EXERCÍCIO: COMPLETE A FUNÇÃO maior_entre_dois QUE RECEBE DOIS INTEIROS
// E RETORNA O MAIOR DELES.
// NO main, LEIA OS DOIS NÚMEROS E IMPRIMA O RESULTADO.
