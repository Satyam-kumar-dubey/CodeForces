import java.util.*;

public class C_Huge_Pile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        while (tc-- > 0) {
            long bigPile = sc.nextLong();
            long target = sc.nextLong();

            if (target > bigPile) {
                System.out.println(-1);
                continue;
            }
            if (target == bigPile) {
                System.out.println(0);
                continue;
            }

            long lowBound = bigPile;
            long highBound = bigPile;

            int steps = 0;
            int result = -1;

            // Enough iterations for n,k up to 1e9 (shrinks by ~2 each step)
            while (steps <= 60) {
                if (lowBound <= target && target <= highBound) {
                    result = steps;
                    break;
                }

                lowBound = lowBound / 2;          
                highBound = (highBound + 1) / 2;   
                steps++;

                if (highBound < target) break;
            }

            System.out.println(result);
        }
        sc.close();
    }
}