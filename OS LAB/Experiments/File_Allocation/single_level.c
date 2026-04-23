#include <stdio.h>
#include <string.h>
#include <conio.h>

struct directory {
    char dname[10];
    char fname[10][10];
    int fcnt;
} dir;

int main() {
    int i, ch;
    char f[30];

    float clrscr();

    dir.fcnt = 0;

    printf("Enter name of directory: ");
    scanf("%s", dir.dname);

    while(1) {
        printf("\n\n1. Create File");
        printf("\n2. Delete File");
        printf("\n3. Search File");
        printf("\n4. Display Files");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch) {

        case 1:
            printf("\nEnter file name: ");
            scanf("%s", dir.fname[dir.fcnt]);
            dir.fcnt++;
            break;

        case 2:
            printf("\nEnter file name to delete: ");
            scanf("%s", f);

            for(i = 0; i < dir.fcnt; i++) {
                if(strcmp(f, dir.fname[i]) == 0) {
                    printf("File %s deleted", f);

                    strcpy(dir.fname[i], dir.fname[dir.fcnt - 1]);
                    dir.fcnt--;
                    break;
                }
            }

            if(i == dir.fcnt)
                printf("File not found");

            break;

        case 3:
            printf("\nEnter file name to search: ");
            scanf("%s", f);

            for(i = 0; i < dir.fcnt; i++) {
                if(strcmp(f, dir.fname[i]) == 0) {
                    printf("File %s found", f);
                    break;
                }
            }

            if(i == dir.fcnt)
                printf("File not found");

            break;

        case 4:
            printf("\nFiles in directory %s:\n", dir.dname);

            if(dir.fcnt == 0)
                printf("No files present");
            else {
                for(i = 0; i < dir.fcnt; i++)
                    printf("%s\n", dir.fname[i]);
            }
            break;

        case 5:
            printf("\nExiting...");
            getch();
            return 0;

        default:
            printf("\nInvalid choice");
        }
    }
}