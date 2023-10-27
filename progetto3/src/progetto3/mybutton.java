package progetto3;

import javax.swing.JButton;

public class mybutton extends JButton{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	static int code;
	public mybutton(int x)
	{
		code=x;
		this.setText("bass"+x);
	}

}
