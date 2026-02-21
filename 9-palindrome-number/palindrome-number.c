int isPalindrome(int x) {
    if (x < 0) return 0;   

    int original = x;
    long reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }

    return original == reversed;
}