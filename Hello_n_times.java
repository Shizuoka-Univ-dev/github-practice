class hello_n_times{
    static String hello_n_times (int N) {
        String r = "";

        for (int i = 0; i < N; i++){
            r = r + "hello" + "\n";
        }

        return r;
    }
}