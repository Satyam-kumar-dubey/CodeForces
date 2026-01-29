import java.io.*;
import java.util.*;

public class Main {

    // ---------- Fast Scanner ----------
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

        long nextLong() throws IOException {
            int c;
            do c = readByte();
            while (c <= ' ');

            long sign = 1;
            if (c == '-') { sign = -1; c = readByte(); }

            long val = 0;
            while (c > ' ') {
                val = val * 10 + (c - '0');
                c = readByte();
            }
            return val * sign;
        }

        int nextInt() throws IOException {
            return (int) nextLong();
        }
    }

    // ---------- Helpers ----------
    static boolean isSorted(long[] a) {
        for (int i = 1; i < a.length; i++)
            if (a[i] < a[i - 1]) return false;
        return true;
    }

    static class Pair {
        long v;
        int idx;
        Pair(long v, int idx) { this.v = v; this.idx = idx; }
    }

    // Check if we can sort using swaps with |ai-aj| >= k
    static boolean possible(long[] a, long k) {
        int n = a.length;

        Pair[] vp = new Pair[n];
        for (int i = 0; i < n; i++) vp[i] = new Pair(a[i], i);
        Arrays.sort(vp, (p1, p2) -> {
            if (p1.v != p2.v) return Long.compare(p1.v, p2.v);
            return Integer.compare(p1.idx, p2.idx);
        });

        long[] val = new long[n];     // val[tokenId]
        int[] tokenAtPos = new int[n]; // token currently at position
        for (int id = 0; id < n; id++) {
            val[id] = vp[id].v;
            tokenAtPos[vp[id].idx] = id;
        }

        int[] comp = new int[n];
        Arrays.fill(comp, -1);

        TreeSet<Integer> unvis = new TreeSet<>();
        for (int i = 0; i < n; i++) unvis.add(i);

        ArrayDeque<Integer> q = new ArrayDeque<>();
        int cid = 0;

        while (!unvis.isEmpty()) {
            int s = unvis.pollFirst();
            comp[s] = cid;
            q.add(s);

            while (!q.isEmpty()) {
                int u = q.poll();

                long leftVal = val[u] - k;
                long rightVal = val[u] + k;

                int L = upperBound(val, leftVal) - 1;   // last index with val <= leftVal
                int R = lowerBound(val, rightVal);      // first index with val >= rightVal

                // take all unvisited <= L
                while (!unvis.isEmpty()) {
                    Integer x = unvis.first();
                    if (x > L) break;
                    unvis.pollFirst();
                    comp[x] = cid;
                    q.add(x);
                }

                // take all unvisited >= R
                while (true) {
                    Integer x = unvis.ceiling(R);
                    if (x == null) break;
                    unvis.remove(x);
                    comp[x] = cid;
                    q.add(x);
                }
            }
            cid++;
        }

        // In sorted array, position i must contain token i
        for (int i = 0; i < n; i++) {
            if (comp[i] != comp[tokenAtPos[i]]) return false;
        }
        return true;
    }

    // first index > x
    static int upperBound(long[] a, long x) {
        int l = 0, r = a.length;
        while (l < r) {
            int m = (l + r) >>> 1;
            if (a[m] <= x) l = m + 1;
            else r = m;
        }
        return l;
    }

    // first index >= x
    static int lowerBound(long[] a, long x) {
        int l = 0, r = a.length;
        while (l < r) {
            int m = (l + r) >>> 1;
            if (a[m] < x) l = m + 1;
            else r = m;
        }
        return l;
    }

    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner(System.in);
        StringBuilder out = new StringBuilder();

        int t = fs.nextInt();
        while (t-- > 0) {
            int n = fs.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) a[i] = fs.nextLong();

            if (isSorted(a)) {
                out.append(-1).append('\n');
                continue;
            }

            if (!possible(a, 1)) {
                out.append(-1).append('\n');
                continue;
            }

            long lo = 1, hi = 1_000_000_000L, ans = 1;
            while (lo <= hi) {
                long mid = (lo + hi) >>> 1;
                if (possible(a, mid)) {
                    ans = mid;
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            out.append(ans).append('\n');
        }

        System.out.print(out.toString());
    }
}