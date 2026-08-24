void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int* arr, int low, int high) {
    int ind = low - 1;
    int pivot = arr[high];

    for (int i = low; i < high; i++) {
        if (arr[i] <= pivot) {
            ind++;
            swap(&arr[ind], &arr[i]);
        }
    }

    ind++;
    swap(&arr[ind], &arr[high]);

    return ind;
}
void quickSort(int* arr, int low, int high) {
    if (low <= high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int lastStoneWeight(int* stones, int stonesSize) {

    while(stonesSize>1){
        quickSort(stones,0,stonesSize-1);
        int max = stones[stonesSize-1];
        int max2 = stones[stonesSize-2];
        stones[stonesSize-2] = max - max2;
        stonesSize--;

    }
    return stones[0];
}


