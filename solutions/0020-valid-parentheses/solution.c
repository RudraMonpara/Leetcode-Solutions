bool isValid(char* s) {
    char stack[10000];
    int top = -1;
    
    while (*s) {
        if (*s == '(' || *s == '[' || *s == '{') {
            stack[++top] = *s;
        } else {
            if (top == -1) return false;
            
            char expected;
            switch (*s) {
                case ')': expected = '('; break;
                case ']': expected = '['; break;
                case '}': expected = '{'; break;
                default: return false;
            }
            
            if (stack[top--] != expected) return false;
        }
        s++;
    }
    
    return top == -1;
}
