import java.util.*;
public class Cornice {
	public static void main(String[] args) {
		Scanner numero = new Scanner(System.in);
		int n = numero.nextInt();
		
		for(int r=1;r<=n;r++){
			for(int c=1;c<=n;c++){
				if(r==1||r==n){
					System.out.print("*");
				}
				if((r!=1 && r!=n)&&(c==1 || c==n)){
					System.out.print("*");
					
				}if((r!=1 && r!=n)&&(c!=1)){  
					System.out.print(" ");
				}
			}
			System.out.print("\n");
		}
	}
}
