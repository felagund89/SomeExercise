#include <stdio.h>                            /* direttiva per il preprocessore */ 
 
int main () {                                /* inizio del programma */ 
 
  int giorno1, mese1, anno1;                        /* dichiaro le variabili */  
  int giorno2, mese2, anno2;                        /* dichiaro le variabili */ 
 
  printf("inserire la prima data:");                    /* visualizza sullo schermo la stringa compresa fra le virgolette */ 
  scanf("%d/%d/%d", & giorno1, & mese1, & anno1);            /* leggi gli interi e mettili nelle variabili dichiarate */ 
  printf("inserire la seconda data:");                    /* visualizza sullo schermo la stringa compresa fra le virgolette */ 
  scanf("%d/%d/%d", & giorno2, & mese2, & anno2);            /* leggi gli interi e mettili nelle variabili dichiarate */ 
  if (anno1>anno2)                                 /* verifica condizione */  
      printf("la prima data √® posteriore rispetto alla seconda\n");    /* verifica sullo schermo la stringa compresa fra le virgolette */ 
 
      rifica sullo schermo la stringa compresa fra le virgolette */ 
  else 
      if(anno1<anno2)                         /* verifica condizione */ 
            printf("la prima data √® anteriore rispetto alla seconda\n"); /* verifica sullo schermo la stringa compresa fra le virgolette */ 
  else 
      if(mese1>mese2)                         /* verifica condizione */ 
            printf("la prima data √® posteriore rispetto alla seconda\n");/* verifica sullo schermo la stringa compresa fra le virgolette */ 
    else 
         if(mese1<mese2)                         /* verifica condizione */ 
            printf("la prima data √® anteriore rispetto alla seconda\n"); /* verifica sullo schermo la stringa compresa fra le virgolette */ 
        else 
         if(giorno1>giorno2)                         /* verifica condizione */ 
            printf("la prima data √® posteriore rispetto alla seconda\n");/* verifica sullo schermo la stringa compresa fra le virgolette */ 
        else 
         if(giorno1<giorno2)                         /* verifica condizione */ 
            printf("la prima data √® anteriore rispetto alla seconda\n"); /* verifica sullo schermo la stringa compresa fra le virgolette */ 
        else 
         if(giorno1 == giorno2)                     /* verifica condizione */ 
            printf("la prima data √® uguale alla seconda\n");            /* verifica sullo schermo la stringa compresa fra le virgolette */ 
        
        return 0;                            /* indica che il programma √® terminato con successo */ 
 
}                                                /* fine della funzione main */ 
