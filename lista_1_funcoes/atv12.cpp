#include <iostream>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO classificar_nota QUE RECEBE UMA NOTA ENTRE 0 E 100
// E RETORNA UM CONCEITO:
// - 90+  : A
// - 80-89: B
// - 70-79: C
// - 60-69: D
// - <60  : F
// NO main, LEIA A NOTA E IMPRIMA O CONCEITO.
int le_numero(string msg){
int num;
cout << msg << endl;
cin >> num;

return num;

}

char classificar_nota(int a){
if(a > 90){
    return 'A';
}
else if(a >= 80 && a <= 89){
    return 'B';
}
else if(a >= 70 && a <= 79){
    return 'C';
}
else if(a >= 60 && a <= 69){
    return 'D';
}

else{
    return 'F';
}

}

int main(){
    int n;
	n = le_numero("Digite sua nota: ");

    cout << "Conceito: " << classificar_nota(n) << endl;
}

