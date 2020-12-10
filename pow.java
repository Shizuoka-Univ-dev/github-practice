import java.util.*;

class pow {

    static long _pow(int p, int k) {
        long n = p;
        if (k == 0)
            return 1;
        if (k == 1)
            return n;
        for (int j = 0; j < k - 1; j++) {
            n = n * p;
        }
        return n;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int p = sc.nextInt();
        int k = sc.nextInt();
        long pow = _pow(p, k);
        System.out.println(pow);
    }
}