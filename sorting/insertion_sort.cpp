template<typename T> void InsertionSort(int n, T A[100]) {

    int c = 0;
    T r = 0;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        j = i;
        while (j != c) {
            if (A[j] <= A[j - 1]) {
                r = A[j];
                A[j] = A[j - 1];
                A[j - 1] = r;
            }
            j--;
        }

    }
}