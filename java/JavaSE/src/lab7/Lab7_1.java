package lab7;

import java.awt.Component;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.Label;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.Icon;
import javax.swing.JButton;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;

public class Lab7_1 extends JFrame implements Icon{

	private int width;
	private int height;
	public Lab7_1(int width, int height) {
		// TODO �Զ����ɵĹ��캯�����
		this.width = width;
		this.height = height;
	}
	
	public Lab7_1() {
		// TODO �Զ����ɵĹ��캯�����
	}

	public void createJFrame()
	{
		Lab7_1 JFrame1 = new Lab7_1();
		Container container = JFrame1.getContentPane();
		JFrame1.setVisible(true);
		JFrame1.setBounds(100, 100, 200, 300);
		
//		JButton JButton1 = new JButton("�����Ի���");
//		JButton1.setHorizontalAlignment(SwingConstants.CENTER);
//		JButton1.addActionListener(new ActionListener() {
//			
//			@Override
//			public void actionPerformed(ActionEvent e) {
//				// TODO �Զ����ɵķ������
//				JDialog jDialog = new JDialog();
//				jDialog.setVisible(true);
//				jDialog.setBounds(10, 10, 50, 60);
//			}
//		});
//		container.add(JButton1);
		Lab7_1 icon = new Lab7_1(15, 15);
		JLabel jLabel = new JLabel("����",icon,SwingConstants.CENTER);
		container.add(jLabel);
		
	}
	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		Lab7_1 lab7_1 = new Lab7_1();
		lab7_1.createJFrame();
	}
	@Override
	public void paintIcon(Component c, Graphics g, int x, int y) {
		// TODO �Զ����ɵķ������
		g.fillOval(x, y, width, height);
	}
	@Override
	public int getIconWidth() {
		// TODO �Զ����ɵķ������
		return this.width;
	}
	@Override
	public int getIconHeight() {
		// TODO �Զ����ɵķ������
		return this.height;
	}

}
