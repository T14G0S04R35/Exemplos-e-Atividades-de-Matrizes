#include <locale.h>
#include <limits.h>

int main() {
	setlocale (LC_ALL, "");
	
	int i, j;
	float notas[4][3];
	float media[4], soma = 0;
	char alunos[4][200];
	
	printf("=== Solicitando dados para o usu�rio === \n");
	for (i = 0; i < 4; i++){
	
	     printf("Digite a %i� nota: ", i+j);
	       scanf("%s",&alunos[i]);
	
	    for (j = 0; j < 3; j++){
	 	 printf("Digite a %i� nota: ", j+1);
		   scanf("%f",&notas[i][j]); 
		   
		   soma += notas[i][j];
	 }
	 
	 media[i] = soma / 3;
	 soma = 0;
	 
	 printf("\n");     
	}
	
	printf("\n === Exibindo dados para o usu�rio === \n");
	for (i = 0; i < 4; i++){
		 
		 printf("%i� aluno:%s \n", i+1, alunos[i]);
	    
	    for (j = 0; j < 3; j++){
	    	printf("%i� nota: %.1f \n", j+i, notas[i][j]);
		}
		
		printf("M�dia: %.1f \n", media[i]);
		printf("\n");
	}
	return 0;
	}
