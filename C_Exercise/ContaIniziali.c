#include<stdio.h>
int main (){
	int i,V[26];
	char vettore[100]={0},c;
		printf("inserisci una stringa di testo\n");
		do{
			scanf("%c",&c);
			vettore[0]=c;
			if(c>=97&&c<=122)
				c-=32;
				V[c-65]++;
			if(isalpha(c)){
				V[c]++;
				if(vettore[c-1]==' '){
					V[c]++;
				}
			}
		}while(c!='\n'&&c<100);
		for(i=0;i<c;i++){
			if(V[i]>0)
				printf("%s:%d\n",vettore[i],V[i]);
		}
return 0;
}
	

