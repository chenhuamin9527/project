package lab10;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import java.util.zip.ZipInputStream;
import java.util.zip.ZipOutputStream;

//a、使用writeUTF()方法创建并保存一个名为MyText.txt的文件 （参考例15.6）
//
//b、将MyText.txt压缩成MyText.zip文件 （参考例15.7）
//
//c、将MyText.zip解压缩成NewText.txt文件（参考例15.8）
//
//d、使用readUTF（）方法读取NewTxt.txt的内容，并显示在控制台中。（参考例15.6）
public class Lab10_3 {
	private void zip(String zipFileName, File inputFile) throws Exception
	{
		ZipOutputStream out = new ZipOutputStream(new FileOutputStream(zipFileName));
		zip(out, inputFile, inputFile.getName());
		System.out.println("压缩中...");
		out.close();
	}

	private void zip(ZipOutputStream out, File f, String base)throws Exception
	{
		if(f.isDirectory())
		{
			File[] fl = f.listFiles();
			base += "/";
			out.putNextEntry(new ZipEntry(base));
			for(int i = 0; i < fl.length; i++)
			{
				zip(out, fl[i], base + fl[i].getName());
			}
		}
		else
		{
			out.putNextEntry(new ZipEntry(base));
			FileInputStream in = new FileInputStream(f);
			int b;
			System.out.println(base);
			while((b = in.read())!= -1)
			{
				out.write(b);
			}
			in.close();
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try
		{
			FileOutputStream fs = new FileOutputStream("text/MyText.txt");
			DataOutputStream ds = new DataOutputStream(fs);
			ds.writeUTF("使用writeUTF()方法写入数据:");
			ds.writeChars("使用writeChars()方法写入数据:");
			ds.writeBytes("使用writeBytes()方法写入数据:");
			ds.close();
			FileInputStream fis = new FileInputStream("text/MyText.txt");
			DataInputStream dis = new DataInputStream(fis);
			System.out.println(dis.readUTF());
		}catch(Exception e)
		{
			e.printStackTrace();
		}
		Lab10_3 book = new Lab10_3();
		try
		{
			book.zip("D:/projects/java/JavaSE/MyZip.zip", new File("D:/projects/java/JavaSE/text"));
			System.out.println("压缩成功");
		}catch (Exception e)
		{
			e.printStackTrace();
		}
		File file = new File("D:/projects/java/JavaSE/MyZip.zip");
		ZipInputStream zin;
		try
		{
			ZipFile zipFile = new ZipFile(file);
			zin = new ZipInputStream(new FileInputStream(file));
			ZipEntry entry = zin.getNextEntry();
			while((entry = zin.getNextEntry())!=null)
			{
				File tmp = new File("D:\\" + entry.getName());
				if(entry.isDirectory())
					tmp.mkdirs();
				if(!tmp.exists())
				{
					OutputStream os = new FileOutputStream(tmp);
					InputStream in = zipFile.getInputStream(entry);
					int count = 0;
					while((count = in.read())!= -1)
					{
						os.write(count);
					}
					os.close();
					in.close();
				}
				zin.closeEntry();
				System.out.println(entry.getName()+ "解压成功");
			}
			zin.close();
		}catch(Exception e)
		{
			e.printStackTrace();
		}
	}

}
