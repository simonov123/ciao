package nuovo;
import java.io.*;

public class Main {
	
	     public static void main(String[]args) throws IOException
	     {
	    	 boolean ex;
	    	 File f=new File("file.txt");
	    	 f.createNewFile();
	    	 FileWriter i=new FileWriter("file.txt");
	    	   ex=f.exists();
		         if(ex==false);
		         {
		        	 System.out.println("NO");
		         }
	         String s=("ciao"
	         		+ "");
	         String k;
	         System.out.println(s);
	         while(1!=0)
	         {
	         i.write(s);
	         BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
	         FileReader r=new FileReader("file.txt");
	         k=b.readLine();
	         i.write(k);
	         System.out.println(k);
	     
	         
	         }
	     }
}
