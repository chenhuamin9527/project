package lab7;

import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.net.URL;

import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Lab7_3 extends JFrame{
	int i = 1;
	public void CreateFrame()
	{
		Lab7_3 lab7_3 = new Lab7_3();
		lab7_3.setVisible(true);
		lab7_3.setBounds(100, 100, 1000, 800);
		lab7_3.setLayout(null);
		Container container = lab7_3.getContentPane();
//		URL url = Lab7_3.class.getResource("../imgs/1.jpg");
//		Icon icon = new ImageIcon(url);
		Icon icon = new ImageIcon("src/imgs/2.jpg");
		final JLabel imageJLabel = new JLabel();
		imageJLabel.setIcon(icon);
		imageJLabel.setBounds(250, 200, 300, 400);
		
		container.add(imageJLabel);
		JButton upJButton = new JButton("上一张");
		upJButton.setBounds(50, 50, 80, 80);
		
		upJButton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO 自动生成的方法存根			
				i--;
				if(i < 1) i = 3;
//				URL url = lab7_3.getClass().getResource("../imgs/" + i +".jpg");
				Icon icon = new ImageIcon("src/imgs/" + i +".jpg");
				imageJLabel.setIcon(icon);					
			}
		});
		JButton downJButton = new JButton("下一张");
		downJButton.setBounds(150, 150, 80, 80);
		downJButton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO 自动生成的方法存根			
				i++;
				if(i > 3) i = 1;
//				URL url = lab7_3.getClass().getResource("../imgs/" + i +".jpg");
				Icon icon = new ImageIcon("src/imgs/" + i +".jpg");
				imageJLabel.setIcon(icon);					
			}
		});
		container.add(upJButton);
		container.add(downJButton);
	}
	public static void main(String args[])
	{
		Lab7_3 lab7_3 = new Lab7_3();
		lab7_3.CreateFrame();
	}
	
}
