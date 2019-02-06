 #include <stdio.h>
 #include <stdlib.h>
 
 int main (int argc, char ** argv){
 	
 	int i = 4, c = 5;
 	
 	//Soma
	printf("\n A soma de %d e %d = %d",i , c , i + c);
	
	//Subtração
	printf("\n A subtracao de %d e %d = %d",i , c , i - c);
	
	//Divisão
	printf("\n A divisao de %d e %d = %d",i , c, i / c);
	
	//Multiplicação
	printf("\n A multiplicacao de %d e %d = %d",i , c, i * c);
	
	//Resto da divisão
	printf("\n O resto da divisao de %d e %d = %d",i , c, i % c);
	
	//valor absoluto
	printf("\n O valor absoluto de -3 = %d", abs(-3));
	
	
	system("pause");
	
}

