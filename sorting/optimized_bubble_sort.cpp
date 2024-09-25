template<typename T> void OptimizedBubbleSort(int n, T A[100]) {

    int c = 0;
    int j = 0;
    T r = 0;
    for (int i = 0; i < n; i++) {
        bool sorted = true;
        for (c = 0; c < n - (i + 1); c++) {
            if (A[c] >= A[c + 1]) {
                r = A[c];
                A[c] = A[c + 1];
                A[c + 1] = r;
                sorted = false;
            }
        }
        if (sorted) {
            break;
        }
    }
}