#include <stdio.h>
#include <string.h>

int main() {
    int tt;
    scanf("%d", &tt);
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    while (tt--) { // 5 4 3 2 1 0
        char num[30002]; // string num
        scanf(" %s", num);
        int n = strlen(num);
        int score = 0;
        for (int i = 0; i < n; i++) {
            int type1 = (num[i] - '0');
            int type2 = 0, type3 = 0;
            if (i != n - 1) {
                type2 = (num[i] - '0') * 10 + (num[i + 1] - '0');
                type3 = (num[i] - '0') + (num[i + 1] - '0');
            }
            for (int j = 0; j < 25; j++) {
                if (prime[j] == type1) {
                    score++;
                } 
                if (prime[j] == type3) {
                    score++;
                }
                if (prime[j] == type2) {
                    score += 2;
                }
            }
        }
        printf("%d\n", score);
    }
}

// string = "82736428"
// strlen(string) = 8

// '2' - '0' = 2

// 'r' -> char
// "sfsl" -> string 1234