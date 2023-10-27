package esame;

public class Main {
	public static void main (String[]args)
	{
		automobile a1=new automobile(100,150);
		automobile a2=new automobile(150,240);
		stack s=new stack<automobile>();
		s.push(a1);
		s.push(a2);
		automobile a3=(automobile) s.pop();
		automobile a4=(automobile) s.pop();
		System.out.println(a3.getClass());
		System.out.println(a4.getClass());
	}

}
