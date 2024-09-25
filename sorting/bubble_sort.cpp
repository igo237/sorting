template<typename T> void BubbleSort(int n, T A[100]) {

    int c = 0;
    T r = 0;
    for (int i = 0; i < n; i++) {
        for (c = 0; c < n - 1; c++) {
            if (A[c] >= A[c + 1]) {
                r = A[c];
                A[c] = A[c + 1];
                A[c + 1] = r;
            }

        }
    }
}