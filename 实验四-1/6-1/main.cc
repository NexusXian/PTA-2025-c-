int search(int list[],int n,int x) {
    int flag = 0;
    int index = 0;
    for (int i = 0 ; i< n ;i++) {
        if (list[i] == x) {
            index = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        return index;
    } else {
        return -1;
    }
}
