import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.StringTokenizer;

class Point {
    int x;
    int y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

public class Main {
    static int N, M, K;
    static ArrayList<Point> arr;

    private static int gcd(int a, int b) {
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());

        arr = new ArrayList<>(N * K + 1);

        for (int i = 0; i < N; i++) {
            int x, y;
            st = new StringTokenizer(br.readLine());
            x = Integer.parseInt(st.nextToken());
            y = Integer.parseInt(st.nextToken());

            for(int j = 0; j < K; j += 2) {
                int g = gcd(x, y);
                arr.add(new Point(x / g, y / g));
                x += 2 * M;
            }
            x %= M;
            x = 2 * M - x;
            for(int j = 1; j < K; j += 2) {
                int g = gcd(x, y);
                arr.add(new Point(x / g, y / g));
                x += 2 * M;
            }
        }
        arr.sort(new Comparator<Point>() {
            @Override
            public int compare(Point o1, Point o2) {
                if(o1.x == o2.x) {
                    return o1.y - o2.y;
                }
                return o1.x - o2.x;
            }
        });
        arr.add(new Point(-1, -1));

        Point t = new Point(0, 0);
        int cnt = 0, ans = 0;
        for (Point point : arr) {
            if (point.x != t.x || point.y != t.y) {
                ans = Math.max(ans, cnt);
                t = point;
                cnt = 1;
            }
            else {
                cnt++;
            }
        }
        System.out.println(ans);
    }
}
