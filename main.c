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
	
	//criacao e inicializacao das variaveis e ponteiros
	char Minha_String[] = {'1','2','3','4','5','6','7','8','9','0',};
	char *Meu_Ponteiro = &Minha_String;
	
	//exibe o valor contido em cada posicao da string a partir do endereco
	//contigo no ponteiro
	do
	{
		printf("\nO Meu_Ponteiro aponta para o valor: %c",*Meu_Ponteiro);
		Meu_Ponteiro++;
	}
	while(*Meu_Ponteiro != 0);
	
	
	//imprime o tamanho da variavel Minha_String 
	printf("\n\nO valor da minha string eh: %i", sizeof(Minha_String));
	
}
