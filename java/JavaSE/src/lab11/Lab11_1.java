package lab11;

import java.awt.Container;
import java.net.URL;
import java.util.Random;

import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import javax.swing.WindowConstants;



public class Lab11_1 extends JFrame{
	private JLabel jl = new JLabel();
	private static Thread t;
	private int countx = 0;
	private int county = 0;
	private Container container = getContentPane();
	
	
	public Lab11_1()
	{
		setBounds(300, 200, 250, 400);
		container.setLayout(null);
		URL url = Lab11_1.class.getResource("1.gif");
		Icon icon = new ImageIcon(url);
		jl.setIcon(icon);
		jl.setHorizontalAlignment(SwingConstants.LEFT);
		jl.setBounds(10, 10, 200, 50);
		jl.setOpaque(true);
		class MyThread extends Thread
		{
			public void run()
			{
				while(countx<=200 && county <= 350)
					{
						Random random = new Random();
						jl.setBounds(countx, county, 200, 50);
						try{
							Thread.sleep(400);
						}catch(Exception e)
						{
							e.printStackTrace();
						}
						countx += random.nextInt(20);
						county += 10;
						if(countx == 200)
						{
							countx = 10;
						}
						if(county == 350)
						{
							county = 20;
						}
					}
			}
		}
		MyThread t = new MyThread();
		t.start();
//		t = new Thread(new Runnable()
//				{
//					public void run()
//					{
//						while(count<=200)
//						{
//							jl.setBounds(count, 10, 200, 50);
//							try{
//								Thread.sleep(1000);
//							}catch(Exception e)
//							{
//								e.printStackTrace();
//							}
//							count += 4;
//							if(count == 200)
//							{
//								count = 10;
//							}
//						}
//					}
//				});
//		t.start();
		container.add(jl);
		setVisible(true);
		setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
	}
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Lab11_1();
	}

}
