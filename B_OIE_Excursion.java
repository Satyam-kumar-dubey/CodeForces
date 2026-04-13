import java.util.*;
public class B_OIE_Excursion
{
    public static void main(String args[])
    {
        Scanner ob = new Scanner(System.in);
        int t = ob.nextInt();
        while(t-- > 0)
        {
            int n = ob.nextInt();
            int m = ob.nextInt();
            int arr[] = new int[n];
            for(int i = 0; i < arr.length; i++)
            {
                arr[i] = ob.nextInt();
            }
            int count = 1;
            boolean flag = false;
            for(int i = 0; i < arr.length; i++)
            {
                if(flag)
                {
                    arr[i]++;
                    flag = false;
                }
                else
                {
                    arr[i] = (arr[i] + count)%m;
                }
                if(arr[i] > 0)
                {
                    count++;
                    continue;
                }
                else
                {
                    flag = true;
                    i--;
                    count++;
                }

            }
        }
    }
}