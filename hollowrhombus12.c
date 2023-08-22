#include <stdio.h>

int main() {
    int i, n = 5, j, s;
    
    for (i = 0; i < n; i++) {
        for (s = 0; s < n - i - 1; s++) {
            printf("  ");
        }
        
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
