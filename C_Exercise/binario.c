#include <stdio.h>
int main()
{
	int c,i,j=0,v[25]={0};
	scanf ("%d", &c);
		
	while (c!=0){
		
		if ((c%2)>0){
			v[j]=1;
			
		}else {
			v[j]=0;
			
		}
	c/=2;
	j++;}
	for (i=j-1;i>=0;i--){
		printf ("%d",v[i]);
	}
	printf ("\n");
	return 0;
}

