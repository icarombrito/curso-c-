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
		
		p->proximo = novoValor;
	}
		
	p = p->proximo;	

	
	}

	
}

 void adcPosicaoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg, int posicao){
 	
 	pessoa *novoValor = new pessoa;
	novoValor->nome = nome;
	novoValor->rg = rg;
	novoValor->proximo = NULL;
	
	pessoa *p = ponteiroEncadeada;
	
	int cont = 0;
	
	while(cont <= posicao){
		
		if(cont == posicao - 1){
			
			pessoa *aux = new pessoa;
			
			aux->proximo = p->proximo;
			
			p->proximo = novoValor;
			
			novoValor->proximo = aux->proximo;
			
			free(aux);
		}
		
		p = p->proximo;	
		 
		cont++; 
	}
 	
 }

 void RemoveInicioEncadeada(pessoa *&ponteiroEncadeada){
 	
 	if(ponteiroEncadeada->proximo == NULL){
 		
 	pessoa *novoValor = new pessoa;
	novoValor->nome = "";
	novoValor->rg = 0;
	novoValor->proximo = NULL;
 		
 	   
	}else{
		ponteiroEncadeada = ponteiroEncadeada->proximo;
	}
 	
 	
 	ponteiroEncadeada = ponteiroEncadeada->proximo;
 	
 	
 }
 
 void RemoveFimEncadeada(pessoa *&ponteiroEncadeada){
 	
 	pessoa *p = new pessoa;
 	pessoa *aux = new pessoa;
 	
 	p = ponteiroEncadeada;
 		
 	while(p->proximo != NULL){
		 
		aux	= p;
		p = p->proximo;
	}
	 
	aux->proximo = NULL; 
	 
	 	
 }
 
 void RemovePosicaoEncadeada(pessoa *&ponteiroEncadeada, int posicao){
 	
 	pessoa *p = ponteiroEncadeada;
 	
 	int cont = 0;
 	
 	while(cont <= posicao){
 		
 		if(cont == posicao - 1){
 			
 			pessoa *aux = new pessoa;
 			
 			aux	= p->proximo;
 			
 			p->proximo = aux->proximo;
 			
 			free(aux);
         }
         
 		p = p->proximo;
 		
 		cont++;
       }
 	
 	
 	
 }
 
 string retornaNomeEncadeada(pessoa *&ponteiroEncadeada, int rg){
 	
 	string nome = "Nao Encontrado";
 	
 	pessoa *p = ponteiroEncadeada;
	
	while(p != NULL){
	
		if(p->rg == rg){
			
			nome = p->nome;
			
			return nome;
			
		}
		
	}
	
		
	p = p->proximo;	


	
 	
 	return nome;
 	
 }
 
 string retornaRgEncadeada(pessoa *&ponteiroEncadeada, string nome){
 	
 	string rg = "Nao Encontrado";
 	
 	pessoa *p = ponteiroEncadeada;
	
	while(p != NULL){
	
		if(p->nome == nome){
			
			rg = p->rg;
			
			return rg;
			
		}
		
	}
	
		
	p = p->proximo;	


	
 	
 	return rg;
 	
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
		
		if(retornaTamanho(ponteiroEncadeada) == 0){
            cout << "Lista Vazia\n";
		}else{
			imprimeEncadeada(ponteiroEncadeada);		
		}
		
		
        cin >> funcaoDesejada;

        limpaTela();
        
        string nome;
        int rg, posicao;
        
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
                
				if(retornaTamanho(ponteiroEncadeada) == 0){
                	adcComecoEncadeada(ponteiroEncadeada, nome, rg);
				}else{
					adcFimEncadeada(ponteiroEncadeada, nome, rg);
				}
                break;
                
            case 3:
                cout << "fucao escolhida : 3 - incercao de um node na posicao N. \n";
                cout << "Digite um posicao: ";
                cin >> posicao;
                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg;
                
                if(posicao == 0){
                    adcComecoEncadeada(ponteiroEncadeada, nome, rg);				
				}else if(posicao == retornaTamanho(ponteiroEncadeada) - 1){
					adcFimEncadeada(ponteiroEncadeada, nome, rg);
				}else{
				    adcPosicaoEncadeada(ponteiroEncadeada, nome, rg, posicao);
				}
                break;
                
                case 4:
                cout << "fucao escolhida : 4 - retirar de um node no inicio da lista. \n";
                
					RemoveInicioEncadeada(ponteiroEncadeada);
				
				break;
                
                case 5:
                cout << "fucao escolhida : 5 - retirar de um node no fim da lista. \n";
                
                if(retornaTamanho(ponteiroEncadeada) == 1){
                	RemoveInicioEncadeada(ponteiroEncadeada);
				}else{
					RemoveFimEncadeada(ponteiroEncadeada);
				}
				
				break;
                
                case 6:
                cout << "fucao escolhida : 6 - retirar de um node na posicao N. \n";
                cout << "Digite um posicao: ";
                cin >> posicao;
                
                if(posicao == 0){
                	RemoveInicioEncadeada(ponteiroEncadeada);
				}else if(posicao == retornaTamanho(ponteiroEncadeada) - 1){
					RemoveFimEncadeada(ponteiroEncadeada);
			    }else{
			    	RemovePosicaoEncadeada(ponteiroEncadeada, posicao);
				}
                
				break;
                
                case 7:
                cout << "fucao escolhida : 7 - procurar  um node com o campo RG. \n";
                
					cout << "Digite um RG: ";
                    cin >> rg;
                	                
                    cout << "o nome do rg : " << "eh :" << retornaNomeEncadeada(ponteiroEncadeada, rg) << "\n";
                   
			
				break;
				
			case 8:
                cout << "fucao escolhida : 8 - procurar  um node com o campo nome. \n";
         		
					cout << "Digite um nome: ";
                    cin >> nome;
                	                
                    cout << "o rg do nome : " << "eh :" << retornaRgEncadeada(ponteiroEncadeada, nome) << "\n";
                    
				
				break;
                
                
                
                
}
}
    system("pause");
} 
 
