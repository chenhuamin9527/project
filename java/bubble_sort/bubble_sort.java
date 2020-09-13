import java.util.Arrays;

public class bubble_sort{
    public static void main(String []args)
    {
         int[] ns = { 28, 12, 89, 73, 65, 18, 96, 50, 8, 36 };
        // ≈≈–Ú«∞:
        System.out.println(Arrays.toString(ns));
        // ≈≈–Ú∫Û£∫
        for (int i = 0; i < ns.length-1; i++)
        {
            for (int j = 0; j < ns.length-i-1; j++)
            {
                if(ns[j] < ns[j+1])
                {
                    int t = ns[j];
                    ns[j] = ns[j+1];
                    ns[j+1] = t;
                }
            }
        }
        // ≈≈–Ú∫Û:
        System.out.println(Arrays.toString(ns));
        if (Arrays.toString(ns).equals("[96, 89, 73, 65, 50, 36, 28, 18, 12, 8]")) {
            System.out.println("≤‚ ‘≥…π¶");
        } else {
            System.out.println("≤‚ ‘ ß∞‹");
        }
    
    }
}