package provaeditor;

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JTree;

public class frontend {
	String pat;
	String filename="";
	String buffer;
	static runtime r=new runtime();
	static documentruntime d=new documentruntime();
	static JTextField pathfield=new JTextField();
	static JTextField namefield=new JTextField();
	static JTextArea buff=new JTextArea();
	int saveflag=0;
	public int home()
	{
		JFrame homeframe=new JFrame();
		homeframe.resize(200,300);
		Container c=homeframe.getContentPane();
		GridLayout layout=new GridLayout(2,1,50,50);
		JButton nuovo=new JButton("nuovo file");
		JButton apri=new JButton("apri file");
		nuovo.addMouseListener(new 
			       java.awt.event.MouseAdapter() {
			public void mouseClicked(MouseEvent e) {
				try {
					c_mouseClicked(e);
				} catch (InterruptedException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				} catch (IOException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
			}
		});
		apri.addMouseListener(new java.awt.event.MouseAdapter()
				{
			public void mouseClicked(MouseEvent op)
			{
				try {
					op_mouseClicked(op);
				} catch (InterruptedException | IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
				});
		c.setLayout(layout);
		c.add(nuovo);
		c.add(apri);
		apri.setSize(40, 160);
		nuovo.setSize(40, 160);
		homeframe.show();
		return 1;
	}
	protected void op_mouseClicked(MouseEvent op) throws InterruptedException, IOException {
		r.selectopenfile();
		
	}
	public String[] fileselect() throws InterruptedException
	{
		JFrame homeframe=new JFrame();
		Container m=homeframe.getContentPane();
		homeframe.setSize(200,450);
		GridLayout layout=new GridLayout(5,1,10,10);
		m.setLayout(layout);
	    JButton committ=new JButton("crea");
		JLabel path=new JLabel("path");
		JLabel name=new JLabel("filename");
		m.add(name);
		m.add(namefield);
		m.add(path);
		m.add(pathfield);
		m.add(committ);
		name.setSize(30, 150);
		path.setSize(30, 150);
		namefield.setSize(30,150);
		pathfield.setSize(30,150);
		committ.setSize(30,150);
		homeframe.show();
		committ.addMouseListener(new java.awt.event.MouseAdapter()
		{
	public void mouseClicked(MouseEvent com) {
		filename=namefield.getText();
	    pat=pathfield.getText();
        try {
			e_mouseClicked(com);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
        }}
	
		);
		System.out.println(filename);
		String[] vector= {filename,pat};
		return vector;
	}
	public void c_mouseClicked(MouseEvent e) throws InterruptedException, IOException
	{
		System.out.println("ciao");
		r.selectfile();
	}
	
	public void e_mouseClicked(MouseEvent com) throws IOException
	{
		filename=namefield.getText();
	    pat=pathfield.getText();
		this.saveflag=1;
		r.newfile(filename,pat);
	}
	
	public String editor_interface(File file)
	{
		System.out.println(file.getName());
		filename=file.getName();
		pat=file.getPath();
		JFrame editorframe=new JFrame();
		Container j=editorframe.getContentPane();
		BoxLayout layout=new BoxLayout(j,2);
		j.setLayout(layout);
		j.add(buff);
	    JButton sv=new JButton("save");
	    j.add(sv);
	   sv.addMouseListener(new java.awt.event.MouseAdapter()
		{
		   public void mouseClicked(MouseEvent fl)
		   {
			   System.out.println("ciaone");
			   try {
				i_MouseClicked(fl);
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		   }
			}
		);  
	    editorframe.setSize(500,500);
	    j.setSize(500,500);
	    buff.setSize(500,450);
	    sv.setSize(50,80);
	    editorframe.show();
	    return buffer;
	
	}
	public void i_MouseClicked(MouseEvent fl) throws IOException
	{
		System.out.println("test"+filename);
		File file=new File(pat);
		FileWriter i=new FileWriter(file);
		System.out.println(file.getName()+"editor");
		buffer=buff.getText();
		d.write(buffer,file,i);
	}
	

	
	
	

}
