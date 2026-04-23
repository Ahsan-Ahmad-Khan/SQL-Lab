#include <stdio.h>

int main() {
    int n, i, j, time[10], avail, safe[10];
    int temp[10], t, ind = 1;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    char job[10][10];

    for(i = 0; i < n; i++) {
        printf("Enter job name and time: ");
        scanf("%s %d", job[i], &time[i]);
    }

    printf("Enter available resources: ");
    scanf("%d", &avail);

    // copy time array
    for(i = 0; i < n; i++) {
        temp[i] = time[i];
    }

    // sorting (SJF style for safety)
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(temp[i] > temp[j]) {
                t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    printf("\nSafe execution order:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(time[j] == temp[i] && time[j] <= avail) {
                safe[ind] = j;
                avail += time[j];

                printf("%s (time=%d)\n", job[j], time[j]);

                time[j] = 999; // mark used
                ind++;
            }
        }
    }

    printf("\nSafe Sequence is:\n");
    for(i = 1; i < ind; i++) {
        printf("%s -> ", job[safe[i]]);
    }

    printf("END");

    return 0;
}