import java.util.*;
public class Tre_più_grandi {
	public static void main(String[] args) {
		int max1=0,max2=0,max3=0;
		Scanner numero= new Scanner(System.in);
		int n=numero.nextInt();
		while(n>=0){		
			
			if(n>max1){
				max3=max2;
				max2=max1;
				max1=n;
			}else if (n>max2){
				max3=max2;
				max2=n;
			}else if(n>max3){
				max3=n;
			}
			n=numero.nextInt();
			
		}
		System.out.print(max1+" "+max2+" " + max3);
	}
}
