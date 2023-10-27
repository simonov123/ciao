package pr2;

import javax.swing.JButton;

public class mybutton extends JButton {
	public int id;
	private int s;
	private String rap;
	public mybutton(int x)
	{
		id=x;
		x=s;
		rap=(""+x);
		this.setText(rap);
	}
	public int modify(int y)
	{
		s=y;
		rap=(""+y);
		this.setText(rap);
		return 0;
		
	}
    
}
