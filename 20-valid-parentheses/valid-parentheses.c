#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];   
    int top = -1;   

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) return false; 
            char topch = stack[top--];    
            if ((ch == ')' && topch != '(') ||
                (ch == '}' && topch != '{') ||
                (ch == ']' && topch != '[')) {
                return false;  
            }
        }
    }
    return top == -1; 
}
