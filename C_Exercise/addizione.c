	/* Programma di addizione */
#include<stdio.h>

	/* la funzione main è il punto d'inizio dell'esecuzione del programma */
int main()
{
	int primo; /* primo numero da inserire da parte dell'utente */
	int  secondo; /* secondo numero da inserire da parte dell'utente */
	int somma; /* variabile in cui verrà memorizzata la somma */

	printf("Inserisci il primo numero\n");
	scanf("%d" , &primo);

	printf("Inserisci il secondo numero\n");
	scanf("%d" , &secondo);

	somma = primo + secondo;

	printf("la somma è %d\n" , somma);

	return 0;

} /* fine della funzione main */


