/*Programma per calcolare i 2 valori massimi tra quelli inseriti dall'utente*/
#include <stdio.h>
int main(void)
{
	int numero,max1=-1,max2=-1;
 		printf("inserisci un valore oppure scrivi -1 per terminare\n");
 		scanf("%d",&numero);
	while(numero>=0){
		if(numero>max1){
			max2=max1;
			max1=numero;
			}
		else
		    if(numero>max2)
			max2=numero;
			printf("inserisci un valore oppure -1 per terminare\n");
			scanf("%d",&numero);
		}/*fine del while*/
		if(max1<0){
			printf("non hai inserito un cazzo\n");
		}else{
			printf("il primo numero massimo è %d\n",max1);}
		if(max2<0){
			printf("hai inserito un solo numero\n");
		}else{
			printf("il secondo numero massimo è %d\n",max2);
		}
		return 0;
}


