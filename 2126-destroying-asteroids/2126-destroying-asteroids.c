

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) {
    qsort(asteroids, asteroidsSize, sizeof(int), compare);

    long long sum = mass;

    for (int i = 0; i < asteroidsSize; i++) {
        if (sum >= asteroids[i]) {
            sum += asteroids[i];
        } else {
            return false;
        }
    }

    return true;
}