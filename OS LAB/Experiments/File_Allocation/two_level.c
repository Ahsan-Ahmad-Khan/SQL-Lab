#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct directory {
    char dname[10];
    char fname[10][10];
    int fcnt;
} dir[10];

int main() {
    int i, ch, dcnt = 0, k;
    char f[30], d[30];

    float clrscr();

    while(1) {

        printf("\n\n1. Create Directory");
        printf("\n2. Create File");
        printf("\n3. Delete File");
        printf("\n4. Search File");
        printf("\n5. Display");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch) {

        case 1:
            printf("\nEnter directory name: ");
            scanf("%s", dir[dcnt].dname);
            dir[dcnt].fcnt = 0;
            dcnt++;
            printf("Directory created");
            break;

        case 2:
            printf("\nEnter directory name: ");
            scanf("%s", d);

            for(i = 0; i < dcnt; i++) {
                if(strcmp(d, dir[i].dname) == 0) {
                    printf("Enter file name: ");
                    scanf("%s", dir[i].fname[dir[i].fcnt]);
                    dir[i].fcnt++;
                    printf("File created");
                    break;
                }
            }

            if(i == dcnt)
                printf("Directory not found");
            break;

        case 3:
            printf("\nEnter directory name: ");
            scanf("%s", d);

            for(i = 0; i < dcnt; i++) {
                if(strcmp(d, dir[i].dname) == 0) {

                    printf("Enter file name: ");
                    scanf("%s", f);

                    for(k = 0; k < dir[i].fcnt; k++) {
                        if(strcmp(f, dir[i].fname[k]) == 0) {
                            printf("File %s deleted", f);

                            strcpy(dir[i].fname[k],
                                   dir[i].fname[dir[i].fcnt - 1]);

                            dir[i].fcnt--;
                            break;
                        }
                    }

                    if(k == dir[i].fcnt)
                        printf("File not found");

                    break;
                }
            }

            if(i == dcnt)
                printf("Directory not found");

            break;

        case 4:
            printf("\nEnter directory name: ");
            scanf("%s", d);

            for(i = 0; i < dcnt; i++) {
                if(strcmp(d, dir[i].dname) == 0) {

                    printf("Enter file name: ");
                    scanf("%s", f);

                    for(k = 0; k < dir[i].fcnt; k++) {
                        if(strcmp(f, dir[i].fname[k]) == 0) {
                            printf("File %s found", f);
                            break;
                        }
                    }

                    if(k == dir[i].fcnt)
                        printf("File not found");

                    break;
                }
            }

            if(i == dcnt)
                printf("Directory not found");

            break;

        case 5:
            if(dcnt == 0) {
                printf("\nNo Directories");
            }
            else {
                printf("\nDirectory\tFiles");

                for(i = 0; i < dcnt; i++) {
                    printf("\n%s\t\t", dir[i].dname);

                    for(k = 0; k < dir[i].fcnt; k++) {
                        printf("%s ", dir[i].fname[k]);
                    }
                }
            }
            break;

        case 6:
            printf("\nExiting...");
            getch();
            return 0;

        default:
            printf("\nInvalid choice");
        }
    }
}
