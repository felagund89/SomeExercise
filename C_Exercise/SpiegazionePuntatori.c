#include<stdio.h>
int main (void){
    int a=5;
    int *aptr;
        aptr=&a;
        printf("L'indirizzo di a è: %p\n\n", &a);
        printf("Il valore di aptr è: %p\n\n", aptr);
        printf("Il valore di a è : %d\n\n", a);
        printf("Il valore di *aptr è: %d\n\n",* aptr);
        printf("L'inidirizzo di aptr è: %p\n",&aptr);
        printf("Provo che * e & sono complementari:\n\n &*aptr = %p\n\n *&aptr = %p\n\n", &*aptr,*&aptr);
        
     return 0;
}
        
    
