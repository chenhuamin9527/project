package lab4;

public class Lab4_5 {
 
	public static void main(String[] args) {
		int[][] intArr1 = {{1,2,3,4},{2,3,4,5}};
	    int[][] intArr2 = {{1,2},{3,4},{5,6},{7,8}};
	    int[][] intArr3 = new int[2][2];
       
       System.out.println("输出矩阵intArr1：");
       for(int i = 0;i<2;i++)
       {
    	   for(int j = 0;j<4;j++)
    	   {
    		   System.out.printf("%d",intArr1[i][j]);
    		   if(j == 3)
    		   {
    			   System.out.println();
    		   }
    		   else
    		   {
    			   System.out.print(",");
    		   }
    	   }
       }
       
       System.out.println("输出矩阵intArr2：");
       for(int i = 0;i<4;i++)
       {
    	   for(int j = 0;j<2;j++)
    	   {
    		   System.out.printf("%d",intArr2[i][j]);
    		   if(j == 1)
    		   {
    			   System.out.println();
    		   }
    		   else
    		   {
    			   System.out.print(",");
    		   }
    	   }
       }
       
       for(int a1 = 0, b1 = 0, c1 = 0, c2 = 0;;)
       {
    	   
    	   for(int a2 = 0, b2 = 0;; a2++, b2++)
    	   {
    		   intArr3[c1][c2] += intArr1[a1%2][a2] * intArr2[b2][b1%2];
    		   if(b2==3)
    		   {
    			   b1++;
    			   b2 = 0;
    		   }
    		   if(a1>=2)
    			   a1 = 1;
    		   if(a2==3) 
			   {
    			   a1++;
    			   a2 = 0;
    			   break;
			   }
    		   
    	   }
    	   c2++;
    	   if(c2==2)
    	   {
    		   c2 = 0;
    		   c1++;
    	   }
    	   if(c1==2)
    		   break;
       }
       
       System.out.println("输出矩阵相乘得到的矩阵intArr3：");
       for(int i = 0;i<2;i++)
       {
    	   for(int j = 0;j<2;j++)
    	   {
    		   System.out.printf("%d",intArr3[i][j]);
    		   if(j == 1)
    		   {
    			   System.out.println();
    		   }
    		   else
    		   {
    			   System.out.print(",");
    		   }
    	   }
       }
	}
}