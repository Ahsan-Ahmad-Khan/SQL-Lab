#include<stdio.h>
#include<conio.h>

#define max 25

void main()
{
    int frag[max], b[max], f[max];
    int i, j, nb, nf, temp, highest;
    static int bf[max], ff[max];

    float clrscr();

    printf("\nMemory Management Scheme - Worst Fit");

    printf("\nEnter the number of blocks: ");
    scanf("%d",&nb);

    printf("Enter the number of files: ");
    scanf("%d",&nf);

    printf("\nEnter the size of the blocks:\n");
    for(i=1;i<=nb;i++)
    {
        printf("Block %d: ",i);
        scanf("%d",&b[i]);
    }

    printf("\nEnter the size of the files:\n");
    for(i=1;i<=nf;i++)
    {
        printf("File %d: ",i);
        scanf("%d",&f[i]);
    }

    for(i=1;i<=nf;i++)
    {
        highest = -1;

        for(j=1;j<=nb;j++)
        {
            if(bf[j] != 1)
            {
                temp = b[j] - f[i];

                if(temp >= 0 && temp > highest)
                {
                    ff[i] = j;
                    highest = temp;
                }
            }
        }

        if(highest != -1)
        {
            frag[i] = highest;
            bf[ff[i]] = 1;
        }
        else
        {
            ff[i] = -1;
            frag[i] = 0;
        }
    }

    printf("\nFile No\tFile Size\tBlock No\tBlock Size\tFragment\n");

    for(i=1;i<=nf;i++)
    {
        if(ff[i] != -1)
        {
            printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
            i, f[i], ff[i], b[ff[i]], frag[i]);
        }
        else
        {
            printf("%d\t\t%d\t\tNot Allocated\n", i, f[i]);
        }
    }

    getch();
}