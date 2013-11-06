#include<stdio.h>
int main(void){
	int n=0,uno=0,due=0,tre=0,quattro=0,cinque=0,sei=0,sette=0,otto=0,nove=0,dieci=0;
	
	printf("Inserisci numeri da 1 a 10,inserisci -1 per terminare\n");
	scanf("%d",&n);
	while((n>0) && (n<11)){
		
		switch(n){
			
			case 1:
				uno++;
				break;
			case 2:
				due++;
				break;
			case 3:
				tre++;
				break;
			case 4:
				quattro++;
				break;
			case 5:
				cinque++;
				break;
			case 6:
				sei++;
				break;
			case 7:
				sette++;
				break;
			case 8:
				otto++;
				break;
			case 9:
				nove++;
				break;
			case 10 :
				dieci++;
				break;
			default:
				break;
			
		}
		scanf("%d",&n);
	}
	printf("1:%d\n",uno);
	printf("2:%d\n",due);
	printf("3:%d\n",tre);
	printf("4:%d\n",quattro);
	printf("5:%d\n",cinque);
	printf("6:%d\n",sei);
	printf("7:%d\n",sette);
	printf("8:%d\n",otto);
	printf("9:%d\n",nove);
	printf("10:%d\n",dieci);
}
	
	
	
			

