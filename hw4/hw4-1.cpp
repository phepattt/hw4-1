#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n, a = 1, b = 0, r, h;
    scanf("%d", &n);
    if (n > 0) {
        for (int r = 0; r < n; r++) {
            for (int h = 0; h < n - r; h++) {
                printf("* ");
            }
            for (int h = 0; h < b; h++) {
                printf(" ");
            }
            b = b + 4;
            for (int h = 0; h < n - r; h++) {
                printf(" *");
            }
            printf("\n");
        }
        a = 4 * (n - 1);
        for (int r = 0; r < n; r++) {
            for (int h = 0; h <= r; h++) {
                printf("* ");
            }
            for (int h = 0; h < a; h++) {
                printf(" ");
            }
            a = a - 4;
            for (int h = 0; h <= r; h++) {
                printf(" *");
            }
            printf("\n");
        }
    }
    return 0;
}


