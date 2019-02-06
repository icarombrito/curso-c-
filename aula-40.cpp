 #include <stdio.h>
 #include <stdlib.h>

 int LimpaTela(){
 	system("CLS");
 }


 int main (int argc, char ** argv){
 
 	int a;
 	
 	printf("digite um valor para 'a' : ");
 	
 	scanf("%d", &a);
 	
 	LimpaTela();
 	
 	printf("o valor digitado foi : %d \nfim do programa ", a);
 	
	system("pause");
}
