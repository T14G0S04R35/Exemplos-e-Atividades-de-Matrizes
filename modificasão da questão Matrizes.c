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

	printf("=== Solicitando dados para o usu�rio === \n");
	for (i = 0; i < TAM; i++){

	     printf("Digite a %i� disiplina: ", i+1);
	       scanf("%s",&disiplina[i]);

	    for (j = 0; j < TAM; j++){
	 	 printf("Digite a %i� nota: ", j+1);
		   scanf("%f",&notas[i][j]); 

		   soma += notas[i][j];
		   
		  
	    }

	    media[i] = soma / 2;
	    soma = 0;

	 printf("\n");
	 
	 system("cls||clear");     
	}

	printf("\n === Exibindo dados para o usu�rio === \n");


    printf("");
	for (i = 0; i < TAM; i++){

		 printf("%i� disiplina:%s \n", i+1, disiplina[i]);

	    for (j = 0; j < TAM; j++){
	    	printf("%i� nota: %1.f \n", j+i, notas[i][j]);
	}
		printf("M�dia: %.1f \n", media[i]);
		printf("\n");
		
		if(media[i] >= 7){
    printf ("\n Aprovado.");
    } else if(media[i] >= 5){
    printf ("\n Recopera��o.");
	} else (media[i] < 5){
    printf ("\n Reprovado.");
	}	

	}
	return 0;

	
	
	
	
	
	}

