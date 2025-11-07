import java.util.Scanner;

public class ContaVocali
{

    String miaStringa;
    char [] temp;
    int counter = 0;
    
    public void main ()
    {

        Scanner fr = new Scanner (System.in);

        System.out.println("Inserisci la frase e io ti dirò quante vocali sono contenute");

        miaStringa = fr.nextLine();

        temp = miaStringa.toCharArray();

        for (int i = 0; i < miaStringa.length(); i++)
        {

            temp [i] = Character.toUpperCase(temp[i]);

            switch (temp[i])
            {

                case 65:
                counter++;
                break;

                case 69:
                counter++;
                break;

                case 73:
                counter++;
                break;

                case 79:
                counter++;
                break;

                case 85:
                counter++;
                break;

                default:
                break;

            }

        }

        System.out.println("Nella frase sono contenute "+counter+" vocali");
    }

}