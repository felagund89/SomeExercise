/*funzioni fisse per calcolare la media di valori interi

1) leggere un valore
	chiede un valore
	lo legge
	stampa il risultato
2) contare il valore 
	aumentare di 1 il conteggio
3)sommare il valore
4)calcoloe stampo la media
5) funzione principale
*/
/*
/*1*/
int chiediunvalore(void){
	int valore
 	printf("Ti prego dammi un valore");
 	scanf("%d",&valore);
return valore;
}

/*2*/
int prossimo(int vecchio){
return vecchio;
}

/*3*/
int sommalo(int somma,int valore){
return somma+valore;
}

/*4*/
void mediala(int somma,int N){
	printf("La media è %.2f \n"(float)somma/n); 
}

/*5*/
#include<stdio.h>
#define NVOLTE 10
int chiediunvalore(void);
int sommalo(int somma,int valore);
void mediala(int somma,int N);
int main(void){
int i,val,somma=0;
	for(i=0;i< NVOLTE;i++){
	val=chiediunvalore();
	somma=sommalo(somma,val);
	mediala(somma,NVOLTE);
	}
	int chiediunvalore(void){
	int valore
 	printf("Ti prego dammi un valore");
 	scanf("%d",&valore);
return valore;
}
	int prossimo(int vecchio){
return vecchio;
}
	int sommalo(int somma,int valore){
return somma+valore;
}
	void mediala(int somma,int N){
	printf("La media è %.2f \n"(float)somma/n);
return 0;
}
	



















