

char* removeStars(char* s) {

    int n = strlen(s);

    char *stack = (char*)malloc((n + 1) * sizeof(char));

    int top = -1;

    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] != '*') {
            stack[++top] = s[i];
        }
        else {
            top--;
        }
    }

    stack[top + 1] = '\0';

    return stack;
}