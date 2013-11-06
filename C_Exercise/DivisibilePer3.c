#include<stdio.h>
int main (void){
	int numero,resto;
	
	printf("Inserisci un numero per vedere se è divisibile per 3\n");
	scanf("%d",&numero);
	resto=numero%3;
	if(resto>0){
				printf("Il numero non è divisibile per 3");
		       }
	else
		printf("Il numero è divisibile per 3");
return 0;
}

