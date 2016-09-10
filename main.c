//###################################################################################################
// Programa - atividade com ponteiros e estrutura
// Cadeira - laboratório de algoritmos II
// 
//###################################################################################################
// Autor : LPNS - Luis Paulo Nery
// Data : 09/09/2016
//
//###################################################################################################4


#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int indice;
	char nome[50];
	char telefone [15];
} entrada;

int main ()
{
	entrada pagina_01;
	entrada *ptr = &pagina_01;
	int n;
	
	//pagina_01.indice = 1;
	//pagina_01.nome = {"Luis Paulo Nery Siveira"};
	//pagina_01.telefone = {"(51) 9393-9051"};
	
	printf ("\nInsira a Pagina: ");
	scanf ("%i", &pagina_01.indice);
	n = getchar ();
	
	printf ("\nInsira o Nome: ");
	gets (&pagina_01.nome);	

	printf ("\nInsira o Telefone: ");
	gets (&pagina_01.telefone);
	
	printf ("\nPagina: %i\n", pagina_01.indice);
	printf ("\nNome: %s\n", pagina_01.nome);	
	printf ("\nTelefone: %s\n", pagina_01.telefone);
		
}
