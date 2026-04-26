import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

class Pair {
    int first;
    char second;
    Pair(int first, char second) {
        this.first = first;
        this.second = second;
    }
}
public class Main {
    static int N;
    static ArrayList<Pair> arr;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st;
        StringBuilder sb = new StringBuilder();

        N = Integer.parseInt(br.readLine());
        arr = new ArrayList<>(N);

        for(int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int num = Integer.parseInt(st.nextToken());
            if(num == 3) {
                if(!arr.isEmpty()) arr.remove(arr.size() - 1);
                continue;
            }
            char c;
            c = st.nextToken().charAt(0);
            arr.add(new Pair(num, c));
        }

        String s1 = "";
        String s2 = "";
        if(arr.size() == 0) {
            bw.write('0');
        }
        else {
            Deque<Character> ans = new ArrayDeque<>();
            for(Pair pair : arr) {
                if(pair.first == 1) ans.addLast(pair.second);
                else ans.addFirst(pair.second);
            }
            for(char c : ans) {
                bw.write(c);
            }
        }

        bw.write(sb.toString());
        bw.flush();
        bw.close();
        br.close();
    }
}