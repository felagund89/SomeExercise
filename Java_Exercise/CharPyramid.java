import java.util.*;
import static java.lang.System.*;
public class CharPyramid {
	
	private int dim;
	public CharPyramid( int d){
		 dim = d;
	}
	public void stampa(){
		int riga=0;
		while (riga <= dim) {
			int colonna = 1;
			while (colonna<dim*2){
				if ( colonna<=(dim-riga) || colonna>=(dim+riga) )
					out.print(' ');
				else
					out.print('*');
				colonna += 1;
			}
			out.println("");
			
			riga += 1;
		}
	}
	public void drawUpIsDown(){
		int riga=dim;
		while(riga>=0){
			int colonna=1;
			while (colonna<dim*2){
				if((colonna<=(dim-riga)) || (colonna>=(dim+riga)))
					out.print('*');
				else
					out.print(' ');
				colonna+=1;
			}
			out.println();
			riga-=1;
				
		}
	}
	
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int d=in.nextInt();
		CharPyramid pyr1= new CharPyramid(d);
		CharPyramid pyr2 = new CharPyramid(d);
		pyr1.stampa();
		out.println();
		pyr2.drawUpIsDown();
	}
	
}
	
