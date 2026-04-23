#include <stdio.h>

int n, i, choice;
int state[10];

void eat(int p) {
    if(state[p] == 1)
        printf("Philosopher %d is already eating\n", p);
    else {
        state[p] = 1;
        printf("Philosopher %d starts eating\n", p);
    }
}

void think(int p) {
    state[p] = 0;
    printf("Philosopher %d is thinking\n", p);
}

int main() {
    printf("Enter number of philosophers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        state[i] = 0;

    while(1) {
        printf("\n1.Eat  2.Think  3.Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 3)
            break;

        int p;
        printf("Enter philosopher number: ");
        scanf("%d", &p);

        if(p >= n) {
            printf("Invalid philosopher\n");
            continue;
        }

        if(choice == 1)
            eat(p);
        else if(choice == 2)
            think(p);
        else
            printf("Invalid choice\n");
    }

    return 0;
}