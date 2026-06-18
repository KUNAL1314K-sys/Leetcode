/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int* arr = (int*)malloc((digitsSize + 1) * sizeof(int));

    int carry = 1;
    int sum;

    int i = digitsSize - 1;
    int j = digitsSize;

    while (i >= 0) {
        sum = digits[i] + carry;

        arr[j] = sum % 10;
        carry = sum / 10;

        i--;
        j--;
    }

    if (carry) {
        arr[0] = carry;
        *returnSize = digitsSize + 1;
        return arr;
    }

    *returnSize = digitsSize;

    for (int k = 0; k < digitsSize; k++) {
        arr[k] = arr[k + 1];
    }

    return arr;
}