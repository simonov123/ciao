package pr2;

import java.awt.*;
import javax.swing.*;
public class Main {
	public static void main(String[]args)
	{
		int c1=0;
		int c2=0;
		int c3=0;
		int c4=0;
		int c5=0;
		int c6=0;
		boolean a=true;
		JFrame frame=new JFrame();
		JPanel p=new JPanel();
		frame.setSize(300,200);
		frame.setLayout(new GridLayout(3,2,10,10));
		p=(JPanel) frame.getContentPane();
		mybutton button=new mybutton(1);
		mybutton button2=new mybutton(2);
		mybutton button3=new mybutton(3);
		mybutton button4=new mybutton(4);
		mybutton button5=new mybutton(5);
		mybutton button6=new mybutton(6);
		p.add(button);
		p.add(button2);
		p.add (button3);
		p.add (button4);
		p.add (button5);
		p.add (button6);
		listenerr listener=new listenerr();
		button.addMouseListener(listener);
		button2.addMouseListener(listener);
		button3.addMouseListener(listener);
		button4.addMouseListener(listener);
		button5.addMouseListener(listener);
		button6.addMouseListener(listener);
		frame.setVisible(a);
			}
        public void adding(mybutton butt)
        {
        	if (butt.id==1)
        			{
        		      
        			}
        }
}
