#include <stdio.h>

int main() {
    int f[50], i, j, k, a, start, len, n, cont;

    // initialize all blocks as free
    for(i = 0; i < 50; i++)
        f[i] = 0;

    printf("Enter number of already allocated blocks: ");
    scanf("%d", &n);

    printf("Enter allocated blocks:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        f[a] = 1;
    }

    do {
        printf("\nEnter starting block and length: ");
        scanf("%d%d", &start, &len);

        k = len;

        for(j = start; j < start + k; j++) {
            if(f[j] == 0) {
                f[j] = 1;
                printf("%d -> allocated\n", j);
            } else {
                printf("%d -> already allocated (skipped)\n", j);
                k++; // extend file size if block already used
            }
        }

        printf("\nDo you want to add another file? (1/0): ");
        scanf("%d", &cont);

    } while(cont == 1);

    return 0;
}