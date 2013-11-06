#include<stdio.h>
int main (void){
	int nRighe,i,j;
	char lettera;
	printf("inserisci il numero di righe:\n");
	scanf("%d",&nRighe);
	printf("inserisci il carattere per comporre il triangolo\n");
	scanf("\n%c",&lettera);
	for(i=0;i<=nRighe;i++){
		for(j=0;j<i;j++)
			printf("%c",lettera);
			printf("\n");
	}
return 0;
}
	

