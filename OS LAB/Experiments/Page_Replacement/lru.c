#include<stdio.h>
#include<conio.h>

int fr[3];

void display()
{
    int i;
    printf("\n");
    for(i=0;i<3;i++)
        printf("%d\t",fr[i]);
}

void main()
{
    int p[12]={2,3,2,1,5,2,4,5,3,2,5,2};
    int i,j,k,l,flag1,flag2,pf=0,frsize=3;
    int fs[3],index;

    float clrscr();

    for(i=0;i<frsize;i++)
        fr[i] = -1;

    for(j=0;j<12;j++)
    {
        flag1 = 0;
        flag2 = 0;

        // Check if page already present
        for(i=0;i<frsize;i++)
        {
            if(fr[i] == p[j])
            {
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }

        // If not present, check empty frame
        if(flag1 == 0)
        {
            for(i=0;i<frsize;i++)
            {
                if(fr[i] == -1)
                {
                    fr[i] = p[j];
                    flag2 = 1;
                    break;
                }
            }
        }

        // LRU Replacement
        if(flag2 == 0)
        {
            for(i=0;i<frsize;i++)
                fs[i] = 0;

            for(k=j-1, l=1; l<=frsize-1; l++, k--)
            {
                for(i=0;i<frsize;i++)
                {
                    if(fr[i] == p[k])
                        fs[i] = 1;
                }
            }

            for(i=0;i<frsize;i++)
            {
                if(fs[i] == 0)
                    index = i;
            }

            fr[index] = p[j];
            pf++;
        }

        display();
    }

    printf("\nNumber of page faults = %d", pf+frsize);

    getch();
}