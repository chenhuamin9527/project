package lab12;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.PrintWriter;
import java.net.Socket;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.border.BevelBorder;

public class MyClien extends JFrame{
	private PrintWriter writer;
	Socket socket;
	private JTextArea ta = new JTextArea();
	private JTextField tf = new JTextField();
	Container cc;
	
	public MyClien(String title)
	{
		super(title);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		cc = this.getContentPane();
		final JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBorder(new BevelBorder(BevelBorder.RAISED));
		getContentPane().add(scrollPane,BorderLayout.CENTER);
		scrollPane.setViewportView(ta);
		cc.add(tf,"South");
		tf.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				writer.println(tf.getText());
				ta.append(tf.getText()+'\n');
				ta.setSelectionEnd(ta.getText().length());
				tf.setText("");
				// TODO Auto-generated method stub
				
			}
		});
	}
	
	private void connect()
	{
		ta.append("��������\n");
		try
		{
			socket = new Socket("127.0.0.1",8998);
			writer = new PrintWriter(socket.getOutputStream(),true);
			ta.append("�������\n");
		}catch(Exception e)
		{
			e.printStackTrace();
		}
	}
	

	public static void main(String[] args) {
		MyClien clien = new MyClien("���������������");
		clien.setSize(200, 200);
		clien.setVisible(true);
		clien.connect();
		// TODO Auto-generated method stub

	}

}
