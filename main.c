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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// cria variavel inteira
int numero = 2;
// defini a posicao de memoria que o pornteiro ira armazenar
int *ptr_numero = &numero;
//inicia a funçao
int main(int argc, char *argv[]) 
{
	// mostra uma mensagem
	printf ("Digite um numero: ");
	// espera o usuario entrar com um valor
	scanf ("%i", ptr_numero);
	// mostra o numero digitado pelo usuario a partir do ponteiro
	printf ("O numero digitado foi: %i %i %i!\n", &ptr_numero, ptr_numero, *ptr_numero);
	//retora zero
	return 0;
}
