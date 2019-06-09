#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){
    system("CLS");
}

string retornaPalavraAleatoria(){

     //Vetor com palavras dispon�veis
    string palavras[11] = {"familia", "endere�o", "planeta", "pais", "quadra", "bairro", "numero", "rua", "icaro", "sileno", "suziane"};

    //Indice gerado no intervalo {0,1,2,3,4,5,6,7,8,9,10}
    int indiceAleatorio = rand() % 11;
    
    //Exibe a palavra aleat�ria
    //cout << palavras[indiceAleatorio];

    return palavras[indiceAleatorio];
}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas, string mensagem){

    cout << "A palavra secreta eh: " << palavra << "(Tamanho:" << tamanhoDaPalavra << ")";
    cout << mensagem;
    cout << "\nPalavra:" << palavraComMascara << "(Tamanho:" << tamanhoDaPalavra << ")";
    cout << "\nTentativas Restantes:" << tentativasRestantes;

    //Exibe as letras arriscadas
    int cont;
    cout << "\nLetras arriscadas:";
    for(cont = 0; cont < letrasJaArriscadas.size();cont++){
        cout << letrasJaArriscadas[cont] << ", ";
    }

}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){

    int cont = 0;
    string palavraComMascara;

    //Coloca uma m�scara
    while(cont < tamanhoDaPalavra){
        palavraComMascara += "_";
        cont++;
    }

    return palavraComMascara;
}

int main(){

    //Para gerar n�meros realmente aleat�rios
    srand( (unsigned)time(NULL));

    return 0;
}
