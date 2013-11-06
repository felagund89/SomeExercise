import java.util.*;
public class Parole_verticali {
	public static void main(String[] args) {
		Scanner input= new Scanner(System.in);
		String parola1 = input.nextLine();
		String parola2 = input.nextLine();
		String parola3 = input.nextLine();
		int x=parola1.length(),y=parola2.length(),z=parola3.length(),max=0;
		if(x>y){
			max=x;
			if(x>=z)
				max=x;
		}else{
			max=y;
			if(y>=z)
				max=y;
			else max=z;
		}
		//System.out.println(max);
		for(int i=0;i<max;i++){
			if(i<x){
				char p1=parola1.charAt(i);
				System.out.print(p1);
			}else System.out.print(" ");
			
			if(i<y){
				char p2=parola2.charAt(i);
				System.out.print(p2);
			}else System.out.print(" ");
			
			if(i<z){
				char p3=parola3.charAt(i);
				System.out.println(p3);
			}else System.out.println(" ");	
		}	
	}
}
