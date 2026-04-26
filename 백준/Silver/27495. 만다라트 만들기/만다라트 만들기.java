import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.StringTokenizer;

class Pair {
    String first;
    String second;
    Pair(String first, String second) {
        this.first = first;
        this.second = second;
    }
}
public class Main {
    static String[][] arr = new String[9][9];
    static ArrayList<Pair> list = new ArrayList<>(64);
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st;
        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < 9; i++) {
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < 9; j++) {
                arr[i][j] = st.nextToken();
            }
        }

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(i == 1 && j == 1) continue;

                for(int k = 0; k < 3; k++) {
                    for(int l = 0; l < 3; l++) {
                        if(k == 1 && l == 1) continue;
                        list.add(new Pair(arr[i*3+1][j*3+1], arr[i*3+k][j*3+l]));
                    }
                }
            }
        }

        list.sort(new Comparator<Pair>() {
            @Override
            public int compare(Pair o1, Pair o2) {
                if(o1.first.equals(o2.first)) {
                    return o1.second.compareTo(o2.second);
                }
                return o1.first.compareTo(o2.first);
            }
        });

        for(int i = 0; i < 8; i++) {
            sb.append('#');
            sb.append(i+1);
            sb.append(". ");
            sb.append(list.get(i*8).first);
            sb.append('\n');
            for(int j = 0; j < 8; j++) {
                sb.append('#');
                sb.append(i+1);
                sb.append("-");
                sb.append(j+1);
                sb.append(". ");
                sb.append(list.get(i*8+j).second);
                sb.append('\n');
            }
        }

        bw.write(sb.toString());
        bw.flush();
        bw.close();
        br.close();
    }
}
