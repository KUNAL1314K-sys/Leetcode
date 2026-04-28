#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];   // stack to hold opening brackets
    int top = -1;    // stack pointer

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;   // push opening bracket
        } else {
            if (top == -1) return false;  // no matching opening bracket
            char topch = stack[top--];    // pop from stack
            if ((ch == ')' && topch != '(') ||
                (ch == '}' && topch != '{') ||
                (ch == ']' && topch != '[')) {
                return false;   // mismatch
            }
        }
    }
    return top == -1;  // valid only if stack is empty
}
