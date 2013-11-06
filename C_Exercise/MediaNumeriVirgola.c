#include<stdio.h>
int main (void){
	int n;
	printf("Quanti numeri vuoi inserire??\n");
	scanf("%d",&n);
	printf("Ok inserisci i numeri\n");
	int i;
	float numero,somma=0;
	for(i=1;i<=n;i++){
		scanf("%f",&numero);
		
		somma=somma+numero;
		}
		float media;
		media=(float)somma/n;
		printf("la media degli n numeri è:  %.2f",media);
	return 0;
}
		

