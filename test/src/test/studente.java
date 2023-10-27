package test;

import java.io.Serializable;

public class studente implements Serializable,Comparable{
	public int matricola;
	public String nome;
	public String cognome;
	private static final long serialVersionUID =1234L;
	public studente()
	{
		
	}
	public void setstudente(int m,String n,String c)
	{
		this.matricola=m;
		this.nome=n;
		this.cognome=c;
	}
	@Override
	public int compareTo(Object o) {
		if (this.matricola<=matricola)
		{
			return 1;
		}
		else;
		if(this.matricola==matricola)
		{
		    return 0;
		}
		else;
		{
			return -1;
		}
	}
	public void CompType(int n1, int n2) {
		int i = n1;
		int j = n2;}
    

}
