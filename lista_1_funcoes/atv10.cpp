#include <iostream>
using namespace std;


int le_numero(string msg){
int num;
cout << msg << endl;
cin >> num;

return num;

}

string faixa_etaria(int a){
if(a < 12){
    return "crianca";
}
else if(a >= 12 && a <= 17){
    return "adolescente";
}
else if(a > 17 && a < 60){
    return "adulto";
}
else{
    return "idoso";
}

}

int main(){
    int idade;
    idade = le_numero("Digite sua idade: ");

    cout << "Voce e um(a): " << faixa_etaria(idade) << endl;
}

// EXERCÍCIO: CRIE UMA FUNÇÃO faixa_etaria QUE RECEBE UMA IDADE
// E RETORNA UMA STRING COM A CLASSIFICAÇÃO:
// - < 12: "criança"
// - 12 a 17: "adolescente"
// - 18 a 59: "adulto"
// - >= 60: "idoso"
// NO main, LEIA UMA IDADE E IMPRIMA A CLASSIFICAÇÃO.
