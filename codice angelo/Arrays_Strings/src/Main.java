import java.util.Scanner;
import java.util.stream.IntStream;


public class Main {
	static String stringa="lollo";
	static String stringa2="lillo";

	public static void main(String[] args) {
		System.out.println("LE STRINGHE");
		
			//stringa.charAt ti riporta il n+1esimo carattere della stringa
			System.out.print(stringa.charAt(3));
			
			//questa istruzione trasforma la stringa in un'oggetto "IntStream"
			IntStream ch=stringa.chars();
			System.out.print(ch);
			
			//questa istruzione verifica se due stringhe sono uguali,ritorna true o false
			System.out.print(stringa.compareTo(stringa2));
			
			//stessa cosa ma ignora le lettere maiusconle
			stringa.compareToIgnoreCase(stringa2);
			
			//concatena due stringhe
			System.out.println(stringa.concat(stringa2));
			
			//ti dice se la stringa contiene qualcosa,ritorna true o false
			System.out.println(stringa.contains("lo"));
			
			//ti dice se la stringa finisce con qualcosa,ritorna true o false
			System.out.println(stringa.endsWith("lo"));
			
		    //trasforma la stringa in un flusso di byte,utile quando si trasmette in rete
			byte ooo[]=stringa.getBytes();
			
			//dimensione stringa in byte
			System.out.print(stringa.length());
			
			//rimpiazza ogni occorrenza del primo carattere con il secondo
			System.out.println(stringa.replace('l', 'i'));
			
			//concatena la stringa n volte
			System.out.println(stringa.repeat(8));
			
		
			//altre: stringa.toCharArray: trasforma la stinga in un'array di caratteri char[]
			//stringa.split('segno') divide la stringa in più parti ogni volta che compare il carattere segno
			//stringa.toUppercase/tolowercase mette tutta la stringa in maiuscolo o minuscolo
			
			
			
			
			
		
		

	}

}
