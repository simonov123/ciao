package fdvfffdv;
import java.util.Scanner;

public class ciao{
	int counter=0;
	public int main()
	{
		Scanner in;
	    in=new Scanner(System.in);
		System.out.println("vuoi aumentare? 1)si 2)2no");
		int ch;
		ch=in.nextInt();
		if(ch==1)
		{
		   int ioo=this.aum();
		   return ioo;
		}
		return counter;
		
	}
	public int aum() {
		counter++;
		System.out.print(counter);
		return counter;
	}
	
	

}
