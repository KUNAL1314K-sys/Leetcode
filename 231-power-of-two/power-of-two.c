#include <math.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false; 

    for (int i = 0; i < 32; i++) {
        int ans = (int)pow(2, i);
        if (n == ans) {
            return true;
        }
    }
    return false;
}