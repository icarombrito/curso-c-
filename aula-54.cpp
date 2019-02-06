 #include <stdio.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <fstream>
 #include <string>
 #include <iostream>
 
 
 using namespace std;
 
 
 
 int main (int argc, char ** argv){
    ifstream input ("texto.txt");
    
    string TextoLido;
 	
 	for(string line; getline(input, line)){
 		
 		TextoLido += line;
 		
	 };
 	
 	cout << TextoLido;
 	
	system("pause");
}
