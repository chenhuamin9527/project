package lab10;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Lab10_1 {

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		File file = new File("Myfile.txt");
		try {
			FileOutputStream out = new FileOutputStream(file);
			byte buy[] = "Java�������".getBytes();
			out.write(buy);
			out.close();
		}catch (Exception e) {
			e.printStackTrace();
		}
		try {
			FileInputStream inputStream = new FileInputStream(file);
			byte byt[] = new byte[1024];
			int len = inputStream.read(byt);
			System.out.println("�ļ��е���Ϣ�ǣ�" + new String(byt, 0, len));
		}catch (Exception e) {
			e.printStackTrace();
		}
	}

}
