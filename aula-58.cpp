 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
 #include <string>
 #define  TAM 10
 #define  CA 1
 
 using namespace std;
 
 int main (int argc, char ** argv){
 
 	int pilha[TAM] = (0,1,2,3,4);
 	int topo = -CA;
 	
 	if(topo == TAM -CA){
 		
 	cout << "pilha cheia!";
 		
 		}else{
	 	
	 	topo = topo +CA;
	 	pilha[topo] =5;
	 	
	 	imprime_vetor(pilha);
	 	
	 	pilha_push(pilha, 5, &topo);
	 	
	 	imprime_veto(pilha);
	 	
	 	
	 	
	 	
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
	system("pause");
}
