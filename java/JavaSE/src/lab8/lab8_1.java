package lab8;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

public class lab8_1 extends JFrame {
	public lab8_1() {
		// TODO �Զ����ɵĹ��캯�����
		Container container=getContentPane();
		container.setBackground(Color.GRAY);
		setLayout(null);	//���Բ���
		final JRadioButton jr1=new JRadioButton();
		final JRadioButton jr2=new JRadioButton();
		
		final JLabel jl1=new JLabel();
		final JButton btn1=new JButton("�ύ");
		
		final JLabel jlT=new JLabel("<html><body><h1 color='red'>�û�ע��</h1></body></html>");
		jlT.setBounds(150,10,100,30);
		container.add(jlT);
		
		JLabel jl3=new JLabel("������");
		jl3.setBounds(100,50,100,30);
		container.add(jl3);
		
		JTextField jt1= new JTextField("����",20);
		jt1.setFont(new Font(null, Font.PLAIN, 15));
		jt1.setBounds(150, 55, 150, 30);
		container.add(jt1);
		
		JLabel jl4=new JLabel("���룺");
		jl4.setBounds(100,80,100,30);
		container.add(jl4);
		
		JPasswordField jpf =new JPasswordField("����", 20);
		jpf.setFont(new Font(null, Font.PLAIN, 15));
		jpf.setBounds(150, 85, 150, 30);
		container.add(jpf);
		
		JLabel jl5=new JLabel("�Ա�");		
		jl5.setBounds(100,110,100,30);
		container.add(jl5);
		
		jr1.setText("��");
		jr1.setSelected(true);
		jr1.setBounds(150,120,100,30);
		jr2.setText("Ů");
		jr2.setBounds(250,120,100,30);
		ButtonGroup bg1=new ButtonGroup();
		bg1.add(jr1);
		bg1.add(jr2);		
		container.add(jr1);
		container.add(jr2);
		
		JLabel jl2=new JLabel("���ã�");
		jl2.setBounds(100,140,100,40);
		container.add(jl2);
		
		final JPanel jp1=new JPanel();	//�½�һ����壬װ�ء����á���ѡ��ť
		jp1.setBounds(100,170,200,100);		
		jp1.setLayout(new GridLayout(2,2,25,25));
		container.add(jp1);
		
		String arr[]={"����","�˶�","�Ķ�","����"};
		
		for(int i=0;i<arr.length;i++)
		{
			JCheckBox jcb1=new JCheckBox(arr[i]);
			jp1.add(jcb1);
		}
		
		String list1data[]={"����","ר��","�о���"};
		JLabel jl6 = new JLabel("ѧ�ƣ�");
		jl6.setBounds(100,270,100,30);
		container.add(jl6);
		
		JComboBox<String> comboBox = new JComboBox<String>(list1data);	//�����б����String��Ϊ�����Ĺ��캯��
		comboBox.setBounds(150, 270, 100, 30);

        comboBox.setSelectedIndex(0);
        container.add(comboBox);

		
		String list2data[]={"��ɽ","�Ϻ�","��ѧ��"};	
		JLabel jl7 = new JLabel("У����");
		jl7.setBounds(100,300,100,40);
		container.add(jl7);
		
		JList<String> list2 = new JList<String>();
		list2.setBounds(150, 300, 100, 60);

        list2.setListData(list2data);


        list2.setSelectedIndex(1);
        container.add(list2);
        
        JLabel jl8 = new JLabel("���ҽ��ܣ�");
		jl8.setBounds(100,390,100,40);
		container.add(jl8);
		
		JTextArea jta = new JTextArea();
		jta.setTabSize(4);  
        jta.setFont(new Font("����", Font.PLAIN, 16));  
        jta.setLineWrap(true);// �����Զ����й���  
        jta.setWrapStyleWord(true);// ������в����ֹ���  
        jta.setBackground(Color.WHITE);
        
		JScrollPane jsp =new JScrollPane(jta);
		jsp.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_AS_NEEDED );
		jsp.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS );
		jsp.setBounds(100, 430, 300, 100);
		container.add(jsp);
		
		
		btn1.setBounds(100,600,100,30);
		container.add(btn1);
		btn1.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				String s1="";
				String s2="";
				if(jr1.isSelected())
					s1=jt1.getText()+"����";
				else {
					s1=jt1.getText()+"Ůʿ";
				}
			
				Component cps[]=jp1.getComponents();
				for (Component cp : cps)
				{
					if(cp instanceof JCheckBox)
					{
						JCheckBox jcb=(JCheckBox)cp;
						if(jcb.isSelected())
							s2+=jcb.getText()+" ";
					}
					
				}
				String str="<html><body><h1>ע����Ϣ</h1><p>";
				str+= s1+"�����Ϻã�</p>";
				str+="<p>����ע��������ǣ�"+new String(jpf.getPassword())+"</p>";
				str+="<p>���İ����ǣ�"+s2+"</p>";
				str+="<p>����ѧ���ǣ�"+(String)comboBox.getSelectedItem()+"</p>";
				str+="<p>�����ڵ�У���ǣ�"+(String)list2.getModel().getElementAt(list2.getSelectedIndex())+"</p>";
				str+="<p>�������ҽ��������ǣ�"+jta.getText()+"</p>";
				str+="</body></html>";
				jl1.setText(str);
				
				
			}
		});
		
		jl1.setBounds(400,380,200,200);
		container.add(jl1);
		
		setBounds(100,100,700,700);
		setVisible(true);		
		setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
	}

	public static void main(String[] args) {
		new lab8_1();

	}

}
