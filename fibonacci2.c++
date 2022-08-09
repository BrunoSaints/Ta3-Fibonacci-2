int fib(int n){
    int i, j, f;
    i = 1; f = 0;
    for (j = 1; j <= n; j++) {
        f += i;
        i = f - i;
    }
    return 0;
}