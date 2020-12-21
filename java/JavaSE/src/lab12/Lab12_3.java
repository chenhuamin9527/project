package lab12;

import java.net.*;
import java.io.*;
public class Lab12_3 {
 URL url;
 public Lab12_3(URL url) throws UnsupportedEncodingException, IOException {
  // TODO Auto-generated constructor stub
  this.url = url;
  get_content();
 }
 private void get_content() throws UnsupportedEncodingException, IOException{
  BufferedReader br = new BufferedReader(new InputStreamReader(url.openStream(), "utf-8"));
  String s = null;
  while((s = br.readLine())!=null){
   System.out.println(s);
  }
 }
 public static void main(String[] args) throws UnsupportedEncodingException, IOException {
  new Lab12_3(new URL("https://www.qq.com"));
 }
}