package txtdit;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class main {
    int counter=0;
	public void main(String[] args) throws IOException
	{
		File f=new File("file.txt");
		f.createNewFile();
		boolean ex=f.exists();
		FileWriter i=new FileWriter("file.txt");
		i.write("benvenuto\n");
		System.out.println("scrivi qualcosa qui");
		for (counter=0;counter<9999;counter++)
		{
			String attuale=stingdgt();
			i.append(attuale);
			if(attuale)
		}
	}

	
	
	
public String stingdgt()
{
	String stringa;
	Scanner scan=new Scanner(System.in);
	stringa=scan.nextLine();
	return stringa;	
}
}
