template<typename T> void SelectionSort(int n, T A[100]) {

    int c = 0;
    int j = 0;
    T r = 0;
    T m = 0;
    for (int i = 0; i < n - 1; i++)
    {
        m = A[i];
        c = i;
        for (j = i + 1; j < n; j++) {

            if (m > A[j]) {
                m = A[j];
                c = j;
            }
        }
        r = m;
        A[c] = A[i];
        A[i] = r;

    }
}