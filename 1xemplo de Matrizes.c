#include <locale.h>
#include <limits.h>

int main() {
	setlocale (LC_ALL, "");
	
	int numero[2][2];
	
	numero[0][0] = 1;
	numero[0][1] = 2;
	numero[1][0] = 3;
	numero[1][1] = 4;
	
	printf("Elemento 1: %d\n ",numero[0][0]);
	printf("Elemento 2: %d\n ",numero[0][1]);
	printf("Elemento 2: %d\n ",numero[1][0]);
	printf("Elemento 3: %d\n ",numero[1][1]);
	
return 0;	
}


