//determina se l'intero inserito è pari o dispari

import java.util.Scanner;

public class PariDispari{
   public static void main(String args[]){
   Scanner input = new Scanner(System.in);
   
   int numero;
   numero = input.nextInt();
   
   if(numero % 2 == 0){
      System.out.printf("Il numero è pari");
   }else{ 
      System.out.printf("Il numero è dispari");
      }

}
   }

