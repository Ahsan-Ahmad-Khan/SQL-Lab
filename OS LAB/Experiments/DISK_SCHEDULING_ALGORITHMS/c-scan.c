#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int t[30], atr[30], d[30];
    int h, n, i, j, temp, tot;
    int k, p = 0, sum = 0;

    float clrscr();

    printf("Enter number of tracks: ");
    scanf("%d", &n);

    printf("Enter initial head position: ");
    scanf("%d", &h);

    printf("Enter total number of disk tracks: ");
    scanf("%d", &tot);

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

    // Find head index
    for(i = 0; i < n; i++) {
        if(t[i] == h) {
            k = i;
            break;
        }
    }

    // Move towards higher tracks
    for(i = k; i < n; i++) {
        atr[p++] = t[i];
    }

    // Jump to end then to start
    atr[p++] = tot - 1;
    atr[p++] = 0;

    // Continue from start
    for(i = 0; i < k; i++) {
        atr[p++] = t[i];
    }

    // Calculate head movement
    for(i = 0; i < p - 1; i++) {
        d[i] = abs(atr[i] - atr[i+1]);
        sum += d[i];
    }

    printf("\nSeek Sequence:\n");
    for(i = 0; i < p; i++) {
        printf("%d ", atr[i]);
    }

    printf("\n\nTotal Head Movement = %d", sum);
    printf("\nAverage Head Movement = %.2f", (float)sum/(p-1));

    getch();
    return 0;
}