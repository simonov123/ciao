import java.util.Scanner;

public class NumeroCaratteri
{

    String prova;

    public void main ()
    {

        Scanner ln = new Scanner (System.in);

        System.out.println ("Inserisci una stringa e ti dirò il numero di caratteri compresi:");

        prova = ln.nextLine();

        System.out.println ("Il numero di caratteri è: " +prova.length());


    }
}