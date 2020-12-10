import java.util.*;

class pow {

    static long _pow(int k, int i) {
        long n = k;
        if (i == 0)
            return 1;
        if (i == 1)
            return n;
        for (int j = 0; j < i - 1; j++) {
            n = n * k;
        }
        return n;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        int j = sc.nextInt();
        long k = _pow(i, j);
        System.out.println(k);
    }
}