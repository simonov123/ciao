import java.util.Scanner;
import java.util.Arrays;

public class DividiParole
{

    String frase;
    String [] frasi;
    String [] rf;
    int i;

    public void main ()
    {

        Scanner f = new Scanner (System.in);

        System.out.println ("Inserisci una frase e conterò le parole: ");
        frase = f.nextLine ();

        frasi = frase.split (" ");
        
        System.out.println ("Il numero di parole è: "+frasi.length);

        rf = Arrays.copyOf (frasi, frasi.length);

        int k = frasi.length;

        for (i = 0; i < frasi.length; i++)
        {
            --k;
            rf[i] = frasi[k];

        }

        System.out.println("Ecco la stringa con le parole invertite:");

        for (i=0; i < frasi.length; i++)
        {
            System.out.print(rf[i]);
        }

        System.out.println("");
        
    }
}