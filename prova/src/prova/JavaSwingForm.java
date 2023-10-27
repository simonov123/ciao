package prova;
import java.awt.*;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Iterator;

import javax.swing.*;

public class JavaSwingForm implements Iterator {
	static ArrayList studenti=new ArrayList();
	JFrame local=new JFrame();
	static JTextField t1=new JTextField();
	static JTextField t2=new JTextField();
	static JTextField t3=new JTextField();

	public static void main(String[] args) {
				try {
					JavaSwingForm window = new JavaSwingForm();
				} catch (Exception e) {
					e.printStackTrace();
				}
		}

	public void initialize()
	{
		
		JPanel panel=new JPanel();
		local.setSize(430,200);
		panel=(JPanel) local.getContentPane();
		panel.setLayout(new GridLayout(4,2,20,20));
		panel.add(new JLabel("Matricola"));
		panel.add(t1);
		panel.add(new JLabel("Cognome"));
		panel.add(t2);
		panel.add(new JLabel("Nome"));
		panel.add(t3);
		Insert inserisci=new Insert();
		panel.add(inserisci);
		Stampa stampa=new Stampa();
		panel.add(stampa);
		local.setVisible(true);
	}
	public JavaSwingForm() {
			initialize();
	}
	public static void take() throws IOException
	{
		studente s=new studente();
		s.matricola=t1.getText();
		s.cognome=t2.getText();
		s.nome=t3.getText();
	    while(studenti!=null)
	    {
	    	
	}

		}

	@Override
	public boolean hasNext() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public Object next() {
		// TODO Auto-generated method stub
		return null;
	}

}
