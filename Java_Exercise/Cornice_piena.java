import java.util.Scanner;
public class Cornice_piena {
	
	public static void main(String[] args) {
		Scanner numero = new Scanner(System.in);
		int n = numero.nextInt();
		int r,c;
		for(r=1;r<=n;r++){
			for(c=1;c<=n;c++)
				System.out.print("*");
			System.out.print("\n");
		}
		
	}
}
