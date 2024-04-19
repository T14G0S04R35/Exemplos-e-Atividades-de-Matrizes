#include <locale.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

#define TAM 3
int main() {
	setlocale (LC_ALL, "");
	
	int i, j;
	float notas[TAM][TAM];
	float media[3], soma = 0;
	char disiplina[3][200];

	printf("=== Solicitando dados para o usuário === \n");
	for (i = 0; i < TAM; i++){

	     printf("Digite a %iº disiplina: ", i+1);
	       scanf("%s",&disiplina[i]);

	    for (j = 0; j < TAM; j++){
	 	 printf("Digite a %iº nota: ", j+1);
		   scanf("%f",&notas[i][j]); 

		   soma += notas[i][j];
		   
		  
	    }

	    media[i] = soma / 2;
	    soma = 0;

	 printf("\n");
	 
	 system("cls||clear");     
	}

	printf("\n === Exibindo dados para o usuário === \n");


    printf("");
	for (i = 0; i < TAM; i++){

		 printf("%iº disiplina:%s \n", i+1, disiplina[i]);

	    for (j = 0; j < TAM; j++){
	    	printf("%iº nota: %1.f \n", j+i, notas[i][j]);
	}
		printf("Média: %.1f \n", media[i]);
		printf("\n");
		
		if(media[i] >= 7){
    printf ("\n Aprovado.");
    } else if(media[i] >= 5){
    printf ("\n Recoperação.");
	} else (media[i] < 5){
    printf ("\n Reprovado.");
	}	

	}
	return 0;

	
	
	
	
	
	}

