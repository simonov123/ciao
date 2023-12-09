package provaeditor;

import java.io.File;
import java.io.FileWriter;

public class editor {
	frontend edint=new frontend();
	public void editor_runtime(File file)
	{
		System.out.println(file.getName());
		edint.editor_interface(file);
		
	}

}
