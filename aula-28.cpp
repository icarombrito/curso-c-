#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
 	
	char palavra [1000];
	printf("digite uma palavra: ");
	
	setbuf(stdin, 0);
	
	fgets(palavra, 1000, stdin);
	
	printf("%s", palavra);

	//palavra(strlen{palavra}- 1) = '\0'
	printf("oi mundo e tchau mundo");
	
	
	
	("pause");
}
