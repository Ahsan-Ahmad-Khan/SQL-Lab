#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int t[20], atr[20], d[20];
    int i, j, n, h, temp, k, sum = 0;
    int p = 0;

    float clrscr();

    printf("Enter number of tracks: ");
    scanf("%d", &n);

    printf("Enter initial head position: ");
    scanf("%d", &h);

    printf("Enter track positions:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    // Add head position
    t[n] = h;
    n++;

    // Sorting
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(t[j] > t[j+1]) {
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }

    // Find head position index
    for(i = 0; i < n; i++) {
        if(t[i] == h) {
            k = i;
            break;
        }
    }

    // Move towards 0 (SCAN left side)
    for(i = k; i >= 0; i--) {
        atr[p++] = t[i];
    }

    // Move right side
    for(i = k + 1; i < n; i++) {
        atr[p++] = t[i];
    }

    // Calculate movement
    for(i = 0; i < p - 1; i++) {
        d[i] = abs(atr[i] - atr[i+1]);
        sum += d[i];
    }

    printf("\nTrack Movement Sequence:\n");
    for(i = 0; i < p; i++) {
        printf("%d ", atr[i]);
    }

    printf("\n\nTotal Head Movement = %d", sum);
    printf("\nAverage Head Movement = %.2f", (float)sum/(p-1));

    getch();
    return 0;
}