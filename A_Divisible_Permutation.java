import java.io.*;
import java.util.*;

public class Main {

    // Fast input
    static class FastScanner {
        private final InputStream in;
        private final byte[] buffer = new byte[1 << 16];
        private int ptr = 0, len = 0;

        FastScanner(InputStream is) { in = is; }

        private int readByte() throws IOException {
            if (ptr >= len) {
                len = in.read(buffer);
                ptr = 0;
                if (len <= 0) return -1;
            }
            return buffer[ptr++];
        }

        int nextInt() throws IOException {
            int c;
            do c = readByte();
            while (c <= ' ');

            int sign = 1;
            if (c == '-') {
                sign = -1;
                c = readByte();
            }

            int val = 0;
            while (c > ' ') {
                val = val * 10 + (c - '0');
                c = readByte();
            }
            return val * sign;
        }
    }

    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner(System.in);
        StringBuilder out = new StringBuilder();

        int t = fs.nextInt();
        while (t-- > 0) {
            int n = fs.nextInt();

            int[] p = new int[n];
            boolean[] used = new boolean[n + 1];

            // Start from the end
            p[n - 1] = 1;
            used[1] = true;

            // Build backwards: need p[i-1] % i == p[i] % i  (i is 1..n-1)
            for (int i = n - 1; i >= 1; i--) {
                int target = p[i] % i;
                int chosen = -1;

                for (int x = 1; x <= n; x++) {
                    if (!used[x] && (x % i) == target) {
                        chosen = x;
                        break;
                    }
                }

                p[i - 1] = chosen;
                used[chosen] = true;
            }

            for (int i = 0; i < n; i++) {
                out.append(p[i]).append(i + 1 == n ? '\n' : ' ');
            }
        }

        System.out.print(out.toString());
    }
}
