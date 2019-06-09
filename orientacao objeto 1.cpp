 #include <cstdlib>
 #include <string>
 #include <iostream>

 using namespace std;
 
 class carro{
public:
 	
 	string marca;
 	int ano;
 	string cor;
 	
 };
 
 int main(int argc, char argv[]){
 	
 	  carro c1;
 	  c1.marca = "Ford";
 	  c1.cor = "Preto";
 	  c1.ano = 2019;
 	
 	  carro c2;
 	  c2.marca = "Ferrari";
	  c2.cor = "Branco";
 	  c2.ano = 2010;
 	  
 	  cout << c1.marca << endl;
 	  cout << c1.cor << endl;
 	  cout << c1.ano << endl;
 	  cout << c2.marca << endl;
 	  cout << c2.cor << endl;
 	  cout << c2.ano << endl;
 	  
	 return 0;
}
 
