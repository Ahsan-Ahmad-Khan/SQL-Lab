#include <stdio.h>
#include <conio.h>

int main() {
    int t[20], n, i;
    int tohm[20], tot = 0;
    float avhm;

    float clrscr();

    printf("Enter number of tracks: ");
    scanf("%d", &n);

    printf("Enter the track positions:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    // Calculate head movements
    for(i = 0; i < n - 1; i++) {
        tohm[i] = t[i + 1] - t[i];

        if(tohm[i] < 0)
            tohm[i] = -tohm[i];

        tot += tohm[i];
    }

    avhm = (float)tot / (n - 1);

    printf("\nTracks Traversed\tDifference\n");

    for(i = 0; i < n - 1; i++) {
        printf("%d -> %d\t\t%d\n", t[i], t[i + 1], tohm[i]);
    }

    printf("\nTotal Head Movement: %d", tot);
    printf("\nAverage Head Movement: %f", avhm);

    getch();
    return 0;
}