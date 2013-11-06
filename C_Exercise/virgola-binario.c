#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define precisione 10
#define numero 22.0

int main(){
   int i,a = numero,la = (log(a)/log(2));
   float b = numero -a;
   char *pint = calloc(++la,sizeof(char));
   char *pdec = calloc(precisione,sizeof(char));

   for(i = 1; a > 0;a>>=1,i++)
      pint[la-i] = (a%2)?'1':'0';
   for(i = 0; i < precisione; i++){
      pdec[i] = ((b*=2)>1)?'1':'0';
      b -= (b>1)?1:0;
   }
      
   printf("%s.%s\n",pint,pdec);
   return 0;
} 

