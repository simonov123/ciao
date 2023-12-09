package provaeditor;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.CharBuffer;

public class documentruntime {
	static String buffer;
	static editor ed=new editor();
	public int filegen(String filename,String path) throws IOException
	{
		if (filename==(""))
		{
			return 0;
		}
		System.out.println(filename);
		System.out.println(path);
		String name;
		name=filename;
		File file=new File(path+name+".txt");
		file.createNewFile();
		if(file.exists()!=false)
		{
			FileWriter i=new FileWriter(file);
			System.out.println(file.getName());
			i.close();
			ed.editor_runtime(file);
			return 1;
		}
		else
		{
			System.err.println("errore");
		}
		return 0;
	}
	int write(String b,File file,FileWriter i) throws IOException
	{
		CharBuffer verstring = null;
		System.out.println(file.getName());
		System.out.println("buffer="+b+"\nname="+file.getName()+"\npath="+file.getPath());
		if(file.canWrite())
		{
		    i.write(b);
		    i.flush();
		    i.close();
		    System.out.println("entre");
		}
		if(file.canWrite()==false)
		{
			System.out.println("err");
		}
		return 1;
	}
	

public int fopen(String filename,String path) throws IOException
{
	if (filename==(""))
	{
		return 0;
	}
	System.out.println(filename);
	System.out.println(path);
	String name;
	name=filename;
	FileWriter f=new FileWriter(path+filename);
	File file=null;
	return 0;
}
}
