#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int score = 0;
    while (n >= 10) {
        int d1 = (n % 100) / 10, d2 = n % 10;
        int c = 0;
        if (d1 + d2 == 2 || d1 + d2 == 3 || d1 + d2 == 5 || d1 + d2 == 7 || 
            d1 + d2 == 11 || d1 + d2 == 13 || d1 + d2 == 17) {
            score++;
            c++;
        }
        if (d1 == 2 || d1 == 3 || d1 == 5 || d1 == 7 || 
            d2 == 2 || d2 == 3 || d2 == 5 || d2 == 7) {
            score++;
            c++;
        }
        int d = d1 * 10 + d2;
        if (d == 2 || d == 3 || d == 5 || d == 7 || d == 11 ||
            d == 13 || d == 17 || d == 19 || d == 23 || d == 29 ||
            d == 31 || d == 37 || d == 41 || d == 43 || d == 47 ||
            d == 53 || d == 59 || d == 61 || d == 67 || d == 71 || 
            d == 73 || d == 79 || d == 83 || d == 89 || d == 97) {
            score += 3;
            c++;
        }
        if (c == 3) {
            score += 4;
        }
        n /= 10;
    }
    printf("%d\n", score);
}
