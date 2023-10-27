package prova;

import javax.swing.JButton;

public class Stampa extends JButton{
	public Stampa()
	{
		this.setText("Stampa");
		ListenPrint listener=new ListenPrint();
		this.addMouseListener(listener);
	}

}
