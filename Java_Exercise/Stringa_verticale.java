import java.util.*;
public class Stringa_verticale {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String line = input.nextLine();
		for(int i=0;i<line.length();i++){
			char carattere = line.charAt(i);
			System.out.println(carattere);
		}		
	}
}
