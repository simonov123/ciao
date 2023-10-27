package progetto3;

import java.awt.event.MouseEvent;

import javax.swing.event.MouseInputListener;

public class mylistener implements MouseInputListener {

    Main local=new Main();
	@Override
	public void mousePressed(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseReleased(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseEntered(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseExited(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseDragged(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseMoved(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseClicked(MouseEvent e) {
		if(mybutton.code==1)
		{
			local.r1();
		}
		else;
		if(mybutton.code==2)
		{
			local.r2();
		}
		else;
		if(mybutton.code==3)
		{
			local.r3();
		}
		else;
		if(mybutton.code==4)
		{
			local.r4();
		}
	}

}
