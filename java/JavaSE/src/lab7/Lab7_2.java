package lab7;

import java.awt.Container;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;

public class Lab7_2 extends JFrame{

	public Lab7_2(String string) {
		// TODO 自动生成的构造函数存根
		super(string);
	}
	public Lab7_2() {
		// TODO 自动生成的构造函数存根
	}
	public void CreateFrame()
	{
		Lab7_2 lab7_2 = new Lab7_2("九九表");
		lab7_2.setBounds(50, 50, 1000, 500);
		lab7_2.setVisible(true);
		Container container = lab7_2.getContentPane();
		JLabel jl=new JLabel();
		String s1 = "<html>";
		for(int i = 1;i < 10; i++)
		{
			for(int j = 1;j <= i; j++)
			{
				s1+=i + " x " + j + " ";
			}
			s1 += "<br>";
		}
		s1 += "</html>";
		jl.setHorizontalAlignment(SwingConstants.CENTER);
		jl.setText(s1);
		lab7_2.add(jl);
	}
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Lab7_2 lab7_2 = new Lab7_2("九九表");
		lab7_2.CreateFrame();
	}

}
