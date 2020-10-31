package lab3;


import java.util.Scanner;
 
public class Lab3_2 {
 
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int num[] = new int[100];
 
 
		for(int i=0;i<=str.length()-1;i++){
			char alp = str.charAt(i);
			if(alp >='A' && alp <= 'Z')
				alp +='a' - 'A';
			int t = alp-32;
			num[t]++;
		}
		for(int k=0;k<=99;k++)
		{
			char s1 = ' ';
			if(num[k] != 0)
			{
				 s1 = (char) (' '+ k);
				 System.out.println(s1+" "+num[k]);
			}
			
			
		}
		sc.close();
 
	}
 
}