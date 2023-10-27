package esame;

import java.util.*;

public class stack <T> {
	public LinkedList <T>stk=new LinkedList<T>();

public void push(T Ogg)
{
	stk.add(Ogg);
}
public T pop()
{
	T ogg;
	ogg=stk.getLast();
    return ogg;
}
}