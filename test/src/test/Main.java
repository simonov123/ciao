package test;

import java.io.*;
import java.util.*;
public class Main{
	static studente s=new studente();
	static studente e=new studente();
	static String letto=new String();
	public static void main(String[] args) throws IOException
	{
		riempi(s);
		riempi(e);
		File f=new File("file.txt");
		f.createNewFile();
		FileOutputStream outFile = new FileOutputStream("info.txt");
		ObjectOutputStream outStream = new ObjectOutputStream(outFile);
		outStream.writeObject(s);
		outStream.writeObject(e);
		if(f.exists()==true)
		{
			System.out.println("file creato con successo\n"+"salvataggio...");
		}
		ArrayList studenti=new ArrayList();
		studenti.add(s);
		studenti.add(e);
		studenti.sort(null);
	}
	public static studente riempi(studente st)
	{
		Scanner sl=new Scanner(System.in);
		System.out.println("inserire matricola");
		int matricola=(Integer.parseInt(sl.nextLine()));
		st.matricola=matricola;
		System.out.println("inserire nome");
		String nome=sl.nextLine();
		System.out.println("inserire cognome");
		String cognome=sl.nextLine();
		st.setstudente(matricola, nome, cognome);
		System.out.println("matricola:\n"+st.matricola);
	    System.out.println("nome:\n"+st.nome);
		System.out.println("cognome:\n"+st.cognome);
		return st;
	}
	}


