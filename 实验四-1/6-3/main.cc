int FindArrayMax(int a[],int n) {
    int MAX = 0;
    for (int i = 0 ; i < n ;i++) {
        if (a[i] > MAX) {
            MAX = a[i];
        }
    }
    return MAX;
}
