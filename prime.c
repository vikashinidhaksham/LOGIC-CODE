int countPrimes(int n) {
    int count = 0;
    if (n <= 2) 
       return count;

    for (int i = 2; i < n; i++) {
        int flag = 0; 
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            count++;
        }
    }
    return count; 
}
