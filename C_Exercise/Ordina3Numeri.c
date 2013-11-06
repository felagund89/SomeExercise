#include<stdio.h>
int main (void){
	int a,b,c;
	printf("Dammi 3 numeri stronzo di merda\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<=b){
		if(b<=c)
			printf("i numeri sono %d %d %d\n",a,b,c);
		else if(c<=a)
			printf("i numeri sono %d %d %d\n",c,a,b);
		else
			printf("i numeri sono %d %d %d\n",a,c,b);
	}
	
	if(b<=a){
		if(a<=c)
			printf("i numeri sono %d %d %d\n",b,a,c);
		else if(c<=b)
			printf("i numeri sono %d %d %d\n",c,b,a);
		else
			printf("i numeri sono %d %d %d\n",b,c,a);			
	}	
	return 0;
}	
		
		

