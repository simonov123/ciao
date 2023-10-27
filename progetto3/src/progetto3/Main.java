package progetto3;

import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
import javax.swing.*;
import java.awt.*;

public class Main {
	static int repro=0;
	public static void main(String[]args)
	{	
		JFrame newframe=new JFrame();
		JPanel newpanel=new JPanel();
		newframe.setSize(300,200);
		newpanel=(JPanel) newframe.getContentPane();
		newpanel.setLayout(new GridLayout(2,2,10,10));
		mybutton b1=new mybutton(1);
		mybutton b2=new mybutton(2);
		mybutton b3=new mybutton(3);
		mybutton b4=new mybutton(4);
		newpanel.add(b1);
		newpanel.add(b2);
		newpanel.add(b3);
		newpanel.add(b4);
		mylistener listener=new mylistener();
		b1.addMouseListener(listener);
		b2.addMouseListener(listener);
		b3.addMouseListener(listener);
		b4.addMouseListener(listener);
		newframe.setVisible(true);
	}
	public void r1()
	{
		repro=1;
		System.out.println("prova");
		playSound("hardbass-drums_150bpm.wav");
		System.out.println("prova");
		repro=0;
	}
	public void r2()
	{
		repro=2;
		playSound("russian-voice_150bpm_E_minor.wav");
		repro=0;
	}
	public void r3()
	{
		repro=3;
		playSound("slavic-hardbass-uptempo_180bpm_D#.wav");
		repro=0;
	}
	public void r4()
	{
		repro=4;
		playSound("wind.wav");
		repro=0;
	}
	public static synchronized void playSound(final String url) {
		  new Thread(new Runnable() {
		  // The wrapper thread is unnecessary, unless it blocks on the
		  // Clip finishing; see comments.
		    public void run() {
		      try {
		        Clip clip = AudioSystem.getClip();
		        AudioInputStream inputStream = AudioSystem.getAudioInputStream(
		          Main.class.getResourceAsStream("/path/to/sounds/" + url));
		        clip.open(inputStream);
		        clip.start(); 
		      } catch (Exception e) {
		        System.err.println(e.getMessage());
		      }
		    }
		  }).start();
		}

}
