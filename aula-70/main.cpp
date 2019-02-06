#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct pessoa {
    string nome;
    int rg;
};

void limpaTela() {

    system("CLS");
}

void imprimeSenquecial(pessoa *ponteiroSenquencial, int *tamanhoDaLista) {
    int cont;
    for (cont = 0; cont < *tamanhoDaLista; cont++) {
        cout << ponteiroSenquencial[cont].nome << "," << ponteiroSenquencial[cont].rg << "\n";
    }
}

void adcComecoSenquecial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista, string nome, int rg) {
    if (*tamanhoDaLista == 0) {
        pessoa *novaListaSenqueial = new pessoa[1];
        novaListaSenqueial[0].nome = nome;
        novaListaSenqueial[0].rg = rg;
        ponteiroSenquencial = novaListaSenqueial;
    } else {
        pessoa *novaListaSenqueial = new pessoa [*tamanhoDaLista + 1];
        novaListaSenqueial[0].nome = nome;
        novaListaSenqueial[0].rg = rg;

        int cont;
        for (cont = 0; cont < *tamanhoDaLista; cont++) {
            novaListaSenqueial[cont + 1].nome = ponteiroSenquencial [cont].nome;
            novaListaSenqueial[cont + 1].rg = ponteiroSenquencial [cont].rg;
            ponteiroSenquencial = novaListaSenqueial;
        }

        *tamanhoDaLista = *tamanhoDaLista + 1;
    }
}

int main(int argc, char **argv) {
    int funcaoDesejada = 1;
    pessoa *ponteiroSenquencial;
    int tamanhoDaLista = 3;

    pessoa *exemploListaSenquencial = new pessoa[3];
    exemploListaSenquencial[0].nome = "sileno";
    exemploListaSenquencial[0].rg = 55555;
    exemploListaSenquencial[1].nome = "suziane";
    exemploListaSenquencial[1].rg = 15812;
    exemploListaSenquencial[2].nome = "ícaro";
    exemploListaSenquencial[2].rg = 12345;
    ponteiroSenquencial = exemploListaSenquencial;

    while (funcaoDesejada < 10 && funcaoDesejada > 0) {
        imprimeSenquecial(ponteiroSenquencial, &tamanhoDaLista);

        cout << "Operacoes \n";
        cout << "1 - incercao de um node no inicio da lista. \n";
        cout << "2 - incercao de um node no fim da lista. \n";
        cout << "3 - incercao de um node na posicao N. \n";
        cout << "4 - retirar de um node no inicio da lista. \n";
        cout << "5 - retirar de um node no fim da lista. \n";
        cout << "6 - retirar de um node na posicao N. \n";
        cout << "7 - procurar  um node com o campo RG. \n";
        cout << "8 - imprimir a lista. \n";
        cout << "9 - sair do sistema. \n";
        cout << "  escolha um numero e pressione ENTER: \n";

        cin >> funcaoDesejada;

        limpaTela();

        string nome;
        int rg;

        switch (funcaoDesejada) {
            case 1:
                cout << "fucao escolhida : 1 - incercao de um node no inicio da lista.";
                cout << "Digite um nome";
                cin >> nome;
                cout << "Digite um RG";
                cin >> rg;

                adcComecoSenquecial(*&ponteiroSenquencial, &tamanhoDaLista, nome, rg);
                break;
        }
    }

    system("pause");
}
