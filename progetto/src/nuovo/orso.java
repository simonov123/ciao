package nuovo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class orso {

public static void main(String[] args)
throws IOException {
BufferedReader in =
new BufferedReader(
new InputStreamReader(System.in));
String s;
while((s = in.readLine()).length() != 0)
System.out.println(s);
	}
}
