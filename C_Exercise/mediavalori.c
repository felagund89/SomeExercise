#include<stdio.h>
#define NVOLTE 10
int chiediunvalore(void);
int sommalo(int somma,int valore);
void mediala(int somma,int N);
int main(void){
int i,val,somma=0,valore,prossimo,vecchio;
	for(i=0;i< NVOLTE;i++){
	val=chiediunvalore();
	somma=sommalo(somma,val);
	mediala(somma,NVOLTE);
	}
	
return 0;
}
int chiediunvalore(void){
	int valore;
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
	printf("La media è %.2f \n",(float)somma/N);}


	


