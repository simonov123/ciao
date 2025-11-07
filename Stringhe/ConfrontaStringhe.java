import java.util.Scanner;

public class ConfrontaStringhe
{

    String frase1;
    String frase2;

    public void main ()
    {

        Scanner f = new Scanner (System.in);

        System.out.println ("inserisci la prima frase: ");
        frase1 = f.nextLine ();

        System.out.println ("inserisci la seconda frase:");
        frase2 = f.nextLine ();

        if (frase1.equals(frase2) == true)
        {

            System.out.println ("Le due stringhe sono uguali");

        }

        else
        {
            System.out.println ("Le due stringhe sono diverse");
        }
        
    }


}