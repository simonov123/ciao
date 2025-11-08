import java.util.Scanner;

public class AnalizzaTesto
{

    String frase;
    String [] arr;
    char [] temp;
    String parolaSumma;
    int vocali = 0;
    int consonanti = 0;

    public void main ()
    {
        Scanner sen = new Scanner (System.in);

        System.out.println("Inserisci una frase:");
        frase = sen.nextLine();

        System.out.println("Il numero di caratteri in totale è: "+frase.length());

        arr = frase.split(" ");

        System.out.println("Le parole in totale sono: "+arr.length);

        frase = frase.toLowerCase();

        temp = frase.toCharArray();

        for (int i = 0; i < temp.length; i++)
        {
            switch (temp[i])
            {
                case 97:
                vocali++;
                break;

                case 101:
                vocali++;
                break;

                case 105:
                vocali++;
                break;

                case 111:
                vocali++;
                break;

                case 117:
                vocali++;
                break;

                case 32:
                break;

                default:
                consonanti++;
                break;
            }
        }

        System.out.println("Le consonanti presenti nella frase sono "+consonanti+ " mentre le vocali sono " +vocali);

        parolaSumma = arr[0];

        for (int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr.length; j++)
            {
                if (arr[j].length() > arr[i].length())
                {
                    parolaSumma = arr [j];
                    j = arr.length;
                }
            }
        }

        System.out.println("La parola più lunga è: "+parolaSumma);

        

    }
    
}