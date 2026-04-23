#include <stdio.h>

int main() {
    int indexBlock, n, i, file[50], cont;

    // initialize
    for(i = 0; i < 50; i++)
        file[i] = 0;

    printf("Enter index block: ");
    scanf("%d", &indexBlock);

    if(file[indexBlock] == 0) {
        file[indexBlock] = 1;

        printf("Enter number of blocks for file: ");
        scanf("%d", &n);

        printf("Enter block numbers:\n");

        for(i = 0; i < n; i++) {
            int b;
            scanf("%d", &b);

            if(file[b] == 0) {
                file[b] = 1;
                printf("%d -> allocated\n", b);
            } else {
                printf("%d -> already allocated\n", b);
            }
        }

        printf("\nIndex block %d stores file blocks successfully.\n", indexBlock);
    } else {
        printf("Index block already used!\n");
    }

    return 0;
}