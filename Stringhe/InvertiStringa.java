import java.util.Scanner;
public class InvertiStringa
{

    String prova;
    String prova2;
    char [] temp;
    char [] temp2;

    public void main ()
    {

        Scanner frase = new Scanner (System.in);


        System.out.println ("Inserire una frase e io te la invertirò: ");
        prova = frase.nextLine ();

        temp = prova.toCharArray();
        temp2 = prova.toCharArray();

        int k = prova.length();
     
        for (int i = 0; i < prova.length(); i++)
        {

            --k;

           temp2 [i] = temp [k];

        }

        prova2 = new String (temp2);

        System.out.println ("Questa è la stringa invertita: "+prova2);

    }
}