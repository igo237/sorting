template<typename T> void ExchangeSort(int n, T A[100]) {

    int c = 0;
    int j = 0;
    T r = 0;
    T m = 0;
    for (int i = 0; i < n - 1; i++) {
        c = i + 1;
        while (m != A[i]) {
            if (A[i] >= A[c])
            {
                r = A[i];
                A[i] = A[c];
                A[c] = r;
            }
            m = A[i];
            for (j = i + 1; j < n; j++) {
                if (m >= A[j]) {
                    m = A[j];
                }
            }
            c++;
        }

    }
}