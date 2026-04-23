#include <stdio.h>
#include <conio.h>

int main() {
    int ms, mp[10], i, temp, n = 0;
    char ch = 'y';

    float clrscr();

    printf("Enter total memory available (in Bytes): ");
    scanf("%d", &ms);

    temp = ms;

    for(i = 0; ch == 'y'; i++, n++) {
        printf("\nEnter memory required for process %d: ", i + 1);
        scanf("%d", &mp[i]);

        if(mp[i] <= temp) {
            printf("Memory allocated for Process %d", i + 1);
            temp = temp - mp[i];
        }
        else {
            printf("Memory Full");
            break;
        }

        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &ch);
    }

    printf("\n\nTotal Memory Available = %d", ms);
    printf("\n\nPROCESS\tMEMORY ALLOCATED");

    for(i = 0; i < n; i++) {
        printf("\n%d\t%d", i + 1, mp[i]);
    }

    printf("\n\nTotal Memory Allocated = %d", ms - temp);
    printf("\nExternal Fragmentation = %d", temp);

    getch();
    return 0;
}