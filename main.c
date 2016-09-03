//###################################################################################################
// Programa - atividade com ponteiros 
// Cadeira - laborat�rio de algoritmos II
// 
//###################################################################################################
// Autor : LPNS - Luis Paulo Nery
// Dara : 02/09/2016
//
//###################################################################################################4


#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// cria��o e inicializa��o de variaveis 
	int variavel_1 = 1, variavel_2 = 2;
	char controle = 'n', descarga;
	
	//cria��o de ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	//enquanto
	while (1)
	{
		//inicializao��o dos ponteiros
		ponteiro_1 = &variavel_1; // ponteiro_1 recebe endere�o de variavel_1
		ponteiro_2 = &variavel_2; // ponteiro_2 recebe endere�o de variavel_2
		
		//exibe o valor em cada ponteiro a partir do endere�o contido neles
		printf ("\nVarivel_1 = %i", *ponteiro_1);
		printf ("\nVarivel_2 = %i", *ponteiro_2);
		
		//exibe a solicita��o de controle
		printf ("\n\nDeseja finalizar o programa? (s/n)");
		scanf ("%c", &controle);
		//caso atenda o caso, ir� finalizar o loop
		if (controle == 's') break;
		
		//exibe a solicita��o de valor
		printf ("Digite um valor para variavel_1: ");
		//efetua a leitura de e tranfere o valor para variavel_1
		scanf ("%i", ponteiro_1);
		//exibe a solicita��o de valor
		printf ("Digite um valor para variavel_2: ");
		//efetua a leitura de e tranfere o valor para variavel_2
		scanf ("%i%c", ponteiro_2, &descarga);		
	}
	//retorna 0
	return 0;
}
