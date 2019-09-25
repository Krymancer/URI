#include <stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked

inline void out(unsigned long int n) {
    register char buf[11];
    buf[10] = '\n';
    int i = 9;
    do {
        buf[i--] = n % 10 + '0';
    } while (n /= 10);
    while (buf[i] != '\n')
        pc(buf[++i]);
}

inline unsigned long int in() {
    register int c = gc();
    if (c == EOF) return -30;
    register unsigned long int x = 0;
    if (c == ' ') c = gc();
    for (; c > 47 && c < 58; c = gc())
        x = (x << 1) + (x << 3) + c - 48;
    return x;
}

int main() {
    register unsigned long int n, m;
    while (1) {
        n = in();
        if (n == -30) break;
        m = in();
        out(n ^ m);
    }
    return 0;
}