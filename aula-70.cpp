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

 void adcFimSenquecial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista, string nome, int rg){
 	
 	pessoa *novaListaSenqueial = new pessoa [*tamanhoDaLista + 1];
 	
 	int cont;
	for(cont = 0; cont < *tamanhoDaLista;cont++){
		novaListaSenqueial[cont].nome = ponteiroSenquencial [cont].nome;
		novaListaSenqueial[cont].rg = ponteiroSenquencial [cont].rg;
 	
 	novaListaSenqueial[*tamanhoDaLista].nome = nome;
	novaListaSenqueial[*tamanhoDaLista].rg = rg;
 	
 	ponteiroSenquencial = novaListaSenqueial;
 	
 	*tamanhoDaLista = *tamanhoDaLista + 1;
 	
}
 	
 }

 void adcPosicaoSenquecial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista, string nome, int rg, int posicao){
 	
  	
	pessoa *novaListaSenqueial = new pessoa [*tamanhoDaLista + 1];
	
	int cont;
	for(cont = 0; cont < posicao; cont++){
		novaListaSenqueial[cont].nome = ponteiroSenquencial [cont].nome;
		novaListaSenqueial[cont].rg = ponteiroSenquencial [cont].rg;
	}

	novaListaSenqueial[posicao].nome = nome;
	novaListaSenqueial[posicao].rg = rg;
	
	
	ponteiroSenquencial = novaListaSenqueial;
 	
 	*tamanhoDaLista = *tamanhoDaLista + 1;
}
	
 void RemoveInicioSenquecial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista){
  	pessoa *novaListaSenqueial = new pessoa [*tamanhoDaLista - 1];

	int cont;
	for(cont = 1; cont < *tamanhoDaLista; cont++){
		novaListaSenqueial[cont-1].nome = ponteiroSenquencial [cont].nome;
		novaListaSenqueial[cont-1].rg = ponteiroSenquencial [cont].rg;
	}
	
	ponteiroSenquencial = novaListaSenqueial;
 	
 	*tamanhoDaLista = *tamanhoDaLista - 1;
 	
}	

 void RemoveFimSenquecial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista){
	pessoa *novaListaSenqueial = new pessoa [*tamanhoDaLista - 1];

	int cont;
	for(cont = 0; cont < *tamanhoDaLista - 1; cont++){
		novaListaSenqueial[cont].nome = ponteiroSenquencial [cont].nome;
		novaListaSenqueial[cont].rg = ponteiroSenquencial [cont].rg;
	}
	
	ponteiroSenquencial = novaListaSenqueial;
 	
 	*tamanhoDaLista = *tamanhoDaLista - 1;
 	
}

 void RemoveposicaoSenquecial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista, int posicao){
	pessoa *novaListaSenqueial = new pessoa [*tamanhoDaLista - 1];

	int cont;
	for(cont = 0; cont < *tamanhoDaLista - 1; cont++){
		if(cont < posicao){
		novaListaSenqueial[cont].nome = ponteiroSenquencial [cont].nome;
		novaListaSenqueial[cont].rg = ponteiroSenquencial [cont].rg;
	}else{
		novaListaSenqueial[cont].nome = ponteiroSenquencial [cont + 1].nome;
		novaListaSenqueial[cont].rg = ponteiroSenquencial [cont + 1].rg;
	}
}
	ponteiroSenquencial = novaListaSenqueial;
 	
 	*tamanhoDaLista = *tamanhoDaLista - 1;
 	
}

 string retornaNomeSenquencial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista, int rg){
 	string nome = "nao econtrado";
 	
	int cont;
	for(cont = 0; cont < *tamanhoDaLista; cont++){
		
		if(ponteiroSenquencial[cont].rg == rg){
		nome = ponteiroSenquencial[cont].nome;
			}
			
	}
	
	return nome;
	
}

 string retornaRgSenquencial(pessoa *&ponteiroSenquencial, int *tamanhoDaLista, string nome){
 	string rg = "nao econtrado";
 	
	int cont;
	for(cont = 0; cont < *tamanhoDaLista; cont++){
		
		if(ponteiroSenquencial[cont].nome == nome){
		rg = ponteiroSenquencial[cont].rg;
			}
			
	}
	
	return rg;
	
}

 int main(int argc, char **argv) {
    int funcaoDesejada = 1;
    pessoa *ponteiroSenquencial;
    int tamanhoDaLista = 3;

    pessoa *exemploListaSenquencial = new pessoa[3];
    exemploListaSenquencial[0].nome = "Sileno";
    exemploListaSenquencial[0].rg = 55555;
    exemploListaSenquencial[1].nome = "Suziane";
    exemploListaSenquencial[1].rg = 15812;
    exemploListaSenquencial[2].nome = "Icaro";
    exemploListaSenquencial[2].rg = 12345;
    ponteiroSenquencial = exemploListaSenquencial;

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

                adcComecoSenquecial(*&ponteiroSenquencial, &tamanhoDaLista, nome, rg);
                break;
                
				case 2:
                cout << "fucao escolhida : 2 - incercao de um node no Fim da lista. \n";
                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg;
                
                if(tamanhoDaLista == 0){
                	adcComecoSenquecial(*&ponteiroSenquencial, &tamanhoDaLista, nome, rg);
				}else{
					adcFimSenquecial(*&ponteiroSenquencial, &tamanhoDaLista, nome, rg);
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
                	adcComecoSenquecial(ponteiroSenquencial, &tamanhoDaLista, nome, rg);
				}else if(posicao == tamanhoDaLista){
					adcFimSenquecial(ponteiroSenquencial, &tamanhoDaLista, nome, rg);
				}else{
				    adcPosicaoSenquecial(ponteiroSenquencial, &tamanhoDaLista, nome, rg, posicao);
				}
                break;
				
				case 4:
                cout << "fucao escolhida : 4 - retirar de um node no inicio da lista. \n";
                if(tamanhoDaLista == 0){
                	cout << "\n Lista Vazia! \n";
				}else{
					RemoveInicioSenquecial(*&ponteiroSenquencial, &tamanhoDaLista);
				}
				break;
				
					case 5:
                cout << "fucao escolhida : 5 - retirar de um node no fim da lista. \n";
                if(tamanhoDaLista == 0){
                	cout << "\n Lista Vazia! \n";
				}else{
					RemoveFimSenquecial(*&ponteiroSenquencial, &tamanhoDaLista);
				}
				break;
				
				case 6:
                cout << "fucao escolhida : 6 - retirar de um node na posicao N. \n";
                if(tamanhoDaLista == 0){
                	cout << "\n Lista Vazia! \n";
				}else{
					cout << "Digite um posicao: ";
                    cin >> posicao;
				
					if(posicao == 0){
						RemoveInicioSenquecial(*&ponteiroSenquencial, &tamanhoDaLista);
					}else if(posicao == tamanhoDaLista -1) {
						RemoveFimSenquecial(*&ponteiroSenquencial, &tamanhoDaLista);	
					}else{
						RemoveposicaoSenquecial(*&ponteiroSenquencial, &tamanhoDaLista, posicao);
					}
				}
				break;
				
				case 7:
                cout << "fucao escolhida : 7 - procurar  um node com o campo RG. \n";
                if(tamanhoDaLista == 0){
                	cout << "\n Lista Vazia! \n";
				}else{
					cout << "Digite um RG: ";
                    cin >> rg;
                	                
                    cout << "nome : " << retornaNomeSenquencial(*&ponteiroSenquencial, &tamanhoDaLista, rg);
                
				}
				break;
				
				case 8:
                cout << "fucao escolhida : 8 - procurar  um node com o campo nome. \n";
         		if(tamanhoDaLista == 0){
                	cout << "\n Lista Vazia! \n";
				}else{
					cout << "Digite um nome: ";
                    cin >> nome;
                	                
                    cout << "rg : " << retornaRgSenquencial(*&ponteiroSenquencial, &tamanhoDaLista, nome);
                
				}
				break;
				
				case 9:
                cout << "fucao escolhida : 9 - imprimir a lista. \n";
         		imprimeSenquecial(ponteiroSenquencial, &tamanhoDaLista);
         		
                break;
        
                
                case 10:
                cout << "fucao escolhida : 10 - sair do sistema \n";
         
                break;
   
}
}
    system("pause");
} 

