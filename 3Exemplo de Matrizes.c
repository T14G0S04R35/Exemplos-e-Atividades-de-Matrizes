#include <locale.h>
#include <limits.h>

int main() {
	setlocale (LC_ALL, "");
	
	int i, j;
	float notas[2][3];
	char alunos[2][200];
	
	printf("=== Solicitando dados para o usuário === \n");
	for (i = 0; i < 2; i++){
	
	     printf("Digite a %iº nota: ", i + j);
	       scanf("%s",&alunos[i]);
	
	    for (j = 0; j < 3; j++){
	 	 printf("Digite a %iº nota: ", j+1);
		   scanf("%f",&notas[i][j]); 
	 }
	 
	 printf("\n");     
	}
	
	printf("\n === Exibindo dados para o usuário === \n");
	for (i = 0; i < 2; i++){
		 
		 printf("%iº aluno:%s \n", i+1, alunos[i]);
	    
	    for (j = 0; j < 3; j++){
	    	printf("%iº nota: %.1f \n", j+i, notas[i][j]);
		}
		
		printf("\n");
	}
	return 0;
	}
