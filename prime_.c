int countPrimes(int n) {
    int* prime = calloc(n + 1, sizeof(int));
    for (int i = 2; i <= sqrt(n); i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (!prime[i])
            count++;
    }
    return count;
}