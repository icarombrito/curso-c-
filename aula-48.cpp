 #include <stdio.h>
 #include <stdlib.h>

 int main (int argc, char ** argv){
 
 	int linha = 3, colunas = 3, i, j;
 	int **matriz;
 	
 	matriz = (int **) malloc(linhas * sizeof (int **));
 	
 	for(i = 0;i < linhas;i++);
 	
 	matriz[i] = matriz = (int **) malloc(colunas * sizeof (int **));
 	
 	for(i = 0;i < linhas;i++);
 		for(j = 0;j < colunas;j++);
 	
 	matriz[i][j] = i;
 	
 	
 	printf("%d ", matriz[i][j]);
 	
 	printf("\n");
 	
	system("pause");
}
