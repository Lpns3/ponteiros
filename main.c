//###################################################################################################
// Programa - atividade com ponteiros 
// Cadeira - laboratório de algoritmos II
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
	// criação e inicialização de variaveis 
	int variavel_1 = 1, variavel_2 = 2, aux = 0;
	char controle = 'n', descarga;
	
	//criação de ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	//enquanto
	while (1)
	{
		//inicializaoção dos ponteiros
		ponteiro_1 = &variavel_1; // ponteiro_1 recebe endereço de variavel_1
		ponteiro_2 = &variavel_2; // ponteiro_2 recebe endereço de variavel_2
		
		//exibe o valor em cada ponteiro a partir do endereço contido neles
		printf ("\nVarivel_1 = %i", *ponteiro_1);
		printf ("\nVarivel_2 = %i", *ponteiro_2);
		
		//aux recebe o conteudo de ponteiro_1
		aux = *ponteiro_1;
		//conteudo de ponteiro_1 recebe o conteudo de ponteiro_2
		*ponteiro_1 = *ponteiro_2;
		//conteudo de ponteiro_2 recebe o conteudo de ponteiro_1
		*ponteiro_2 = aux;
		
		//exibe o novo valor em cada ponteiro a partir do endereço contido neles
		printf ("\n\nVarivel_1 = %i", *ponteiro_1);
		printf ("\nVarivel_2 = %i", *ponteiro_2);
		
		//exibe a solicitação de controle
		printf ("\n\nDeseja finalizar o programa? (s/n)");
		scanf ("%c", &controle);
		
		//caso atenda o caso, irá finalizar o loop
		if (controle == 's') break;
		
		//exibe a solicitação de valor
		printf ("Digite um valor para variavel_1: ");
		//efetua a leitura de e tranfere o valor para variavel_1
		scanf ("%i", ponteiro_1);
		//exibe a solicitação de valor
		printf ("Digite um valor para variavel_2: ");
		//efetua a leitura de e tranfere o valor para variavel_2
		scanf ("%i%c", ponteiro_2, &descarga);		
	}
	//retorna 0
	return 0;
}
