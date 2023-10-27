package prova;

import javax.swing.JButton;

public class Insert extends JButton {
	public Insert()
	{
		this.setText("Inserisci Studente");
		ListenInsert listener=new ListenInsert();
		this.addMouseListener(listener);
	}

}
