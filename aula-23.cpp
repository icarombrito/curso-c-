 #include <stdio.h>
 #include <stdlib.h>

 int main (int argc, char ** argv){
 
 	int a = 1, b = 10;

 	do{
 	
		printf("\n%d", a);
	
	a = a + 1;
}while(a <= 10);
	
	b = 10;
	
	do{
 	
		printf("\n%d", b);
	
	b = b - 1;
}while(b >= 1);
	system("pause");
}
