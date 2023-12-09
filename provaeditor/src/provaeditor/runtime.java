package provaeditor;
import java.awt.GridLayout;
import java.io.IOException;

import javax.swing.*;

public class runtime {
	private static String filename;
	frontend inter=new frontend();
	documentruntime doc=new documentruntime();
	void runtime()
	{
		this.interfacecaller();
	}
	int selectfile() throws InterruptedException, IOException
	{
		String[] vector=inter.fileselect();
		String path=vector[1];
		filename=vector[0];
		this.newfile(filename,path);
		return 0;
	}
	int selectopenfile() throws InterruptedException, IOException
	{
		String[] vector=inter.fileselect();
		String path=vector[1];
		filename=vector[0];
		doc.fopen(filename,path);
		return 0;
	}
	private int openfile(String filename,String path)
	{
		return 0;
	}
	private void interfacecaller()
	{
		inter.home();
		
	}
	int newfile(String name,String path) throws IOException
	{
		doc.filegen(name,path);
		return 1;
	}

}
