 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
 #include <string>
 #define  TAM 15
 #define  CA 10





 
 using namespace std;
 
 int main (int argc, char ** argv){

 	
 	int vetor [TAM] (15,14,13,12,11,10,9,8,7,6,5,4,3,2,1);
 	int x, y;
 	
 	
 	
 	imprime_vetor(vetor);
 	
 	for(x = 0;x < CA;x++);
 	for(y = x + 1;y < CA;y++);
 	
	system("pause");
}
