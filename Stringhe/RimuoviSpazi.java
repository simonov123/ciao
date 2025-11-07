import java.util.Scanner;

public class RimuoviSpazi
{

    int i;

    public void main ()
    {

        Scanner frase = new Scanner (System.in);
        String prova;

        System.out.println ("Inserisci una frase e toglierò gli spazi: ");
        prova = frase.nextLine();

        prova = (prova.replace(' ', '\\'));

        System.out.println ("Ecco la stringa con gli spazi rimossi: "+prova);
    }
}