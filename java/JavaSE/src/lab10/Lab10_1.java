package lab10;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Lab10_1 {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		File file = new File("Myfile.txt");
		try {
			FileOutputStream out = new FileOutputStream(file);
			byte buy[] = "Java程序设计".getBytes();
			out.write(buy);
			out.close();
		}catch (Exception e) {
			e.printStackTrace();
		}
		try {
			FileInputStream inputStream = new FileInputStream(file);
			byte byt[] = new byte[1024];
			int len = inputStream.read(byt);
			System.out.println("文件中的信息是：" + new String(byt, 0, len));
		}catch (Exception e) {
			e.printStackTrace();
		}
	}

}
