 #include <iostream>
 #include <new>
 #include <string>
 #include <stdlib.h>

using namespace std;

 struct pessoa {
    string nome;
    int rg;
    struct pessoa *proximo;
};

 void limpaTela() {

    system("CLS");
}

 void imprimeEncadeada(pessoa *ponteiroEncadeada){
 	
 	pessoa *p = ponteiroEncadeada;
 	
 	while(p != NULL){
	
	cout << p->nome << "," << p->rg << "\n";
		
	p = p->proximo;	
	
	}
 }

 int retornaTamanho(pessoa *ponteiroEncadeada) {
	
	int tamanho = 0;
	
	pessoa *p = ponteiroEncadeada;
	
	while(p != NULL){
		
	p = p->proximo;	
	
	tamanho++;
	}
	
	return tamanho;
	
}

 void adcComecoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg) {
 
	pessoa *novoValor = new pessoa;
	novoValor->nome = nome;
	novoValor->rg = rg;
	novoValor->proximo = ponteiroEncadeada;
	
	ponteiroEncadeada = novoValor;
	
}

 void adcFimEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg) {
 
    pessoa *novoValor = new pessoa;
	novoValor->nome = nome;
	novoValor->rg = rg;
	novoValor->proximo = NULL;
	
	pessoa *p = ponteiroEncadeada;
	
	while(p != NULL){
	
	if(p->proximo == NULL){
		
		p->proximo
	}
		
	p = p->proximo;	

	
	}

	
}


 int main(int argc, char **argv) {
	
	int funcaoDesejada = 1;
    
    pessoa *ponteiroEncadeada;
    
    pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome = "Sileno";
    novoPrimeiroValor->rg = 55555;
    novoPrimeiroValor->proximo = NULL;
    
    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome = "Suziane";
    novoSegundoValor->rg = 15812;
    novoSegundoValor->proximo = NULL;
    
    novoPrimeiroValor->proximo = novoSegundoValor;
    
    pessoa *novoTerceiroValor = new pessoa;
    novoTerceiroValor->nome = "Icaro";
    novoTerceiroValor->rg = 12345;
    novoTerceiroValor->proximo = NULL;
    
    novoSegundoValor->proximo = novoTerceiroValor;
    
    ponteiroEncadeada = novoPrimeiroValor;
    
    while (funcaoDesejada < 10 && funcaoDesejada > 0) {

		
        cout << "Operacoes \n";
        cout << "1 - incercao de um node no inicio da lista. \n";
        cout << "2 - incercao de um node no fim da lista. \n";
        cout << "3 - incercao de um node na posicao N. \n";
        cout << "4 - retirar de um node no inicio da lista. \n";
        cout << "5 - retirar de um node no fim da lista. \n";
        cout << "6 - retirar de um node na posicao N. \n";
        cout << "7 - procurar  um node com o campo RG. \n";
        cout << "8 - procurar  um node com o campo nome. \n";
        cout << "9 - imprimir a lista. \n";
        cout << "10 - sair do sistema \n";
        cout << "escolha um numero e pressione ENTER: \n";
		cout << "\n\nTamanho Atual:" << retornaTamanho(ponteiroEncadeada) << "\n";
		
		imprimeEncadeada(ponteiroEncadeada);
		
        cin >> funcaoDesejada;

        limpaTela();
        
        string nome;
        int rg;
        
        switch (funcaoDesejada) {
        	
            case 1:
                cout << "fucao escolhida : 1 - incercao de um node no inicio da lista. \n";
                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg;
                    adcComecoEncadeada(ponteiroEncadeada, nome, rg);
                break;
        		
   				case 2:
                cout << "fucao escolhida : 2 - incercao de um node no Fim da lista. \n";
                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg;
                
					adcFimEncadeada(ponteiroEncadeada, nome, rg);
					
                break;
}
}
    system("pause");
} 
 
