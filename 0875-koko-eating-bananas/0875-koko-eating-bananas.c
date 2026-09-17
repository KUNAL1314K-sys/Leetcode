int hrs(int* piles, int pilesSize, int x) {
    int hr = 0;

    for (int i = 0; i < pilesSize; i++) {
        if (piles[i] % x == 0)
            hr += piles[i] / x;
        else
            hr += piles[i] / x + 1;
    }

    return hr;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int low = 1;
    int high = piles[0];

    for (int i = 1; i < pilesSize; i++) {
        if (piles[i] > high)
            high = piles[i];
    }

    while (low < high) {
        int mid = (low + high) / 2;

        if (hrs(piles, pilesSize, mid) <= h)
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}