#include <stdio.h>
#define SIZE 10

void int_swap(int*e1,int*e2);
int main(){
   int v[SIZE]={0};
   int i,j;
	
	for(i=0;i<SIZE;i++){
		scanf("%d",&v[i]);
	}
	
	for(i=0;i<SIZE;i++){
	printf("%d ",v[i]);
	}
	printf("\n");
		
	for(i=1;i<SIZE;i++){
		
	   for(j=0;j<SIZE-i;j++){
		if(v[j]>v[j+1]){
			int_swap(&v[j],&v[j+i]);
	                
	         }
	    }
	}
	
	for(i=0;i<SIZE;i++){
	printf("%d ",v[i]);
	}
	return 0;
}
void int_swap (int* e1,int*e2){
	int t;
	t=*e1;
	*e1=*e2;
	*e2=t;
}
	

