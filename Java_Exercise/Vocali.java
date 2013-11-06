import java.util.*;
public class Vocali {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String parola = input.nextLine();
		int count_a=0, count_e=0, count_i=0, count_o=0, count_u=0;
		for(int i=0;i<parola.length();i++){
			char c= parola.charAt(i);
			if(c=='a') count_a++;
			if(c=='e') count_e++;
			if(c=='i') count_i++;
			if(c=='o') count_o++;
			if(c=='u') count_u++;
		}
		System.out.println( "a:"+count_a+"  e:"+count_e+"  i:"+count_i+"  o:"+count_o+"  u:"+count_u);
	}
}
