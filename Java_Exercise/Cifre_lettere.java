import java.util.*;
public class Cifre_lettere {
	
	public static void main(String[] args) {
		
		Scanner input= new Scanner(System.in);
		int n= input.nextInt();
		
		do{
			n%=10;
			n/=10;
			switch (n) {
			case 0: System.out.print(" zero ");
			break;
			case 1: System.out.print(" uno ");
			
			break;
			case 2: System.out.print(" due ");
			
			break;
			case 3: System.out.print(" tre ");
			
			break;
			case 4: System.out.print(" quattro ");
			
			break;
			case 5: System.out.print(" cinque ");
			break;
			case 6: System.out.print(" sei ");
			break;
			case 7: System.out.print(" sette ");
			break;
			case 8: System.out.print(" otto ");
			break;
			case 9: System.out.print(" nove ");
			
			break;
			
			
			
			}n/=10;	
		}while(n>0);
		
		
	}
}
