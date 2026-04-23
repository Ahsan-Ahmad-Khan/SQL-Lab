#include <stdio.h>

int main() {
    int f[50] = {0}, start, len, i, cont;

    do {
        printf("\nEnter start block and length: ");
        scanf("%d%d", &start, &len);

        int ok = 1;

        for(i = start; i < start + len; i++) {
            if(f[i] == 1) {
                ok = 0;
                break;
            }
        }

        if(ok) {
            for(i = start; i < start + len; i++) {
                f[i] = 1;
                printf("%d -> allocated\n", i);
            }
        } else {
            printf("Block already allocated\n");
        }

        printf("Continue? (1/0): ");
        scanf("%d", &cont);

    } while(cont == 1);

    return 0;
}