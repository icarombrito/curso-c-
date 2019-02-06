 #include <stdio.h>
 #include <stdlib.h>
 
 int main (int argc, char ** argv){

	int b = 10;	
	float r = 5.4;
	char a = 'x';
	
	if(b == 10) {
		printf("\n A variavel b = 10");
    }
		
	if(r == 5.4) {
		printf("\n A variavel r = 5.4");
	
	if(a == 'x') {
		printf("\n A variavel a = x");
    }
				
	if(b % 2 == 1) {
		printf("\n A variavel b eh impar");	
	}else{
		printf("\n A variavel b eh par");
	}
	
	
 	system("pause");
}
