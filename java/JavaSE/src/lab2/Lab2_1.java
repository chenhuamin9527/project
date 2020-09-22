package lab2;

public class Lab2_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for (int i = 1; i <= 1000; i++)
		{
			int a[] = new int[1000];
			int k = 0;
			int t = i;
			for (int j = 1; j < i; j++)
			{
				if(i%j == 0)
				{
					k += j;
				}
				if(k == i)
				{
					System.out.println(k);
					break;
				}
			}
		}
	}
	
}
