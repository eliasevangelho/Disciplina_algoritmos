#include <iostream>

using namespace std;

// JOGO DA VELHA - INICIADO 
// 20/08/2025
// Jogo da velha 3x3


	char jogador_x(char matriz[3][3]){
        int pos_linha, pos_coluna;
        cout << "Jogador X, digite uma posicao:" << endl;
        cout << "Digite a linha e a coluna da jogada" << endl;
        cin >> pos_linha >> pos_coluna;
        cout << "Voce digitou a linha " << pos_linha << " e a coluna " << pos_coluna << endl;

        // Marcar a jogada no tabuleiro
        char xis = 'X';
        matriz[pos_linha][pos_coluna] = xis;
	return 'X';
}


        char jogador_o(char matriz[3][3]){
	int pos_linha, pos_coluna;
        cout << "Jogador O, digite uma posicao:" << endl;
        cout << "Digite a linha e a coluna da jogada" << endl;
        cin >> pos_linha >> pos_coluna;
        cout << "Voce digitou a linha " << pos_linha << " e a coluna " << pos_coluna << endl;

        // Marcar a jogada no tabuleiro
        char bola = 'O';
        matriz[pos_linha][pos_coluna] = bola;
	return 'O';
	}



	void imprime_tabuleiro(char matriz[3][3]){
        // Imprimir o tabuleiro após a jogada
        cout << "Configuracao do tabuleiro:" << endl;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                     cout << matriz[i][j] << " ";
                }
                cout << endl;
        }

}


	bool verifica_vitoria(char matriz[3][3], char letra){
	//Linhas
	if(matriz[0][0] == letra && matriz[0][1] == letra &&  matriz[0][2] == letra){
	return true;
	
	}
	else if(matriz[1][0] == letra && matriz[1][1] == letra && matriz[1][2] == letra){
        return true;

        }
	else if(matriz[2][0] == letra && matriz[2][1] == letra && matriz[2][2] == letra){
        return true;
        }

	//Colunas
	else if(matriz[0][0] == letra && matriz[1][0] == letra && matriz[2][0] == letra){
        return true;

        }
	else if(matriz[0][1] == letra && matriz[1][1] == letra && matriz[2][1] == letra){
        return true;

        }
	else if(matriz[0][2] == letra && matriz[1][2] == letra && matriz[2][2] == letra){
        return true;

        }
	//Diagonais
	else if(matriz[0][0] == letra && matriz[1][1] == letra && matriz[2][2] == letra){
        return true;

        }
	else if(matriz[0][2] == letra && matriz[1][1] == letra && matriz[2][0] == letra){
        return true;
	
	}
	else{
		return false;
	}





}


	int main(){
	
	//Declarando 
	char tabuleiro[3][3];
	char vazio = '*';

	// Preencher o tabuleiro com posicoes vazias
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			tabuleiro[i][j] = vazio;
		}
	}

	// Imprimir o tabuleiro
	cout << "Configuracao do tabuleiro:" << endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << tabuleiro[i][j] << " ";
		}
		cout << endl;
	}
	

	//Jogadores X e O
	int cont = 1;
	char verificador;
	bool vencedor;

	while(cont < 9){

	verificador = jogador_x(tabuleiro);
	cont++;
	imprime_tabuleiro(tabuleiro);
	vencedor = verifica_vitoria(tabuleiro, verificador);
	if(vencedor){
                break;

                }
        else{
	}


	verificador = jogador_o(tabuleiro);
	cont++;
	imprime_tabuleiro(tabuleiro);
	vencedor = verifica_vitoria(tabuleiro, verificador);

	if(vencedor){
		break;

		}
	else{
	}
}	




	if(vencedor){
		cout << "O vencedor eh o " << verificador << "!!" << endl;
	}
	else{
		cout << "Deu Velha!! haha" << endl;

	}




}
