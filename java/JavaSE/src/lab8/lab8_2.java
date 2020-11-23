package lab8;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ComponentAdapter;
import java.awt.event.ComponentEvent;
import java.util.HashMap;

import javax.swing.*;

public class lab8_2 extends JFrame {
	String string_name[]= {"小民","小兴","小杰", "小龙"};
	int n =string_name.length;
	int arr[] =new int [n];
	HashMap<String, JLabel> myhs = new HashMap<>();
	Container c =getContentPane();
	
	int w=600;
	int h=600;
	class JBtnAction implements ActionListener
	{

		@Override
		public void actionPerformed(ActionEvent e) {
			int i =Integer.parseInt(e.getActionCommand());
			arr[i]++;
			myhs.get(e.getActionCommand()).setBounds(10, h-100-arr[i]*15, w/n-20, arr[i]*15);
			myhs.get(e.getActionCommand()).setText(arr[i]+"");
			// TODO 自动生成的方法存根
			
		}
		
	}
	
	public void myinit()
	{
		
		w=getWidth()-100;
		h=getHeight()-100;
		for(int i=0;i<n;i++)
		{
			JPanel jPanel = new JPanel();
			jPanel.setLayout(null);
			JLabel jl1= new JLabel();
			jl1.setOpaque(true);
			myhs.put(i+"", jl1);
			jl1.setBackground(Color.red);
			jl1.setBounds(10, h-100, w/n-20, arr[i]*15);
			jl1.setHorizontalAlignment(SwingConstants.CENTER);
			JLabel jl2 =new JLabel(string_name[i]);
			jl2.setBounds(10, h-80, w/n-20, 30);
			jl2.setHorizontalAlignment(SwingConstants.CENTER);
			JButton jb1=new JButton("投票");
			jb1.addActionListener(new JBtnAction());
			jb1.setActionCommand(i+"");
			jb1.setBounds(10, h-30, w/n-20, 30);
			jPanel.add(jl1);
			jPanel.add(jl2);
			jPanel.add(jb1);
			c.add(jPanel);
			jPanel.setBounds(10+w/n*i, 70, w/n-10, h);
		}
		
		JLabel jltitle =new JLabel("投票系统");
		jltitle.setFont(new Font("宋体", Font.BOLD, 40));
		jltitle.setBounds(w/2-20, 20, 200, 50);
		c.add(jltitle);
		setVisible(true);
	}
	
	public lab8_2()
	{
		setBounds(100, 100, w, h);
		setLayout(null);
		myinit();
		
		setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
		
		addComponentListener(new ComponentAdapter() {
			public void componentResized(ComponentEvent e)
			{
				c.removeAll();
				myhs.clear();
				myinit();
			}
		});
	}

	public static void main(String[] args) {
		new lab8_2();
		// TODO 自动生成的方法存根

	}

}
