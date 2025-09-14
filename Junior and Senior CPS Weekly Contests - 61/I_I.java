import java.util.*;

public class  I_I {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            long n = sc.nextLong();
            long a = -1, b = -1, c = -1;
            boolean found = false;

            for (long i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    a = i;
                    break;
                }
            }

            if (a != -1) {
                long m = n / a;
                for (long i = a + 1; i * i <= m; i++) {
                    if (m % i == 0 && i != a) {
                        b = i;
                        c = m / b;
                        if (c != a && c != b && c > 1) {
                            found = true;
                        }
                        break;
                    }
                }
            }

            if (found) {
                System.out.println("YES");
                System.out.println(a + " " + b + " " + c);
            } else {
                System.out.println("NO");
            }
        }
    }
}
