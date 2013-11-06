#include <stdio.h>
int main(void){
   int i,j,h,l;
   	printf("inserisci i 2 numeri per le misure della tua scacchiera\n");
   	scanf("%d%d",&l,&h);
   for(j=1;j<h;j++){
      for(i=0;i<l;i++)
         if(i==1||j==h-1)
         printf("*");
 	   else
 	   if(j==1||i==l-1)
 	    printf(" ");
 	   printf("\n");
 	   
 	    }
	return 0 ;
}

