package lab1;

public class Lab1_3 {
	public static void main(String[] args){
		int n = 20;
		int fib[] = new int[n+1];
		fib[0] = 0;
		fib[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			fib[i] = fib[i-1] + fib[i-2];
			System.out.println("fib[" + i + "] = " + fib[i]);
		}
	}
}
