/* Write a program to change the background color of Applet when user performs events using Mouse*/
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

class DemoBackground extends Applet 
{
	Button b1,b2,b3;
	public void init()
	{
	{
		b1=new Button("Red");
		b2=new Button("Green");
		b3=new Button("Blue");		
		add(b1);
		add(b2);
		add(b3);
		
		 
	}
	public void paint(Graphics g)
	{
	
		g.drawString("Clicked on Screen:- ",20,20);
		
		MouseListener mouse=new MouseAdapter()
		{
			public void mouseClicked(MouseEvent e)
			{
				for(int i=0;i<50;i++)
				{
					Color co=new Color(i,i+5,i+10);
					setBackground(co);
				}
			}
		};
		this.addMouseListener(mouse);
	}
}
/*<applet code= DemoBackgroound height=450  width=500></applet>*/