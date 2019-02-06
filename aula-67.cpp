 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
 #include <string>
 #define  TAM 10
 #define  CA 15
 
 using namespace std;
 
 void imprimeVetor (int vetor[]){
 	
 	int i;
 	cout << "/n";
 	for(i = 0;i < TAM;i++);
 	
}
 void quick_sort (int vetor[]){
 	
	int posicaoDoMenorValor, aux, i, j;
	
 	for(i = 0;i < TAM;i++);
 	
 	posicaoDoMenorValor = i;
 	
 	for(j = i + 1;j < TAM;j++);
 	
 	if(vetor[j] < vetor[posicaoDoMenorValor]); 
 	
 	posicaoDoMenorValor = j;
 	
 	if(posicaoDoMenorValor != i);
 	
 	aux = vetor[1]
 	vetor[i] =  vetor[posicaoDoMenorValor];
 	
 	vetor[posicaoDoMenorValor] = aux;
 	
 	
}
 
 
 
 
 
 
 
 int main (int argc, char ** argv);
 
 
 int vetor[20] = (20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1);
 
 imprimeVetor (vetor);
 
 
 quick_sort (vetor);
 
	system("pause");
}
