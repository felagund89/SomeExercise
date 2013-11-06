//scrivere una funzione che calcoli la somma degli elementi di un array in maniera ricorsiva.

#include<stdio.h>
#define SIZE 10

int main(void){
int v[SIZE]={0},i;
numeri_v(v,SIZE);

somma_elementi(v,SIZE);

printf("la somma degli elementi del vettore è %d",somma_elementi);



return 0;
}
void numeri_v(int v,int size){
	int n,i;
	for(i=0,i<SIZE;i++)
   	   scanf("%d",&n);
}
   
void somma_elementi(int v,size){
int somma=0,i;
for(i=0;i<SIZE;i++){
   somma+=i;
 
}










